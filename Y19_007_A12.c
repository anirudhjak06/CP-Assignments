#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Problem 1 */

/* Write a program to compare two files, printing the first line where they differ */

/* int main()
{
	FILE *fp1,*fp2;
	char file1[100],file2[100],ch1[100],ch2[100],ch;
	printf("Enter the name of your first file : ");
	scanf("%s",file1);
	fp1=fopen("file1","w");
	printf("Enter the contents for first file\n");
	while((ch=getchar())!=EOF)
		putc(ch,fp1);
	
	printf("\n\n");
	printf("Enter the name of your second file : ");
	scanf("%s",file2);
	printf("Enter the contents for second file\n");
	fp2=fopen("file2","w");
	while((ch=getchar())!=EOF)
		putc(ch,fp2);
	printf("\n\n");
	
	fclose(fp1);
	fclose(fp2);

	fp1=fopen("file1","r");
	fp2=fopen("file2","r");
	
	if (fp1 == NULL || fp2 == NULL) 
   	{ 
       		printf("Error : Files do not open"); 
       		exit(0);
    	} 

	while((getc(fp1))!=EOF && (getc(fp2))!=EOF)
	{
		fseek(fp1,-1,1);
		fseek(fp2,-1,1);
		fgets(ch1,100,fp1);
		fgets(ch2,100,fp2);
		if(strcmp(ch1,ch2))
		{
			printf("Error line in first file is %s\n",ch1);	
			printf("Error line in second file is %s\n",ch2);
			exit(0);
		}		
	}
		
	fclose(fp1);
	fclose(fp2);
	return 0;
} */

/* Probem 2 */
/* Write a program to print a set of files, starting each new one on a new page, with a title and a running page count for each file */

/* int main()
{
	int n,p,m;
	printf("Enter the maximum no. of files\n");
	scanf("%d",&n);
	printf("Enter the maximum no. of lines that a page should hold\n");
	scanf("%d",&p);
	FILE *fp[n];
	char ch1[100][n];
	printf("Enter the name of the files\n");
	for(int i=0;i<n;i++)
	{
		scanf("%s",ch1[i]);
		fp[i]=fopen(ch1[i],"r");
	}
	printf("\n");
	char ch2[100];
	for(int k=0;k<n;k++)
	{
		printf("FILE %s \n\n",ch1[k]);
		for(m=0;fgets(ch2,100,fp[k]);m++)
			printf("%s",ch2);
		for(m=m;m<p;m++)
			printf("\n");
		printf("\nPage Number %d\n\n",k+1);
		fclose(fp[k]);
	}
	return 0;
} */

/* Problem 3 */

/* Write a program that will print arbitrary input in a sensible way. As a minimum, it should print non-graphic characters in octal or hexadecimal according to local custom, and break long text lines */

/* void main()
{
	char file[100],ch1,ch2,ch3;
	FILE *fp;
	printf("Enter the name of your file : ");
	scanf("%s",file);
	fp=fopen("file","w");
	printf("Enter the contents for your file\n");
	while((ch1=getchar())!=EOF)
		putc(ch1,fp);
	fclose(fp);
	fp=fopen("file","r");
	int c=1;
	ch2=getc(fp);
	while(ch3!=EOF)
	{
		ch3=getc(fp);
		if(ch2==ch3)
		{
			c++;
			ch2=ch3;
		}
		else
		{
			printf("%d%c",c,ch2);		
			ch2=ch3;
			c=1;
		}
	}
	printf("\n");
} */



/* Problem 4 */
/* Write a program to compress/expand a provided file :
a. If the file is a .dna file then it should compress it using run-length encoding and store the result to a new file with an extension .dnare
b. If the file is in .dnare format then it should expand it to create the original .dna file */

/* int main(int argc, char *argv[])
{
    	FILE *fp1, *fp2;
    	fp1 = fopen(argv[1], "r");
    	char ch1,ch2;
    	int j = 0,c;
    	if (fp1 == NULL)
    	{
    	    printf("Files doesn't exist\n");
    	    return 1;
    	}
    	char fname[10];
    	strcpy(fname, argv[1]);
    	ch1 = getc(fp1);
    	while (ch1 != EOF)
    	{
    	    j++;
    	    ch1 = getc(fp1);
    	}
    	if (argv[1][j] == 'a' && argv[1][j - 1] == 'n' && argv[1][j - 2] == 'd')
    	{
    	    	fname[j + 3] = '\0';
    	    	fname[j + 2] = 'e';
    		fname[j + 1] = 'r';
		fp2=fopen(fname, "w");
        	int c1;
        	while ((ch1 = getc(fp1)) != EOF)
        	{
        	    	c1 = 0;
        		ch2 = ch1;
            		while (ch1 == ch2)
            		{
                		ch1 = getc(fp1);
                		c1 = c1 + 1;
            		}
            		fprintf(fp2, "%d", c1);
            		fprintf(fp2, "%c", ch1);
       		}
        	fclose(fp1);
        	fclose(fp2);
    	}
    	else if (argv[1][j] == 'e' && argv[1][j - 1] == 'r' && argv[1][j - 2] == 'a' && argv[1][j - 1] == 'n' && argv[1][j - 4] == 'd')
    	{
        	int m;
       	 	fname[j - 1] = '\0';
    		fp2 = fopen(fname, "w");
        	char string[] = {'0', '0', '0'};
        	ch1 = getc(fp1);
        	while (ch1 != EOF)
        	{
            		if (ch1 >= '0' && ch1 <= '9')
            		{
                		string[m] = ch1;
                		m--;
                		ch1 = getc(fp1);
                		continue;
            		}
            		sscanf(string, "%d", &c);
            		string[0] = 0;
            		string[1] = 0;
            		string[2] = 0;
            		m = 2;
            		for (int m = 0; m < c; m++)
            		{
                		putc(ch1,fp2);
            		}
            		ch1 = getc(fp1);
        	}
        		fclose(fp1);
        		fclose(fp2);
    	}
    	else
    	{
    	    	printf("Entered name of the file doesn't conatin .dna or .dnare extension\n");
        	fclose(fp1);
        	fclose(fp2);
        	return 1;
    	}
} */

/* Problem 5 */
/* Take two (.dna/.dnare) files as input to the program concat_dna. Please remember that all inputs should only be via command line arguments; in addition to the two file names the user can set a flag -compressed.
a. The objective is to concatenate the two (.dna/.dnare) files.
b. The resultant file should be .dna file if the flag is -compressed is not present; else if the flag is present it should be .dnare */

/* void main(int argc, char *argv[]) 
{
	if(argc != 3 && argc != 4) 
	{
		printf("ERROR!\tInvalid number of Arguments !\n");
		exit(1);
	}
	FILE *fp1, *fp2, *fp3, *fp4;
	char ch1,*ext1,*ext2,temp,k[64];
	int c = 0,n;
	if(argc == 3) 
	   {  
		ext1 = strchr(argv[1],'.');
	      	ext2 = strchr(argv[2],'.');
		if(!strcmp((ext1 + 1), "dna") && !strcmp((ext2 + 1), "dna")) 
		{   
			fp1 = fopen(argv[1], "a");
		      	fp2 = fopen(argv[2], "r");
			if(fp1 == NULL || fp2 == NULL) 
			{
				printf("ERROR\n");
			     	exit(1); 
			}
			while((ch1 = fgetc(fp2)) != EOF) 
			{
			  	fprintf(fp1,"%ch1",ch1);
			     	printf("%ch1",ch1);  }
				fclose(fp1);
				fclose(fp2);
		      		printf("\n\n\t\tThe Output File is %s\n",argv[1]);
		   	} 
			else if(!strcmp((ext1 + 1), "dnare") && !strcmp((ext2 + 1), "dnare")) 
		  	{ 
				fp1 = fopen(argv[1], "r");
		     		fp2 = fopen(argv[2], "r");
		     		fp3 = fopen("result1.dna", "w");
		     		fp4 = fopen("result2.dna", "w");
				while(fscanf(fp1,"%d",&c) != EOF && fscanf(fp1,"%ch1",&ch1) != EOF) 
		          	{  
					while(c > 0) 
			       		{
					  	fprintf(fp3,"%ch1",ch1);
			          		--c;  
					}
			   	}
				while(fscanf(fp2,"%d",&c) != EOF && fscanf(fp2,"%ch1",&ch1) != EOF) 
			  	{ 
			 		while(c > 0) 
			       		{ 
		 				fprintf(fp4,"%ch1",ch1);
				  		--c; 		
					}
			   	}
				fclose(fp4);
				fp4 = fopen("result2.dna", "r");
				while((ch1 = getc(fp4)) != EOF) 
			  	{
	  				fprintf(fp3,"%ch1",ch1); 
				}
				fclose(fp1);
				fclose(fp2);
				fclose(fp3);
				fclose(fp4);
		      		strcpy(k,argv[1]);
		      		n = strlen(k);
				k[n-2] = '\0';  
		     		fp1 = fopen(k,"w");
		     		fp3 = fopen("result1.dna","r");
				while(fscanf(fp3,"%ch1",&ch1) != EOF)
			  	{  
					fprintf(fp1,"%ch1",ch1);
			     		printf("%ch1",ch1);
			  	}
				printf("\n\nThe Outputfile is %s\n",k);

		  	} 
			else if(!strcmp((ext1 + 1), "dna") && !strcmp((ext2 + 1), "dnare")) 
		  	{
			  	fp1 = fopen(argv[1], "a");
		     		fp2 = fopen(argv[2], "r");
		     		fp4 = fopen("result2.dna", "w");
				while(fscanf(fp2,"%d",&c) != EOF && fscanf(fp2,"%ch1",&ch1) != EOF) 
			  	{ 
			 		while(c > 0) 
			      		{
						fprintf(fp4,"%ch1",ch1);
						--c;  
					}
			   	}
				fclose(fp4);
				fp4 = fopen("result2.dna", "r");
				while((ch1 = getc(fp4)) != EOF) 
			  	{ 
	 				fprintf(fp1,"%ch1",ch1);
		             		printf("%ch1",ch1); }
					fclose(fp1);
					fclose(fp2);
					fclose(fp4);
		     			printf("\n\n\t\tThe Output File is %s\n",argv[1]);
		  		} 
				else if(!strcmp((ext1 + 1), "dnare") && !strcmp((ext2 + 1), "dna")) 
		  		{
	  				fp1 = fopen(argv[1], "r");
		     			fp2 = fopen(argv[2], "r");
		     			fp3 = fopen("result1.dna", "w");
					while(fscanf(fp1,"%d",&c) != EOF && fscanf(fp1,"%ch1",&ch1) != EOF) 
			  		{
  						while(c > 0) 
			      			{
							fprintf(fp3,"%ch1",ch1);
							--c;
					  	}
			   		}
					fclose(fp3);
					fp3 = fopen("result1.dna", "a");
					while((ch1 = getc(fp2)) != EOF) 
			  		{
		 				fprintf(fp3,"%ch1",ch1);
		 			}
					fclose(fp1);
					fclose(fp2);
					fclose(fp3);
	
					strcpy(k,argv[1]);
			 	     	n = strlen(k);
					k[n-2] = '\0';  
		     			fp1 = fopen(k,"w");
		     			fp3 = fopen("result1.dna","r");
					while(fscanf(fp3,"%ch1",&ch1) != EOF)
			  		{
			  			fprintf(fp1,"%ch1",ch1);
			     			printf("%ch1",ch1);
		  			}
					printf("\n\nThe Outputfile is %s\n",k);
				}

			} 
	else if(argc == 4 && (!strcmp(argv[1], "-compressed") || !strcmp(argv[2], "-compressed") || !strcmp(argv[3], "-compressed"))) 
	{
	  	if(!strcmp(argv[1], "-compressed")) 
		{  
			argv[1] = argv[2];
	  	   	argv[2] = argv[3];
	  	} 
	     	else if(!strcmp(argv[2], "-compressed")) 
			argv[2] = argv[3];
		
		ext1 = strchr(argv[1],'.');
		ext2 = strchr(argv[2],'.');
		if(!strcmp((ext1 + 1), "dnare") && !strcmp((ext2 + 1), "dnare")) 
		{
	  		fp1 = fopen(argv[1], "a");
		     	fp2 = fopen(argv[2], "r");	

			while((ch1 = getc(fp2)) != EOF) {
				fprintf(fp1,"%ch1",ch1);

			}
			fclose(fp1);
			fclose(fp2);
		     	printf("\n\n\t\tThe Output File is %s\n",argv[1]);
		} 
		else if(!strcmp((ext1 + 1), "dna") && !strcmp((ext2 + 1), "dna")) 
		{
  			fp1 = fopen(argv[1], "r");
		     	fp2 = fopen(argv[2], "r");
		     	fp3 = fopen("result1.dnare", "w");
		     	fp4 = fopen("result2.dnare", "w");
			while((ch1 = getc(fp1)) != EOF) 
			{
	  			if(ch1 != temp && c != 0) 
				{ 
					fprintf(fp3,"%d%ch1",c,temp);
					c = 0; 
				}
				temp = ch1;
				++c;
			}
				c = 0;
				while((ch1 = getc(fp2)) != EOF) 
			 	{
	  				if(ch1 != temp && c != 0) 
					{  
						fprintf(fp4,"%d%ch1",c,temp);
				   		c = 0;
 					}
					temp = ch1;
					++c;
			   	}
			fclose(fp1);
			fclose(fp2);
			fclose(fp3);
			fclose(fp4);

			fp3 = fopen("result1.dnare", "a");
			fp4 = fopen("result2.dnare", "r");

			while((ch1 = getc(fp4)) != EOF) 
			{
  				fprintf(fp3,"%ch1",ch1);
 			}			
			fclose(fp3);
			fclose(fp4);
			strcpy(k,argv[1]);
		      	n = strlen(k);
			k[n] = 'r';
			k[n+1] = 'e';  
		     	fp1 = fopen(k,"w");
		     	fp3 = fopen("result1.dnare","r");
			while(fscanf(fp3,"%ch1",&ch1) != EOF)
			{
	  			fprintf(fp1,"%ch1",ch1);
			     	printf("%ch1",ch1);
  			}
			printf("\n\nThe Outputfile is %s\n",k);
	
 		} 
		else if(!strcmp((ext1 + 1), "dnare") && !strcmp((ext2 + 1), "dna")) 
		{ 
			fp1 = fopen(argv[1], "a");
		    	fp2 = fopen(argv[2],"r");
		    	fp4 = fopen("result2.dnare","w");
			while((ch1 = getc(fp2)) != EOF) 
			{
  				if(ch1 != temp && c != 0) 
			       	{
  					fprintf(fp4,"%d%ch1",c,temp);
			   	  	c = 0;
  				}
				temp = ch1;
				++c;
			}
			fclose(fp2);
			fclose(fp4);
			
			fp4 = fopen("result2.dnare", "r");
			while((ch1 = getc(fp4)) != EOF) 
			{  
				fprintf(fp1,"%ch1",ch1);
			     	printf("%ch1",ch1); }			
				fclose(fp1);
				fclose(fp4);			
		     		printf("\n\n\t\tThe Output File is %s\n",argv[1]);
		 	} 
			else if(!strcmp((ext1 + 1), "dna") && !strcmp((ext2 + 1), "dnare")) 
		  	{
  				fp1 = fopen(argv[1], "r");
		     		fp2 = fopen(argv[2],"r");
		     		fp3 = fopen("result1.dnare","w");
				while((ch1 = getc(fp1)) != EOF) 
			  	{
   					if(ch1 != temp && c != 0) 
					{
  						fprintf(fp3,"%d%ch1",c,temp);
			  	   		c = 0;
  					}
					temp = ch1;
					++c;
		 	   	}
			fclose(fp1);
			fclose(fp3);
			
			fp3 = fopen("result1.dnare", "a");
			while((ch1 = getc(fp2)) != EOF) 
			{ 
 				fprintf(fp3,"%ch1",ch1);
			     	printf("%ch1",ch1); 
			}			
				fclose(fp2);
				fclose(fp3);	

			strcpy(k,argv[1]);
		      	n = strlen(k);
			k[n] = 'r';
			k[n+1] = 'e';  
		     	fp1 = fopen(k,"w");
		     	fp3 = fopen("result1.dna","r");
			while(fscanf(fp3,"%ch1",&ch1) != EOF)
			{
	  			fprintf(fp1,"%ch1",ch1);
			     	printf("%ch1",ch1);  
			}
			printf("\n\nThe Outputfile is %s\n",k);
		 	} 
			else printf("!ERROR! NO SUCH FLAG FOUND\n");
		}

} */


/* Problem 6 */
/* Write a program that catches at least five file errors that can occur when using fopen and/or fclose commands. When a error occurs and appropriate message should be displayed to the user */

/* int main()
{
	FILE *fp1;
	char name[30],ch1[100],ch2[100],ch3[100];
	printf("Enter file name\n");
	scanf("%s",name);
	printf("Opening in read mode\n");
	fp1=fopen(name,"r");
	if(fp1=fopen(name,"r")==NULL)
		printf("The file does not exists\n");
	if(!fp1)
		printf("The file pointer is null\n");
	if(!fgets(ch1,100,fp1))
		printf("The file is empty\n");
	else
		printf("No errors\n");
	fclose(fp1);
	printf("Opening in write mode\n");
	FILE *fp2=fopen(name,"w");
	if(fp2=fopen(name,"r")==NULL)
		printf("The file does not exists\n");
	if(!fp2)
		printf("The file pointer is null\n");
	if(!fgets(ch2,100,fp2)
		printf("The file is empty\n");
	if(fgets(ch2,100,fp2))
		printf("The file has some data in it\n");
	else
		printf("No errors\n");
	fclose(fp2);
	printf("Opening in append mode\n");
	FILE *fp3=fopen(name,"a");
	if(fp3=fopen(name,"r")==NULL)
		printf("The file does not exists\n");
	if(!fp3)
		printf("The file pointer is null\n");
	if(!fgets(ch3,100,fp3))
		printf("The file is empty\n");
	else
		printf("No errors\n");
	fclose(fp2);
	return 0;
} */


				
