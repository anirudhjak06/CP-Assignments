#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
/*Problem 1 */
/* To compute the value of 2^k for given k, where 0 ≤ k ≤ 32 */
	/*long int power(int k)
	{
		int i;
		long int m=1;
		for(i=0;i<k;i++)
		m=2*m;
		return m;
	}
   	void main()
{
	long int m;
	int k;
	printf("Enter the value of power between 0 and 32\n");
	scanf("%d",&k);
	if(k>=0 && k<=32)
	{
		long int m=power(k);
		printf(" 2 power %d value is %ld\n",k,m);
	}
	else
		printf("Plese enter the power between 0 and 32\n");
	
} */


/*Problem 2*/
/*To check whether the given string is a palindrome or not */

/*int palindrome(char text[])
{
	int i,n,length=0,reverse_text[100];
	for(i=0;text[i]!='\0';i++)
	length++;
	for(i=length-1;i>=0;i--)
	reverse_text[length-i-1]=text[i];
	n=1;	
	for(i=0;i<length;i++)
	{
		if(reverse_text[i]!=text[i])
		n=0;
	}
	return n;
}
void main()
{
	char text[100];
	printf("Enter a string\n"); 
	scanf("%s",text);	
	int n=palindrome(text);
	if(n==1)
	printf("%s is a palindrome\n",text);
	else
	printf("%s is not a palindrome\n",text);

} */


/*Problem 3 */
/* To find all the substrings of a string */

/* void findsubstrings(char s1[],char s2[],int k)
{
    int len1 = 0;
    int len2 = 0;
    while(s1[len1]!='\0')
    	len1++;
    while(s2[len2]!='\0')
        len2++;
    while(k<=len1)
    {
        for(int i=0;i<len1-k+1;i++)
    	{
        	char c1[k];
        	for(int j1=0;j1<k;j1++)
        	   c1[j1] = s1[i+j1];
        	for(int j=0;j<len2-k+1;j++)
        	{
        	    char c2[k];
        	    int f=1;
        	    for(int l1 = 0;l1<k;l1++)
        	        c2[l1] = s2[j+l1];
		
        	    for(int l2=0;l2<k;l2++)
        	    {
                	if(c2[l2]!=c1[l2])
                	{
                	    f=0;
                	    break;
                	}
           	   }
            	   if(f)
            	   {
             	      for(int q=0;q<k;q++)
             		   	printf("%c",c1[q]);
                	printf("\n");
            	   }
        	}
    	}
    	k++;
    }
}


void main()
{
	int k;
	char s1[100];
 	char s2[100];
   	printf("Enter two strings \n");
    scanf("%s",s1);
    scanf("%s",s2);
    printf("Enter a value k \n");
    scanf("%d",&k);
    findsubstrings(s1,s2,k);
} */ 


/*Problem 4 */
/* To find the smallest and largest even number and find GCD of these two numbers */

/* int GCD(int max, int min)
{
    int gcd;
    for(int i=1; i<min; i++)
    {
        if(max%i==0 && min%i==0)
        gcd=i;
    }
    return gcd;
}
void maxmin(int a[], int n)
{
    int min, max=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            min = a[i]<min?a[i]:min;
            max = a[i]>max?a[i]:max;
        }
    }
    printf("Smallest even number is %d and Greatest even number is %d\n", min, max);
   int gcd= GCD(max, min);
   printf("GCD of two numbers is %d\n", gcd);
}


int main()
{
    int n = 20 + rand()%10;
    int a[n];
    srand((unsigned int)getpid());
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100+1;
        printf("%d ", a[i]);
    }
    printf("\n");
    maxmin(a,n); 
} */ 


/* Problem 5 */
/* To take prime numbers from array and also print the sum which is present in array or not */

/*int pft(int a)
{
	int b=2,c=1;
	for (b=2;b<a;b++)
	{
		if(a%b==0)
		{
			c=0;
			break;
		}
			else continue;
	}
		if (c==1)
			return a;
}

int main()
{
	int i=0,j,k,l,g,z=0,a[20]={2,15,7,6,3,8,22,41,23,4,18,13,5,27,47,12,11,23,10,9},b[20];
	printf("Sum of prime numbers present in array\n");
	for (;i<20;i++)
	{
		k=a[i];
		if (pft(k)!=0)
		{
			b[z]=pft(k);
			z=z+1;
		}
		else
		 continue;
	}
	for (i=0;i<z;i++)
	{
		for (j=0;j<z;j++)
		{
        	if (b[j]!=b[i])
        	{
        	    g=b[i]+b[j];
        	}
       		 else 
       		     continue;
        	for (l=0;l<20;l++)
        	{
        	    if (g==a[l])
        	    {
        	        printf("%d \n",a[l]);
        	    }
        	    else continue;
        	}
    	}
	}
} */
	

/* Problem 6 */
/*To print start and end positions of all sub-arrays and its reverse order in the array */
 
/* void func(int b[])
{
    	int i,j;
     	for (i=0;i<30;i++)
 		{
        	for (j=29;j>(i+1);j--)
     		{	
         		if(b[i] == b[j] && b[i+1] == b[j-1] && b[i+2] == b[j-2])
         		{
             		printf("%d%d%d ",b[i],b[i+1],b[i+2]);
             		printf("%d%d%d \n",b[j-2],b[j-1],b[j]);
         		}
     		}
 		}
}

int main()
{
	int i,j;
	int a[30]={1,3,4,5,6,2,3,8,7,6,5,4,3,2,3,4,2,5,1,8,9,4,3,2,1,5,2,6,7,8};
	func(a);
  	return 0;
} */
	

/* Problem 7 */
/*To find a sub-matrix of order 3 and whose centered element is an even number  */
/* int main()
{
     srand(time(NULL));
     int i,j,num;
     num=5+rand()%(4);
     int a[num*num];
     for(i=0;i<(num*num);i++)
     {
         a[i]=10+rand()%(21);
         printf("%d ",a[i]);
         if(!((i+1)%num))
         printf("\n");
     } 
     printf("\n");
     for (i=(num+1);i<((num*num)-num-1);i++)
     {
         if (i%num && (i+1)%num && !(a[i]%2))
         {
             for(j=-1;j<2;j++)
             {
                 printf("%d %d %d \n",a[i+(j*num)-1],a[i+(j*num)],a[i+(j*num)+1]);
             }
             printf("\n");
         }
     }
} */




	



















