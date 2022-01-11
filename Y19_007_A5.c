//Problem 1
//To read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
/* #include<stdio.h>
void main()
{ */
	/*int m,n;
	printf("Enter m value\n");
	scanf("%d",&m);
	if(m>0)
	printf("The value of n=1\n");
	else if(m==0)
	printf("The value of n=0\n");
	else
	printf("The value of n=-1\n");
} */

//Problem 2
//To categorize the person according to their height.
	/*float height;
	printf("Enter the height of the person in cms\n");
	scanf("%f",&height);
	if(height<=135)
	printf("The height is categorised as short\n");
	else if(height<=170)
	printf("The height is categorised as medium\n");
	else
	printf("The height is categorised as tall\n");
}*/

//Problem 3
//To determine in which quadrant the coordinate point lies
	/*int x,y;
	printf("Enter the x co-ordinate of the point\n");
	scanf("%d",&x);
	printf("Enter the y co-ordinate of the point\n");
	scanf("%d",&y);
	if(x>0 && y>0)
	printf("The co-ordinate point lies in 1st quadrant\n");
	else if(x<0 && y>0)
	printf("The co-ordinate point lies in 2nd quadrant\n");
	else if(x<0 && y<0)
	printf("The co-ordinate point lies in 3rd quadrant\n");
	else
	printf("The co-ordinate point lies in 4th quadrant\n");
} */

//Problem 4
//To check whether a triangle is Equilateral, Isosceles or Scalene.
	/*float a,b,c;
	printf("Enter the first side of the triangle\n");
	scanf("%f",&a);
	printf("Enter the seond side of the triangle\n");
	scanf("%f",&b);
	printf("Enter the third side of the triangle\n");
	scanf("%f",&c);
	if(a==b && b==c)
	printf("The triangle is equilateral triangle\n");
	else if(a==b && b!=c)
	printf("The triangle is isosceles triangle\n");
	else if(b==c && a!=c)
	printf("The triangle is isosceles triangle\n");
	else if(a==c && a!=b)
	printf("The triangle is isosceles triangle\n");
	else
	printf("The triangle scalene triangle\n");
} */


//Program 5
//To check whether a triangle can be formed by the given value for the angles. 
/*#include<stdio.h>
void main()
{
	float ang1,ang2,ang3,sum;
	printf("Enter the first angle\n");
	scanf("%f",&ang1);
	printf("Enter the second angle\n");
	scanf("%f",&ang2);
	printf("Enter the third angle\n");
	scanf("%f",&ang3);
	sum=ang1 + ang2 + ang3;
	if(sum==180 && ang1>0 && ang2>0 && ang3>0)
		printf("The triangle can be formed\n");
	else 
		printf("The triangle cannot be formed\n");
}*/


//Pogram 6
//To check whether a character is an alphabet, digit or special character. 
	/*char c;
	int x;
	printf("Enter any character\n");
	scanf("%c",&c);
	x=c;
	if(x>=65 && x<=90)
	printf("The character is an upper case letter\n");
	else if(x>=97 && x<=122)
	printf("The character is an lower case letter\n");	
	else if(x>=48 && x<=57)
	printf("The character is a digit\n");
	else 
	printf("The character is an special character\n");
} */

//----------------------------ADDITIONAL PROBLEMS-------------------------------------------------
//Program 1
//To find a given input number is even or odd.
	/*int n;
	printf("Enter any number\n");
	scanf("%d",&n);
	if(n%2==0)
	printf("The given number is even\n");
	else
	printf("The given number is odd\n");
} */

//Program 2
//To display the output stating that they are the sides of a right-angled triangle.
	/*float a,b,c,x,y,z;
	printf("Enter the first side of the triangle\n");
	scanf("%f",&a);
	printf("Enter the seond side of the triangle\n");
	scanf("%f",&b);
	printf("Enter the third side of the triangle\n");
	scanf("%f",&c);
	if(a>b)
 	{
		x=a;
		y=b;
	}
	else 
	{
		x=b;
		y=a;
	}
	if(c>x)
		z=c;
	else
	{
		z=x;
		x=c;
	}	
	if(z*z==x*x + y*y)
		printf("The given sides form a right angled triangle\n");
	else
		printf("The given sides form a right angled triangle\n");
} */
 

//Problem 3
//To input the numeric week day value (starting from Monday as 1) and display the corresponding name of the week day.
	/*int week;
	printf("Enter any number\n");
	scanf("%d",&week);
	switch(week)
	{
	case 1:printf("The corresponding week of the day is Monday\n");
	       break;
	case 2:printf("The corresponding week of the day is Tuesday\n");
	       break;
	case 3:printf("The corresponding week of the day is Wednesday\n");
	       break;
	case 4:printf("The corresponding week of the day is Thursday\n");
	       break;
	case 5:printf("The corresponding week of the day is Friday\n");
	       break;
	case 6:printf("The corresponding week of the day is Saturday\n");
	       break;
	case 7:printf("The corresponding week of the day is Sunday\n");
	       break;	
	default:printf("This corresponding week of the day does not exist\n");
		break;
	}
} */

//Problem 4
//To read the names of users and number of units consumed and print out the charges with names.
	/*int units;
	float amount;
	char name[20];
	printf("Enter your name\n");
	scanf("%s",name);
	printf("Enter the number of units consumed\n");
	scanf("%d",&units);
	if(units<=200)
		amount=100 + units*0.80;
	else if(units<=300)
		amount=100 + 160+ (units-200)*0.90;
	else
		amount= 100 + 250+ (units-300)*1.00;
	
	if(amount>400)
	amount=amount*1.15;
	else  
	amount=amount;
	printf("The name of the person is %s\n",name);
	printf("Your electricity bill is %f\n",amount);
} */


//Problem 6
//To count the number of capital and small alphabets in a string
/*#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
	int i=0,lower=0,upper=0;
	char name[20];
	printf("Enter any name\n");
	scanf("%s",name);
	for(i=0;i<strlen(name);i++)
	{
	if(islower(name[i]))
	   	lower++;
	if(isupper(name[i]))
	   	upper++;
	}
	printf("The number of lower alphabets is %d\n",lower); 		
	printf("The number of upper alphabets is %d\n",upper); 
} */

//Problem 7
//To check that a number is divisible by 6 but not divisible by 4
	/*int a;
	printf("Enter any number\n");
	scanf("%d",&a);
	if(a%6==0 && a%4!=0)
	printf("The number is divisible by 6 and not divisible by 4\n");
	else
	printf("The number can be divisible by 6 or not or it can be divisible by 4 or not\n");
} */

//Problem 8
//To compute sinx,cosx and tanx values
//(A) using if-else
/*#include<stdio.h>
#include<math.h>
void main()
{ 	
	/*float a;	
	char T;
	printf("Enter any character\n");
	scanf("%c",&T);
	printf("Enter the value in radians\n");
	scanf("%f",&a);
	if(T=='s' || T=='S')
	printf("sin(x)=%f\n",sin(a));
	else if(T=='c' || T=='C')
	printf("cos(x)=%f\n",cos(a));
	else if(T=='t' || T=='T')
	printf("tan(x)=%f\n",tan(a));
} */

//(B) Using switch statement
	/*float a;	
	char T;
	printf("Enter any character\n");
	scanf("%c",&T);
	printf("Enter the value in radians\n");
	scanf("%f",&a);
	switch(T)
	{
	case 's':
	case 'S':printf("sin(x)=%f\n",sin(a));
		 break;
	case 'c':
	case 'C':printf("cos(x)=%f\n",cos(a));
		 break;
	case 't':
	case 'T':printf("tan(x)=%f\n",tan(a));
		 break;
	default:printf("Try using only s,t, or c in upper case or smaller case\n");
		break;
	}

} */


/*-----------------------------------------------------------BONUS PROBLEM -------------------------------------------------------*/

/* To know the tax paid by a person */ 
/* #include<stdio.h>
void main()
{
	int age;
	float tax=0,taxable_income;
	printf("Enter the age\n");
	scanf("%d",&age);
	printf("Enter the gross income tax \n");
	scanf("%f",&taxable_income);
	if(age<60)
	{
        	if(taxable_income<250000)
        	tax=0;
     		else if(taxable_income>250000 && taxable_income<=500000)
        	{
			tax=0.05*(taxable_income - 250000); 
			tax=tax*1.04;
		}  
      		else if(taxable_income>500000 && taxable_income<=1000000)
        	{
			tax=10000 + 0.2*(taxable_income - 500000); 
  			tax=tax*1.04;
		} 
       		else
         	{
			tax=112500 + 0.3*(taxable_income - 1000000); 
			tax=tax*1.04;
		} 
	}

	if(age>60 && age<80)
	{      
		if(taxable_income<300000)
	        	tax=0;
     		else if(taxable_income>300000 && taxable_income<=500000)
        	{
	 		tax=0.05*(taxable_income - 300000); 
		 	tax=tax*1.04;  
		}
	        else if(taxable_income>500000 && taxable_income<=1000000)
         	{
			tax=10000 + 0.2*(taxable_income - 500000); 
			tax=tax*1.04;
		} 
       		else
        	{
			tax=110000 + 0.3*(taxable_income - 1000000); 
		 	tax=tax*1.04;
		}
	}

	if(age>80)
	{
		if(taxable_income<500000)
        	 	tax=0;
        	else if(taxable_income>500000 && taxable_income<=1000000)
        	{
			tax=0.2*(taxable_income - 500000); 
			tax=tax*1.04;
		}  
        	else
        	{
			tax=100000 + 0.3*(taxable_income - 1000000); 
			tax=tax*1.04;
		}
	}
	printf("The tax to be paid by a person is %f\n",tax);
} */
  		    	  		    	
