                                                   //PART-A
                                                           
// Problem 1
// To print the sum of the given 4 digit numbers
/* #include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter n value: ");
	scanf("%d",&n);
	i=n%10;  //finding the last 1st digit 
	sum=sum+i;
	n=n/10;  //update n
	i=n%10;  //finding the last 2nd digit
	sum=sum+i;
	n=n/10;  //update n
	i=n%10;  //finding the last 3rd digit
	sum=sum+i;
	n=n/10;  //update n
	i=n%10;  //finding the last 4th digit
	sum=sum+i;
	printf("sum of four digit numbers is %d",sum);
	return 0;
} */

//Problem 2
//To compute the mileage of the car
/* #include<stdio.h>
int main()
{
	int distance,fuel;
	float mileage;
	printf("Enter distance travelled by the car in kms: ");
	scanf("%d",&distance);
	printf("Enter fuel consumed by the car in litres: ");
	scanf("%d",&fuel);
	mileage=distance/fuel;
	printf("mileage given by the car is %f\n",mileage);
	return 0; 
} */

//Problem 3
//To convert the no. of days into months and days
/* #include<stdio.h>
void main()
{
	int month,days1,days2;
	printf("Enter no.of days: ");
	scanf("%d",&days1);
	month=(days1)/30;
	days2=(days1)%30;
	printf("No. of months is %d\n",month);
	printf("No. of days is %d\n",days2);
} */

//Problem 4
//To convert the no. of days into months,days and years
/* #include<stdio.h>
void main()
{
	int month,days1,days2,years;
	printf("Enter no.of days: ");
	scanf("%d",&days1);
	years=days1/365;
	month=(days1%365)/30;
	days2=(days1%365)%30;
	printf("No. of years is %d\n",years); 
	printf("No. of months is %d\n",month);
	printf("No. of days is %d\n",days2);
} */

//Problem 5
//To convert the given amount value into smallest Indian currency notes
 /*#include<stdio.h>
void main()
{
	int amount,n,a,b,c,d,e,f,g,h,i,j;
	printf("Enter the value of amount: ");
	scanf("%d",&amount);
	n=amount;
	a=n/2000; n=n%2000;
	b=n/500; n=n%500;
	c=n/200; n=n%200;
	d=n/100; n=n%100;
	e=n/50; n=n%50;
	f=n/20; n=n%20; 
	g=n/10; n=n%10;
	h=n/5; n=n%5;
	i=n/2; j=n%2;
	printf("%d= %d*2000 + %d*500 + %d*200 + %d*100 + %d*50 + %d*20 + %d*10 + %d*5 + %d*2 +%d*1 		\n",amount,a,b,c,d,e,f,g,h,i,j); 
} */

//Problem 6
//To convert the number of seconds into hours,minutes and seconds
/* #include<stdio.h>
void main()
{
	int secs,mins,hrs;
	printf("Enter the no. of seconds: ");
	scanf("%d",&secs);
	hrs=secs/3600;
	mins=(secs%3600)/60;
	secs=(secs%60)%60;
	printf("Hours: %d\n",hrs);
	printf("Minutes: %d\n",mins);
	printf("Seconds: %d\n",secs);
} */

//Problem 7
//To convert tempurature from Fahrenheit to Celsius
/* #include<stdio.h>
void main()
{
	float C,F;
	printf("Enter Fahrenheit value: ");
	scanf("%f",&F);
	C=(F-32)/1.8;
	printf("Celsius value is %f\n",C);
} */


                                         //PART-B
//Problem 8
//To find the roots of the quadratic equation
/*#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,x,y,d;
	printf("Enter the value of a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d>=0)
	{
		 x=(-b+sqrt(b*b-4*a*c))/2*a;
		 y=(-b-sqrt(b*b-4*a*c))/2*a;
		printf("The roots of the quadratic equation are %d %d\n",x,y);
	}
 
	else
	{	
 	printf("The roots are imaginary\n");
	}
	return 0;
} */

//Problem 9
//Reading N floating points and computing the average
#include<stdio.h>
int main()
{
	int i,n;
	float a,sum;
	sum=0;
	printf("Enter the value of N :");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter the number :");
		scanf("%f",&a);
		sum=sum+a;
	}
	sum=sum/n;
	printf("Average is %f\n",sum);

	return 0;
} 
