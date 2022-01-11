//Problem 1
//A C program for temperature conversion from Fahrenheit to Celsius.
#include<stdio.h>
int main()
{
	/* float f,c;
	printf("Enter fahrenhiet value\n");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("Celsius value is %f\n",c);
	return 0;
} */

//Problem 2
//C program to evaluate the following arithmetic and logical operations:
	/*int x,y,z;
	printf("Enter x,y and z values: ");
	scanf("%d %d %d",&x,&y,&z);
	printf("Initial values are x=%d\t y=%d\t z=%d\n",x,y,z);
	if(y==0)
	{
		x=y+1;
		z=x++;
	}
	else
	{
		z=y++;
	}
	printf("The final values are x=%d\t y=%d\t z=%d\n",x,y,z);
	return 0;
} */


//Problem 3
//To Evaluate an expression
	/*int x,y,z,max,max1,min,min1;
	printf("Enter x,y and z values:\n ");
	scanf("%d %d %d",&x,&y,&z);
	z=x+y+z/4%++x*2-1;
	printf("The final values are x=%d\t y=%d\t z=%d\n",x,y,z);
	max=(x>y)?x:y;
	max1=(max>z)?max:z;
	printf("Maximum value is %d\n",max1);
    	min=(x<y)?x:y;
    	min1=(min<z)?min:z;
   	printf("Minimum value is %d\n",min1);   
	return 0;
}  */


//Problem 4
//This program is based on increments and decrements
 	/*int a,b,c,i,j,k;
	printf("Enter the values of a,b and c: \n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The initial values are a=%d\t b=%d\t c=%d\n",a,b,c);
	k=++a + ++a + b-- - c++;
	printf("The final values are a=%d\t b=%d\t c=%d\n",a,b,c);
	printf("Now Enter the value of i:\n");
	scanf("%d",&i);
	i=2+2*i++;
	a=++i + ++i + ++i;
	j=++i + ++i + ++i;
	printf("The value of i=%d\n the value of a=%d\n the value of j=%d\n",i,a,j);
	return 0;
} */

//Problem 5
//To compute the size of the integer and type casting
	/*int a=1256;
	float x,b=2.3543;
	char name[20]="Anirudh_Jakhotia";
	printf("Size of a is %d\n",sizeof(a));
	x=(int)2.3543;
	b=b-x;
	printf("The value of b=%f\n",b);
	printf("The first five letters of my name is %.5s",name);
    	return 0;
} */

//Problem 6
//To solve using operator precedence
	/*int a=20,b=10,c=15,d=5,e;
	e = a + b * c / d;
	a = 5 * 3 + 2 - 4;
	a= 2 + 4 + 3 * 5 / 3 - 5;
	a= 5 * 3 % 6 - 8 + 3;
	b= 3 % 1 * 1 - 4 / 2;
	b= 3 && 5 & 4 % 3;
	b= 5 & 3 && 4 || 5 || 6;
	printf("The value of e = %d\t a=%d\t b=%d\n",e,a,b);
	return 0;
} */
    
//Problem 7
//To convert fahrenheit to celsius
    /* float f,c;
	printf("Enter fahrenhiet value\n");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("Celsius value is %f\n",c);
	return 0;
} */


//Problem 8
//To evaluate arithmetic and logical operations
  	/* int a,b,c;
	printf("Enter a,b and c values: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("Initial values are a=%d\t b=%d\t c=%d\n",a,b,c);
	if(c>5)
	{
		a=b++ +1;
		b=a++*2;
		c=++b;
	}
	else
	{
		c=++b + 1 + ++a;
	}
	printf("The final values are a=%d\t b=%d\t c=%d\n",a,b,c);
	return 0;
} */


//Problem 9
//To evaluate an expression
    	/*int a,b,c,max,min;
	printf("Enter a,b and c values:\n ");
	scanf("%d %d %d",&a,&b,&c);
	c=a/b*c/5%++a*2-b++*3;
	printf("The final values are a=%d\t b=%d\t c=%d\n",a,b,c);
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	printf("Maximum value is %d\n",max);
	min=(a<b)?a:b;
	min=(min<c)?min:c;
   	printf("Minimum value is %d\n",min);   
	return 0;
} */

//Problem 10
//This program is based on increments and decrements
    	/*int m,n,k;
	printf("Enter m,n and k values: ");
	scanf("%d %d %d",&m,&n,&k);
	printf("Initial values are m=%d\t n=%d\t k=%d\n",m,n,k);
	i= ++m + k++ + n-- - ++k;
	printf("The final values are m=%d\t n=%d\t k=%d\n",m,n,k);
	return 0;
} */


//Problem 11
//To compute the size of the integer and type casting
	/* int a=978;
	float x,b=3.142;
	char name[50]="Anirudh_Jakhotia";
	printf("Size of a is %d\n",sizeof(a));
	x=(int)3.142;
	b=b-x;
	printf("The value of b=%f\n",b);
	printf("The first five letters of my name is %.4s",name);
	return 0;
} */

//Problem 12
//To perform increment and decrement operations 
	/* float x = 20, y = 10, z = 15, k = 5, out;
	out = x+ y * z / k;
  	x = y++ * x + 2 / 3.0 / 2;
	y = ++y + x * 2 + 4;
  	z = y-- + x / 2;
  	k = ++z * x + y * z / 2;
   	printf("x is %f\n y is %f\n z is %f\n k is %f\n out is %f\n",x,y,z,k,out);
	return 0;
} */


//Problem 13
//To print the reverse of a 5-digit number
	/*char str[5];
	printf("Enter 5-letter word:");
  	for(int i=0;i<5;i++)
 	{
 		scanf("%c",&str[i]);
 	}
  	printf("Reversed:");
  	for(int i=4;i>=0;i--)
 	{
  		printf("%c",str[i]);
	}

  	return 0;
} */


//Problem 14
//To print the reverse of a 5-digit number using putchar() and getchar()
/* #include<stdio.h>
#include<ctype.h>
int main()
{
    	char str[5];
   	printf("Enter 5-letter word:");
    	for(int i=0;i<5;i++)
 	{
   		str[i]=getchar();
 	}
        printf("Reversed:");
        for(int i=4;i>=0;i--)
 	{
  	putchar(str[i]);
 	}
        return 0;
} */

//Problem 15
/* To print the next alphabet of the given alphabet */
	/*char ch;
	printf("Enter a Alphabet=");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		ch=ch+1;
		printf("Next Alphabet=%c : ",ch);
	}
	else if(ch>=97&&ch<=122)
	{ 
  		ch=ch+1;
		printf("Next Alphabet=%c : ",ch);
	}
	  return 0;
} */


//Problem 16
//To perform Bitwise NOR Operation
/*int main()
{
	int x,y,z;
	printf("Enter x and y values: ");
	scanf("%d%d",&x,&y);
	z=!(x||y);
	printf("NOR of %d and %d is %d\n",x,y,z);
	return 0;
}*/
