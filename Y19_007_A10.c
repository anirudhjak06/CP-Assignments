/* Problem 1 */
/* To write a simple function to cycle(‘int’) values stored in three variables */
/* #include<stdio.h>
void cycle(int *p,int *q,int *r)
{
	int temp=*p;
	*p=*r;
	*r=*q;
	*q=temp;
}

void main()
{
	int x,y,z,*p,*q,*r;
	p=&x;
	q=&y;
	r=&z;
	printf("Enter three numbers for cycling\n");
	scanf("%d %d %d",p,q,r);
	printf("Numbers before cycling are %d %d %d\n",*p,*q,*r);
	cycle(p,q,r);
	printf("Numbers after cycling are %d %d %d\n",*p,*q,*r);
} */

/* Problem 2 */
/* To write a recursive function to compute factorial of a given number */
/* #include<stdio.h>
void factorial(int *n,int *k)
{
	if(*n>1)
	{
		*k=*k * *n;
		*n=*n-1;
		factorial(n,k);
	}
	else
	*k=*k * 1;

}
void main()
{
	int n,k=1;
	printf("Enter a number for which you want factorial\n");
	scanf("%d",&n);
	factorial(&n,&k);
	printf("Result is %d\n",k);
} */

/* Problem 3 */
/* Write a function which takes in an empty array of size 30 and fills it with the first 30
values of the function T(n) = T(n-1) + T(n-3) for n > 2. Where T(0)=0, T(1)=1,T(2)=1.
a. The function should only populate, you should print the result in main() after the
function call */ 
/* #include<stdio.h>
void t(int T[])
{
	T[0] = 0;
	T[1] = 1;
	T[2] = 1;
	for (int i=3;i<30;i++)
	*(T+i) = *(T+i-1) + *(T+i-3);
}

void main()
{
	int T[30];
	t(T);
	for (int j=0;j<30;j++)
		printf("%d \t",*(T+j));	
	printf("\n");
} */


/*Problem 4 */
/* In main, accept a string of ‘n’ characters (taken as input from the user) and write a
function which takes as input
a. a pointer to the string
b. Reverses the list of characters in place (i.e same memory location)
c. The function should only reverse, you should only print the result in main() */
#include<stdio.h>
void rev(char *p, int *n)
{
	int count=0;
	int i,j,temp;
	
	for(i=0, j=*n-1 ; i<*n/2 ; i++,j-- )
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
}

void main()
{
	printf("Enter the size of the string : ");
	int n;
	scanf("%d",&n);
	char str[n];
	printf("Enter the string : ");
	scanf("%s",str);
	rev(str,&n);
	printf("The reversed string is : ");
	for(int i=0;i<n;i++)
		printf("%c ",str[i]);
	printf("\n");

} 

/* Problem 5 */
/* In main, use an array to store the integers (taken as input from user) and write a function
which takes as input
a. the pointer to the first memory location
b. an integer pointer to store the sum (result-pointer)
c. an integer pointer which contains the length of the array.

The function should access the array elements using the pointer, compute sum and
populate the appropriate memory location with the result*/
/* #include<stdio.h>
void opp(int a[],int *p,int *q,int *r,int x)
{
	int sum=0;
	*p=a[0];
	printf("The pointer pointing to the first memory location is %d\n",*p);
	*q=x;
	 printf("Size of the array is %d\n",*q);
	for(int j=0;j<x;j++)
	sum+=a[j];
	*r=sum;
	printf("Sum =%d\n",*r);
	printf("Adress of sum is %d\n",&r);
}

void main()
{
	int n,p,q,r;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int x=sizeof(a)/sizeof(a[0]);
	opp(a,&p,&q,&r,x);
} */


/* Problem 6 */
/* To rearrange the given string according to some specific tasks given in the question */
 #include <stdio.h>
#include <string.h>
/* void rearrangement(char *p, char v[], int k, int n, int a, int b, int l)
{
    int o[n],j,h;
    for(int i=0; i<n; i++)
    {
        int k=(i%n);
        j=(a*k+b)%n;
        o[i]=j;
    }
    for(int u=k;k>0;k--)
    {
        int q=((k-1)*n);
        int w=((k*n)-1);
        for(int i=q, h=0;i<=w,h<n; i++,h++)
            p[i]=v[q+o[h]];
    }
        
}
void main()
{
	char x[100];
	printf("Enter the string : ");
	scanf("%[^\n]*c",x);
	int n,length,in,b,a;
	length=strlen(x);
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	in=(length+length %n)-1;
	int k=(in/n);
	if ((length%n) != 0)
	{
	    for(int j=length;j<in;j++)
	    x[j]='1';
	}
	char r[100];
	int m=(n*k);
	for(int i=0;i<m;i++)
		r[i]=x[i];

	rearrangement(x, r, k, n, a, b, length);
	for(int i=0;i<m;i++)
	printf("%c",x[i]);

	printf("\n");
} */ 
 






