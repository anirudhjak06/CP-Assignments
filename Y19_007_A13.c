#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/* Problem 1 */
/* Write a program to dynamically allocate an array of 1000 integers and store them with a value starting from 1 with an increment of 1 as we traverse the array */
/* void main()
{
        int *p;
        p=(int*)malloc(1000*sizeof(int));
        if(p==NULL)
        {
                printf(" There is no memory allocated\n");
                exit(1);
        }
        else
        {
                for(int i=0;i<1000;i++)
                        p[i]=i+1;
        }        
        printf("Printing the details stored in the memory\n");
        for(int j=0;j<1000;j++)
                        printf("%d\t",p[j]);
        printf("\n");                
} */

/* Problem 2*/
/* Note down your observations for the following snippets of code used in a program. Modify the below code to better versions (if required) and state the reasons for modification.
a. int *ip; ip = calloc(1000, sizeof(int));
b. for(p =head; p != NULL; p = p->next){ free(p); } */

/* void main()
{
	int *ip;
	ip=(int *)calloc(1000,sizeof(int));
    	for (int i=0;i<8;i++)
        	printf("%d\n", *(ip + i));

	printf("\nCalloc creates a memory with initial value 0 given to all elements \n");
	printf("\nBut if we type cast it , it will be useful for us to acess each memory location \n");
	
	printf("\nAs the memory is stored in heap we manually nead to free it by the free commad");
	printf("\nfor(p=head;p!=NULL;p->next) { free(p); } \n here p must be a pointer\n"); 
} */

/* Problem 3 */
/* Write a function to do find-and-replace in a file. The filename, source-string and replacement string should all be passed as command-line arguments.Assume that the length of source and the replacement string are the same. */

/*char *replaceWord(const char *s, const char *oldW, const char *newW) 
{ 
        char *result; 
        int i, cnt = 0; 
        int newWlen = strlen(newW); 
        int oldWlen = strlen(oldW);  
        for (i = 0; s[i] != '\0'; i++) 
        { 
                if (strstr(&s[i], oldW) == &s[i]) 
                { 
                        cnt++;  
                        i += oldWlen - 1; 
                } 
        }
          
        result = (char *)malloc(i + cnt * (newWlen - oldWlen) + 1); 
  
        i = 0; 
        while (*s) 
        { 
                if (strstr(s, oldW) == s) 
                { 
                        strcpy(&result[i], newW); 
                        i += newWlen; 
                        s += oldWlen; 
                } 
                else
                        result[i++] = *s++; 
        }    
        result[i] = '\0'; 
        return result; 
} 
 

int main(int argc,char *argv[])
{
        FILE *fp;
        char ch,str[300],c[50],d[50];
        char *result=NULL;
        int i;
        fp=fopen(argv[1],"r");
        i=0;
        printf("\nThe file contains\n");
        while((ch=getc(fp))!=EOF)
        { 
                putchar(ch);
                str[i]=ch;
                i++;
        }             
         
   	if(fp==NULL)
       	{
        	printf("The file does not contain anything\n");
        	exit(1);
        }
        strcpy(c,argv[2]);
        strcpy(d,argv[3]);
        printf("\nYour old word is %s\n",c);
        printf("\nYour new replacement word is %s\n",d);
        printf("\nOld String is %s\n:",str);
        
        result=replaceWord(str,c,d);
        
        printf("\nNew String is %s\n:",result);     
        free(result);
        return 0;                      
} */     


/* Problem 4 */
/* Improve the above program to operate on multiple files and multiple replacements, at once. (Hint: you can use flag ‘-f’ for files , flag ‘-s’ for source strings and flag ‘-r’ for replacement strings.) Assume that the length of source and replacement strings are the same */

/* void replace(char *w, const char *oldone, const char *newone)
{
   	char *s, k[1000];
    int i = 0;
    int owlen;
    owlen = strlen(oldone);
    while ((s = strstr(w, oldone)) != NULL)
    {
      	strcpy(k, w);
        i = s - w;
        str[i] = '\0';
        strcat(w, newone);
        strcat(w, k + i + owlen);
    }
}

void removeAll(FILE *pfil, FILE *ptem, FILE *pfil2, char *argv[])
{
    char string[10];
    char buffer[1000];
    while (fscanf(pfil2, "%s", string) != EOF)
    {
        while ((fgets(buffer, 1000, pfil)) != NULL)
        {
            replaceAll(buffer, string, "");
            fputs(buffer, ptem);
            fputc('\n', ptem);
        }
        fclose(pfil);
        fclose(ptem);
        remove(argv[5]);
        rename("copy.txt", argv[5]);
        pfil = fopen(argv[5], "r");
        ptem = fopen("copy.txt", "r");
    }
}

int  main(argc,argv[]){
int i, j, k;
    for (i = 0; argv[i + 2] != "-s"; i++);
    for (j = 0; argv[i + 2 + j] != "-r"; j++);
    for (k = 0; argv[2 + i + j + k] != ""; k++);
    if (j != k)
    {
        printf("no of entered strings and replaced strings are different\n");
        return 1;
    }
    for (int m = 1; m <= i; m++)
    {
        fp1= fopen(argv[m + 2], "r");
        fp2 = fopen("copy.txt", "w");
        if (fp1 == NULL)
        {
            printf("entered file %s doesnot exist\n", argv[m + 2]);
            return 1;
        }
        while ((fgets(c, 1000, fp1)) != NULL)
        {
            for (int l = 1; l <= j; l++)
            {
                replaceAll(c, argv[i + 2 + l], argv[i + 2 + j + l]);
                fputs(c, fp2);
                fputc('\n', fp2);
            }
        }
        fclose(fp1);
        fclose(fp2);
        remove(argv[m + 2]);
        rename("copy.txt", argv[m + 2]);
} */


/* Problem 5 */
/* For a given file you need to get and print n-gram context strings. For example, say I am analyzing a file ‘sample.txt’ and I found that ‘take’ is the word that appears the most number of times. I extract from the file 3-grams where take appears as the middle word, like ‘buy take out’.For 5-gram context, I should find all occurrences of ‘take’ and print the two preceding words and two succeeding words. Assume that in n-gram ‘n’ is always odd */

/* typedef struct wordstat
{
    char word[100];
	int freq;

} data;

void fifth(char strarg[])
{
    char filename[100];
    printf("enter 1 to find n-gram of the first file given in argument or enter 0 to give your own file\n");
    int choice;
    scanf("%d", &choice);
    if (choice)
    {
		strcpy(filename, strarg);
    }
    else
    {
        printf("enter filename\n");
        scanf("%s", filename);
    }
    printf("enter the value of n\n");
    int n;
    scanf("%d", &n);
    FILE *f = fopen(filename, "r");
    char currentline[1000];
    char largestring[100000];
    int start = 0;
    int words = 0;
    while (fgets(currentline, 1000, f))
    {
        int curlen = strlen(currentline);
        strcpy(largestring + start, currentline);
        start += curlen;
        for (int i = start - curlen; i < start; i++)
        {
            if (largestring[i] == ' ' || largestring[i] == '\n' || largestring[i] == '.')
            {
                words++;
            }

        }

    }
    data stats[words];
    for (int i = 0, x = 0; i < start; i++)
    {
        int k = 0;
        while ((largestring[i] > 64 && largestring[i] < 91) || (largestring[i] > 96 && largestring[i] < 123))
        {
            stats[x].word[k] = largestring[i];
            i++;
            k++;
        }
        stats[x].word[k] = '\0';
        x++;
    }
    for (int i = 0; i < words; i++)
    {
        stats[i].freq = 0;
    }
    for (int i = 0; i < words; i++)
    {
       	for (int j = 0; j < words; j++)
        {
            if (!(strcmp(stats[i].word, stats[j].word)))
            {
                stats[i].freq++;
            }
        }
    }
    for (int i = 0; i < words; i++)
    {
        if (strlen(stats[i].word) < 1)
        {
            stats[i].freq = 0;
        }
    }
    int maxcount = 0;
    int maxind = 0;
    for (int i = 0; i < words; i++)
    {
        if (stats[i].freq > maxcount)
        {
            maxcount = stats[i].freq;
            maxind = i;
        }
    }
    if (maxcount == 1)
    {
        printf("no word appears more than once \n");
        return;
    }
    printf("the word that appears the maximum number of times is '%s'\n", (stats[maxind].word));
    printf("it appears %d times \n", maxcount);
    int offset = 0;
    data finword[2 * n];
    int x = 0;
    for (int i = (maxind - n); i < (maxind + n + 1); i++)
    {
        if (strlen(stats[i].word) > 1)
        {
            strcpy(finword[x].word, stats[i].word);
            finword[x].freq = stats[i].freq;
            x++;
        }
    }
    int mx2 = 0, mi2 = 0;
    for (int i = 0; i < x; i++)
    {
        if (finword[i].freq > mx2)
        {
            mx2 = finword[i].freq;
            mi2 = i;
        }
    }
    for (int i = (mi2 - n / 2); i <= (mi2 + n / 2); i++)
    {
        printf("%s ", finword[i].word);
    }
}
int main(int argc, char *argv[])
{
	fifth(argv[1]);
	return 0;
} */


/* Problem 6 */
/* Create a function which takes as arguments two files.The first is the source file and the second is called the stop-words file. You should remove all words listed in the stop-words file from the source-file */

/* int main(int argc,char* argv[])
{
	afmo(argc,argv);
}

void afmo(int argc,char* argv[])
{
    FILE *fs,*fp;
    fs=fopen("argv[1]","r");
    fp=fopen("argv[2]","r");
    if(fs==NULL)
    {
        puts("cannot open source file");
        exit(1);
    }
    if(fp==NULL)
    {
        puts("cannot open stop word file");
        exit(1);
    }
    fgets(ch2,fp);

    fgetc(ch1,fs);
    int i=0;
    while(!feof(fs))
    {
        if(ch1==ch2[i])
        {
            fgetc(ch1,fs);
            i++;
        }
        else
            i=0;

        if(i==k)
        {
            fseek(fs, -i, ftell(fs));
            for(int j=0;j<i-1;j++)
            {fprintf(f,"%c"," ");}
        }

    }
    fclose(fs);
    fclose(fp);
} */


/* Problem 7 */
/* Create a function which combines answers to 5 and 6. Remove stop words first and print n-gram for the most frequent word */
/*
void Most_frequency_and_remove(FILE *pfil, FILE *ptem, FILE *pfil2, char *argv[])
{
    char **g_argv;
    g_argv = argv;
    removeAll(pfil, ptem, pfil2, g_argv);
    int n;
    char c;
    char temp1[100];
    char arr[100][10];
    int a[100];
    char buffer1[10];
    printf("enter value of n in n-gram(n is odd):");
    scanf("%d", &n);
    n = (n - 1) / 2;
    fclose(ptem);
    ptem = fopen(argv[5], "r");
    for (int k = 0; k < 100; k++)
    {
        a[k] = 0;
    }
    c = getc(pfil);
    int i = 0;
    int m = 0;
    while (c != EOF)
    {
        if (c != ' ')
        {
            buffer1[m] = c;
            m++;
            c = getc(pfil);
            continue;
        }
        strcpy(arr[i], buffer1);
        while (fgets(temp1, 100, ptem) != NULL)
        {
            if (strstr(temp1, buffer1) != NULL)
                a[i]++;
        }
        rewind(ptem);
        i++;
        m = 0;
        c = getc(pfil);
    }
    int max;
    max = a[0];
    for (int k = 1; k <= i; k++)
    {
        if (a[k] > max)
        {
            max = a[k];
        }
    }
    for (int k = 0; k <= i; k++)
    {
        if (a[k] == max)
        {
            max = k;
            break;
        }
    }
    for (int k = n; k >= 0; k++)
    {
        printf("%s", arr[n - k]);
    }
    for (int k = 1; k <= n; k++)
    {
        printf("%s", arr[n + k]);
    }
}

int main(int argc,char* argv[])
{
pfil = fopen(argv[5], "r");
    ptem = fopen("copy.txt", "w");
    pfil2 = fopen(argv[6], "r");
    Most_frequency_and_remove(pfil, ptem, pfil2, gargv);
    fclose(pfil);
    fclose(ptem);
    fclose(pfil2);
} */

/* Problem 8 */
/* Create a function which creates word frequency statistics of a file, after removing stopwords */

/*int main(int argc,char* argv[])
{
    pfil = fopen(argv[5], "r");
    ptem = fopen(filename, "r");
    for (int k = 0; k < 100; k++)
    {
        a[k] = 0;
    }
    c = getc(pfil);
    i = 0;
    m = 0;
    while (c != EOF)
    {
        if (c != ' ')
        {
            buffer[m] = c;
            m++;
            c = getc(pfil);
            continue;
        }
        strcpy(arr[i], buffer1);
        while (fgets(temp1, 100, ptem) != NULL)
        {
            if (strstr(temp1, buffer1) != NULL)
                a[i]++;
        }
        rewind(ptem);
        i++;
        m = 0;
        c = getc(pfil);
    }
    for (int k = 0; k < i; k++)
    {
        printf("%s - %d", arr[k], a[k]);
    }

} */

/* Problem 9 */
/* void ninth()
{
    printf("enter the file name, the min shift and then the max shift\n");
    char filename[200];
    scanf("%s", filename);
    int a, b;
    scanf("%d%d", &a, &b);
    printf("do you want the file to be encrypted(1) or decrypted(0)\n");
    int choice;
    scanf("%d", &choice);
    if (choice)
        encrypt(filename, a, b);
    else
        decrypt(filename, a, b);
}

void encrypt(char filename[], int a, int b)
{
    int acp = a;
    FILE *f = fopen(filename, "r");
    char longstring[100000];
    char curlin[10000];
    int start = 0;
    FILE *op = fopen("q9op.txt", "w");
    while (fgets(longstring, 10000, f))
    {

        for (int i = 0; i < strlen(longstring); i++)
        {
            if (longstring[i] > 64 && longstring[i] < 91)
            {
                char temp = longstring[i] + a;
                if (temp > 64 && temp < 91)
                {
                    longstring[i] = temp;
                }
                else
                {
                    for (int j = 0; j < a; j++)
                    {
                        if (longstring[i] + 1 > 64 && longstring[i] + 1 < 91)
                        {
                            longstring[i]++;
                        }
                        else
                            longstring[i] = 'A';
                    }
                }
                a++;
                if (a > b)
                {
                    a = acp;
                }
            }
        }
        fprintf(op, longstring);
    }
} */



