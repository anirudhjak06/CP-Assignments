
#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
#include<ctype.h> 
#include<time.h>
#include<string.h>
int main()
{
/*Problem 1*/
/* To count the no of prime factors and print them including their counts*/ 
	/*int n,up,low,m,t;
        int count;
        printf("Enter the number of random numbers you want to generate : ");
        scanf("%d",&n);
        printf("Enter the range : ");
        scanf("%d %d",&up,&low);
        for(int i=1;i<=10;i++)
        {
            n=rand()%(up-low+1)+low;
            printf("Random Number - %d\n",n);
            count=0;
            for(t=2;t<n;t++)
            {
                if(n%t==0)
                {
                    for(m=2;m<t;m++)
                    {
                        if(t%m!=0)
                            continue;
                        else
                            break;
                    }
                }
                else
                    continue;
               if(m==t)
               {
                   count++;
                   printf("%d\t",t);
               }

            }
            printf("\n Prime Factor Count - %d\n",count);
        }

	return 0;
} */

/*Problem 2*/
/*To find the armstrong number in a specific range*/
	/*long int x,y,i,k,c=0,sum=0,l;
	printf("Enter the value of a<100 \n");
	scanf("%ld",&x);
	printf("Enter the value of b>10000 \n");
	scanf("%ld",&y);
	for(i=x;i<y;i++)
	{
	k=i;
	while(k!=0)
	{
		c++;
		k=k/10;
	}
	l=i;
	while(l!=0)
	{
		sum=sum+pow((l%10),c);
		l=l/10;
	}
	if(sum==i)
	printf("Armstrong numbers are %ld\n",i);
	sum=0;c=0;
	}   
	return 0;  
} */	

/*Problem 3*/
/*To evaluate expressions*/
	/*int x,y,z,exp,min,max;
	printf("Enter any prime number between 2 and 35\n");
	scanf("%d",&x); 
	y=2*x;
	z=x%3;
	exp=x+ --y+ ++z/4 % y++ +x*2-y; 
	max=(x>y)?x:y;
	max=(max>z)?max:z;
	printf("The largest integer is %d\n",max);
	min=(x<y)?x:y;
	min=(min<z)?min:z;
	printf("The smallest integer is %d\n",min);
	return 0;
} */

/*Problem 4*/
/*To generate Pascal's Triangle */

/*long long fact(int k)
{
    	long long factorial = 1ll;
    	while(k>=1)
    	{
        	factorial *= k;
        	k--;
    	}
    	return factorial;
}

int main()
{
    	int i, m, n, j;
    	long long t;
    	printf("Enter number of rows : ");
    	scanf("%d", &n);
    	for(i=0; i<n; i++)
    	{
           	for(j=i; j<=n; j++)
            		printf("%3c", ' ');
        	for(m=0; m<=i; m++)
        	{
            		t = fact(i) / (fact(m) * fact(i-m));
			printf("%6lld", t);
        	}
		printf("\n");
    	}
    	return 0;
} */ 


/*Problem 5*/
/*To count the number of odd digits in a number and then sum of it*/
	/*int i=0,a,b,sum=0;
	long int n;
	printf("enter any number\n");
	scanf("%ld",&n);
	while(n>0)
	{
		a=n%10;
		if(a%2!=0)
		{
			sum=sum+a;
			i++;
			printf("The odd digits are %d\n",a);
		}
		n=n/10;
	}
	printf("No of odd digits is %d\n",i);
	printf("Sum of odd digits is %d\n",sum);
	return 0;
} */


/*Problem 6*/
/* Use switch case do some specific tasks mentioned in the question */
	/*int a=5,b=2,c=1,d=3,k,x;
	printf("enter the case\n");
	scanf("%d",&x);
    	switch(x)
        { 
		 case 1:
        	 k=a+b/2*c-d;
        	 printf("%d\n",k);
        	 break;
        	 case 2:
        	 k=2*a*a+0;
        	 printf("%d\n",k);
        	 break;
        	 case 3:
        	 k=a/2*b-d+c/a;
        	 printf("%d\n",k);
        	 break;
        	 case 4:
        	 k=d/4-c*b/a*3;
        	 printf("%d\n",k);
        	 break;
        	 default:
        	 printf("it is invalid input\n");
    	}
   return 0;
} */

/*Problem 7*/
/*To write a program to increase each element of 3*3 Matrix by 1*/
	/*int i,j,m,k,a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			a[i][j]+=1;
		}
	}
	for(k=0;k<3;k++)
	{
		for(m=0;m<3;m++)
			printf("%d\t", a[k][m]);
		printf("\n");
	}
	return 0;
} */
 
/*Problem 8*/
/*To add two 3*3 matrices */
/* int main()
{
	int a[3][3],b[3][3],c[3][3],res[3][3],i,j;
	printf("Enter first matrix values\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter second matrix values\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			res[i][j]=a[i][j]+b[i][j];

	}
	for(i=0;i<3;i++)
	{
		printf("\n\n");
		for(j=0;j<3;j++)
			printf("%d\t",res[i][j]);
	}
	return 0;
} */	

/*Problem 9 */
/*To reverse the elements of a 3*3 matrix */
	/* int i, j, k[3][3], res[3][3];
	printf("Enter first matrix values\n");
	for(i=0;i<3;i++)
	{
 	     for(j=0;j<3;j++)
 		        scanf("%d",&k[i][j]);
 	}
 	for(i=0;i<3;i++)
	{
 	     	for(j=0;j<3;j++)
 	   		res[j][i] = k[i][j];
 	}
	printf("After reversing\n");
   	for(i=0;i<3;i++)
	{
      		for(j=0;j<3;j++)
			printf("%d\t",res[i][j]);
		printf("\n");
	}
   	return 0;
}  */	


/*Problem 10*/
/*To perform Matrix multiplication of two 3*3 matrices*/
	/*int i, j, k, sum = 0;
  	int a[3][3], b[3][3], m[3][3]={0};
 	printf("Enter elements of first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)		
			scanf("%d",&a[i][j]);
	}
    	printf("Enter elements of second matrix\n");
    	for(i=0;i<3;i++)
     	 	for(j=0;j<3;j++)
        		scanf("%d",&b[i][j]);
	printf("The result after Matrix Multiplication\n");
   	for(i=0;i<3;i++)
   	{
     		for(j=0;j<3;j++) 
     		{
        		for(k=0;k<3;k++) 
			{
        	  		m[i][j]+=a[i][k]*b[k][j];
        		}
 
      		}
   	}
 
    	printf("Product of the matrices:\n");
    	for(i=0;i<3;i++)
    	{
      		for(j=0;j<3;j++)
       		{
			printf("%d\t", m[i][j]); 
      		} 
		printf("\n");
    	}
	return 0;
} */


/*Problem 11*/
/*To add two 4D arrays*/
	/* int a[4][4],b[4][4],res[4][4],i,j;
  	printf("enter the elements of matrix1\n");
   	for(i=0;i<4;i++)
    	{ 
      	for(j=0;j<4;j++)
       		scanf("%d",&a[i][j]);
    	}

  	printf("Enter the elements of matrix2\n");
   	for(i=0;i<4;i++)
    	{ 
      		for(j=0;j<4;j++)
       			scanf("%d",&b[i][j]);
    	}

   	for(i=0;i<4;i++)
    	{ 
      		for(j=0;j<4;j++)
        		res[i][j]=a[i][j]+b[i][j]; 
    	}
  	printf("Addition of Matrix is:\n");
   	for(i=0;i<4;i++)
    	{ 
      		for(j=0;j<4;j++)
        		printf("%d\t",res[i][j]);
        }
      	printf("\n");
	return 0;
} */


/*Problem 12*/
/*To write a program to calculate length of a string without using strlen*/
	/* char string[100];
	int i,length=0;
	printf("Enter a string \n");
	gets(string);
	for(i=0;string[i]!='\0';i++)
	        length++;
        printf("length of %s = %d\n", string, length);
	return  0;
} */ 


/*Problem 13*/
/*To write a program to concatenate two strings without using strcat*/
  	/*char string1[100],string2[100];
  	int i=0,j=0;
  	printf("Enter First String\n");
  	gets(string1);
  	printf("Enter Second String\n");
  	gets(string2);
  	while(string1[i]!='\0')
  	{
  	  	i++;
  	}
 	while(string2[j]!='\0')
  	{
    		string1[i]=string2[j];
    		j++;
    		i++;
  	}
  	string1[i]='\0';
  	printf("%s\n",string1);

} */

/*Problem 14*/
/*To copy a string without using strcpy*/
 	/*char string1[100], string2[100], i;
 	printf("Enter first string : ");
 	scanf("%s",string1);
	for(i=0;string1[i]!='\0';i++)
    	{
 		string2[i] = string1[i];
    	}
	string2[i]='\0';
    	printf("Second String is : %s\n", string2);
    	return 0;
} */ 


/*Problem 15*/
/*To compare two strings without using strcmp*/
        /*char str1[100], str2[100];
   	int i;
   	printf("\nEnter two strings :");
   	gets(str1);
   	gets(str2);
   	i = 0;
   	while (str1[i] == str2[i] && str1[i] != '\0')
   		i++;
   	if (str1[i] > str2[i])
   	printf("str1 > str2");
   	else if (str1[i] < str2[i])
   	printf("str1 < str2");
   	else
   	printf("str1 = str2");
      	return  0;
} */

/*Problem 16*/
/*To check whether an input string is palindrome or not */
    	/* char str1[100];
    	int i, length;
    	int temp = 0;
    	printf("Enter a string : ");
    	scanf("%s", str1);
    	length = strlen(str1);
    	for(i=0;i<length;i++)
    	{
            	if(str1[i] != str1[length-i-1])
	    	{
            		temp= 1;
            		break;
            	}
    	}
    	if(temp) 
        	printf("%s is not a palindrome\n", str1);    
    	else 
    	    	printf("%s is a palindrome\n", str1);
	return 0;	
} */

/*Problem 17*/
/*To reverse a string */
   	/* char s[1000], r[1000];
   	int begin, end, count = 0;
   	printf("Enter a string : ");
   	gets(s);
   	while (s[count] != '\0')
      		count++;
   	end=count-1;
   	for(begin=0;begin<count;begin++)
 	{
   	   	r[begin] = s[end];
   	   	end--;
   	}
   	r[begin] = '\0';
	printf("Output reversed string is : %s\n", r);
   	return 0;
} */




