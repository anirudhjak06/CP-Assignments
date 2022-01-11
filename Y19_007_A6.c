/*------------------------------------------------------------EXERCISES------------------------------------------------------------------*/

/*Problem 1*/
/*To print all the odd natural numbers in reverse*/
#include<stdio.h>
void main()
{ 
	/*int n,i=1;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(n>=i)
	{
		printf("%d\t",n);
		n=n-2;
	}
} */

/*Problem 2*/
/*To print all the alphabets from a to z */	
    	/*char ch;
    	printf("List of all alphabets from a to z is\n");
    	for(ch='a';ch<='z';ch++)
    	{
    		printf("%c\t",ch);
    	}
} */

/*Problem 3*/
/*To print sum of all the natural numbers between 1 to n */
	/*int n,i,sum=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum of the numbers is %d\n",sum);
} */

/*Problem 4*/
/*To print sum of all even natural numbers */
	/*int n,i,sum=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(i=0;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("Sum of the numbers is %d\n",sum);
} */

/*Problem 5*/
/*To print multiplication table of any number*/
	/*int z,x,i;
	printf("Enter x value for which you want multiplication table\n");
	scanf("%d",&x);
	for(i=1;i<=10;i++)
	{
		z=x*i;
		printf("%d*%d=%d\n",x,i,z);	
	}
	
} */

                         /*(OR)*/
	/*int x,i=1,z;
	printf("Enter x value for which you want multiplication table\n");
	scanf("%d",&x);
	while(i<=10)
	{
		z=x*i;
		printf("%d*%d=%d\n",x,i,z);	
		i++;	
	}
	
} */

/*Problem 6*/
/*To find first and last digit of a number */
/*#include<stdio.h>
#include<math.h>
int main()
{
	long int n,x=0,y,k;
	printf("Enter any number\n");
	scanf("%ld",&n);
	k=n;
	printf("%ld is your last digit\n",n%10);
	while(n>0)
	{
		n=n/10;
		x++;
	}
	y=k/pow(10,x-1);
	printf("%ld is your first digit\n",y);
	return 0;
} */

/*Problem 7*/
/* To enter a number and print it reverse */
	/*int n,i=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n>0)
	{
		i=i*10 + n%10;
		n=n/10;
	}
	printf("The reversed number is %d\n",i);
} */

/*Problem 8*/
/* To check if a given letter is a palindrome or not */
	/*int n,k,i=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	k=n;
	while(n>0)
	{
		i=i*10 + n%10;
		n=n/10;
	}
	if(k==i)
	printf("It is a palindrome\n");
	else
	printf("It is not a palindrome\n");
} */

/*Problem 9 */
/* To find frequency of each digit in a given integer */
	/*int n,p,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("The frequncy of each digit in %d is\n",n);
	while(n>0)
	{
		p=n%10;
		n=n/10;
		switch(p)
		{
		case 0:a0++;break;
		case 1:a1++;break;
		case 2:a2++;break;
		case 3:a3++;break;
		case 4:a4++;break;
		case 5:a5++;break;
		case 6:a6++;break;
		case 7:a7++;break;
		case 8:a8++;break;
		case 9:a9++;break;
		}
	}
	printf(" 0=%d\n 1=%d\n 2=%d\n 3=%d\n 4=%d\n 5=%d\n 6=%d\n 7=%d\n 8=%d\n 9=%d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);
} */

/*Problem 10*/
/*To enter a number and print it in words */
	/*int n,r=0,d=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	while (r>0)
	{	
		d=r%10;
		r=r/10;
		switch(d)
		{
			case 0:printf("zero ");break;
			case 1:printf("one ");break;
			case 2:printf("two ");break;
			case 3:printf("three ");break;
			case 4:printf("four ");break;
			case 5:printf("five ");break;
			case 6:printf("six ");break;
			case 7:printf("seven ");break;
			case 8:printf("eight ");break;
			case 9:printf("nine ");break;
		}
	}
} */


//Problem 11
/* To find the power of a given number */
/*#include<stdio.h>
#include<math.h>
void main()
{
	int n,j,p;
	printf("Enter n value\n");
	scanf("%d",&n);
	printf("To which power you want\n");
	scanf("%d",&j);
	p=pow(n,j);
	printf("Your answer is %d\n",p);
} */

/*Problem 12*/
/* To find all factors of a given number */
	/*int n,i;
	printf("Enter n value\n");
	scanf("%d",&n);
	printf("Factors of %d are \n",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\n",i);
	}
} */

/*Problem 13*/
/*To calculate the factorial of a number*/
	/*int n,i=1,f=1;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("Factorial of the given number is %d\n",f);
} */

/*Problem 14*/
/*To find HCF(GCD) of two numbers*/
	/*int a,b,i;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	for(i=a+b;i>0;i--)
	{
		if(a%i==0 && b%i==0)
		{
			printf("GCD of %d and %d is %d\n",a,b,i);
			break;
		}
	}
} */ 	

/*Problem 15*/
/*To find LCM of two numbers*/
	/*int i, num1, num2, max, lcm=1;
     	printf("Enter any two numbers to find LCM: ");
    	scanf("%d%d", &num1, &num2);
    	max = (num1 > num2) ? num1 : num2;
    	i = max;
    	while(1)
    	{
    		if(i%num1==0 && i%num2==0)
    		{
         		lcm = i;
         		break;
    	    	}
        	i += max;
    	}
    	printf("LCM of %d and %d = %d\n", num1, num2, lcm);
} */

/*Problem 16*/
/*To check whether the given number is prime or not*/
	/*int n,i,j=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		++j;
	}
	if(j==2)
	printf("It is a prime number\n");
	else
	printf("It is not a prime number\n");
} */
			//(OR)

	/*int n,i=2,r;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(i<n)
	{
		r=n%i;
		if(r==0)
		break;
		i++;
	}
	if(i==n)
	printf("It is a prime number\n");
	else
	printf("It is not a prime number\n");
} */

/* Problem 17*/
/* To print all the prime numbers from 1 to n */
	/*int n,i,k,j;
	printf("Enter n value\n");
	scanf("%d",&n);
	printf("Prime numbers till %d are \n",n);
	for(k=1;k<=n;++k)	
	{
		j=0;
		for(i=1;i<=k;++i)
		{
			if(k%i==0)
			++j;
		}
		if(j==2)
		printf("%d\n",k);	
	}
} */

/*Problem 18*/
/*To Find sum of all prime numbers between 1 to n*/
	/*int n,i,k,j,s=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(k=1;k<=n;++k)	
	{
		j=0;
		for(i=1;i<=k;++i)
		{
			if(k%i==0)
			++j;
		}
		if(j==2)
		s+=k;	
	}
	printf("Sum of prime numbers till %d is %d\n",n,s);
} */


/*Problem 19*/
/*To Find prime factors of a given number */
   	/*int prime,n,i,j,k;
    	printf("Enter n value\n");
    	scanf("%d",&n);
	printf("Prime Factors of %d are \n",n);
    	for(j=1;j<=n;j++)
    	{
    		k=0;
    		for(i=1;i<=j;i++)
    		{
        		if(j%i==0)
        		k++;
    		}
    		if(k==2)
    		{
        		if(n%j==0)
        		printf("%d\n",j);
    		}
    	}
} */


/*Problem 20*/
/*To check whether the given number is perfect number or not*/
	/*int n,i,p=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(i=1;i<n;++i)
	{
		if(n%i==0)
		p=p+i;
	}
	if(p==n)
	printf("It is a perfect number\n");
	else
	printf("It is not a perfect number\n");
} */


/*Problem 21*/
/*To print all the perfect numbers between 1 to n */
	/*int n,i,j,p;
	printf("Enter n value\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)	
	{
		p=0;
		for(i=1;i<j;i++)
		{
			if(j%i==0)
			p=p+i;
		}
		if (p==j)
		printf("list of perfect numbers till %d is %d\n",n,j);
	}
		if(n<6)
		printf("There is no perfect number till here\n");
} */

/*Problem 22*/
/*To print Fibonacci series upto n terms */
	/*int a=0,b=1,i,p=0,n;
	printf("Enter n value : ");
	scanf("%d",&n);
	p=a+b;
	printf("List of Fibonacci series till %d terms is: ",n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",p);
		a=b;
		b=p;
		p=a+b;
	}
} */









