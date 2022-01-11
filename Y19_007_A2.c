/* Fig. 2.1: fig02_01.c
 A first program in C */
 //#include<stdio.h>

 /* Function main begins program execution */
 //int main( void )
 //{
  /* first problem */
  //printf( "Welcome to C!\n" ); 	 	
  

  /* second problem */
  /* Printing on one line with two printf statements */
  //printf( "Welcome ");
  //printf(" to C!\n" );


  /* third problem */
  /* Printing multiple lines with a single printf */
    //printf( "Welcome\nto\nC!\n" );
   

  /* fourth program */
  /* Addition program */
  //int integer1; /* first number to be input by user */
  //int integer2; /* second number to be input by user */
  //int sum; /* variable in which sum will be stored */

  //printf( "Enter first integer\n" ); /*prompt */
  //scanf( "%d", &integer1 ); /* read an integer */

  //printf( "Enter second integer\n" ); /* prompt */
  //scanf( "%d", &integer2 );

  //sum= integer1 + integer2; /* assign total to sum */

  //printf( "Sum is %d\n", sum ); /* print sum */     

  //return 0; /* indicate that program ended successfully */
 //} /* end function main */
  

                                          /* Part-B */
  /* Program to print my details */
 #include<stdio.h>
 #include<math.h>
 int main( void )
{
   /* First problem */
   //printf( "Name:ANIRUDH JAKHOTIA\n" ); 
   //printf( "Roll No: S20190010007\n" );
   //printf( "Branch: Computer Science and Engineering\n ");
   //printf( "Group-number:CP-2\n" );

   /* Second problem */
   /* Subtraction problem */
  //int int1,int2,sub;
  //printf(" enter first integer\n ");
  //scanf("%d",&int1 );
  //printf(" enter second integer\n "); 
 // scanf("%d",&int2 );
 // sub=int1 - int2;
  //printf("subtraction is %d\n",sub ); 

 
  /* Multiplication program */
  //int int1,int2,multiply;
  //printf(" enter first integer\n ");
  //scanf("%d",&int1 );
  //printf(" enter second integer\n "); 
  //scanf("%d",&int2 );
  //multiply=int1 * int2;
  //printf(" multiplication is %d\n",multiply);

  /* Division program */
  //int int1,int2;
  //float div;
  //printf(" enter first integer\n ");
  //scanf("%d",&int1 );
  //printf(" enter second integer\n "); 
  //scanf("%d",&int2 );
  //div=(float)int1/int2;
  //printf(" division is %f\n",div);

  /* Modulo program */
  //int int1,int2,modulo;
  //printf(" enter first integer\n ");
  //scanf("%d",&int1 );
  //printf(" enter second integer\n "); 
  //scanf("%d",&int2 );
  //modulo=int1%int2;
  //printf(" modulo is %d\n",modulo);

  /* To find the hypotenuse of a right angled triangle */
  //int base,height;
  //float hypotenuse; 
  //printf(" Enter base value\n ");
  //scanf("%d",&base );
  //printf(" Enter height value\n "); 
  //scanf("%d",&height );
  //hypotenuse=sqrt((base*base) + (height*height)); 
  //printf("Hypotenuse is %f",hypotenuse);
 
  /* To find the sum of 100 numbers in a arithmetic progression */
  int a,b,n,d,s;
  printf(" Enter a value\n ");
  scanf("%d",&a);
  printf(" Enter b value\n ");
  scanf("%d",&b);
  n=100;
  d=b-a;
  s=n*((2*a)+(n-1)*d)/2;
  printf("Sum of first 100 numbers is %d\n",s); 
  return 0;
}
