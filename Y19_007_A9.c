#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

/* Problem 1 */
/* To write a recursive function to  compute the sum of all prime  digits of a given number */

/* int problem1()
{
    printf("Enter an integer \n");
    unsigned long long n;
    scanf("%llu",&n);
    int x = prime(n,0);
    printf("%d\n",x);
    return 0;

}
int prime(unsigned long long n,int sum)
{

    if(n==0)
    {
        return sum;
    }
    int x=n%10;
    if(x==2 || x== 3 || x== 5 || x== 7)
    {
        sum+=x;
    }
    prime(n/10,sum);
    return 0;
}

int main()
{
    problem1();
	return 0;
} */
	
/* Problem 2 */
/* To write a Recursive function that prints all numbers less than N which consist of k digits and each digit can be 1 or 3 or multiples of 3 only */

/* int mult(int m)
{
    if(m==0)
        return 0;
    int a=m,i=0;
    while(a>0)
    {   
        i++;
        if(((a%10)%3==0 || (a%10)==1) && a!=0)
        {
            a=a/10;
            i--;
        }
        else
            break;
    }
    if(i==0)
        printf("%d",m);
	printf("\n");
    mult(m-1);
    return 1;
}

int main()
{
    int n;
    printf("Enter N value :");
    scanf("%d",&n);
    mult(n-1);
    return 0;
} */


/* Problem 3 */
/* To write a recursive function to identify the maximum repeating substring of length k */
/* int maximum(char array[], int m, int i, int count, int max)
{
    if(i>=30)
        return max;
    for(int j=i+m;j<30;j++)
    {
        int a=0;
        for(int k=0;k<m;k++)
        {
            if(array[i+k]==array[j+k])
                a++;
            else 
                break;
        }
        if(a==m)
            count++;
    }
    if(count>=max)
        max=count;
	//temp=i;
    max=maximum(array, m, i+1, 0, max);
    
    return max;
}

int main()
{
    srand(time(0));
    int n;
    char arr[30]={'a','c','b','a','a','c','d','e','c','e','e','f','d','a','c','a','d','e','c','a','e','f','e','f','a','f','e','c','e','f'};
    n=2+rand()%(4);    
    printf("For n=%d: %d\n",n ,maximum(arr, n, 0, 0, 0));
    return 0;
} */

/* Problem 4 */
/* To find (a)the smallest even numbers 
           (b) the largest odd number and 
           (c) the largest prime factor among the factors of all elements in the array */

/*int small_even(int array[], int k, int i, int small)
{
    if(i==k)
        return small;
    if(array[i]%2==0)
    {
        if(small>=array[i])
            small=array[i];    
    }
    small=small_even(array, k, i+1, small);
    return small;
}

int large_odd(int array[], int k, int j, int max)
{
    if(j==k)
        return max;
    if(array[j]%2!=0)
    {
        if(max<=array[j])
            max=array[j];    
    }
    max=large_odd(array,k,j+1,max);
    return max;
}

int primefactor(int ar[], int n, int i)
{
    if(i==n)
        return 0;
    if(ar[i]== 1 || ar[i]== 0)
        printf("-");
    for(int m=ar[i];m>=1;m--)
    {
        int count=0;
        for(int j=1; j<=m/2; j++)
        {
            if(m%j==0)
                count++;
        }
        if(count==1)
        {
            if(ar[i]%m==0)
            {
                printf("%d ",m);
                break;
            }
        }
    }
    primefactor(ar,n,i+1);
    return 0;
}

int main()
{
    srand(time(0));
    int n;
    n=20+rand()%(41);
    int arr[n];
    printf("Array of %d : ",n);
    for(int j=0; j<n; j++)
    {
        arr[j]=rand()%41;
        printf("%d ",arr[j]);
    }
    printf("\nsmallest even number is %d\n",small_even(arr, n, 0, arr[0]));
    printf("\nlargest odd number is %d\n",large_odd(arr, n, 0, 0));
    printf("\nlargest prime factors of each element is : ");
    primefactor(arr, n, 0);
	printf("\n");
    return 0;
} */

/* Problem 5 */
/* A subarray can repeat in the same array with a constant multiplied with each element of the subarray.
To find all such subarrays of length 2 and 3 */
/* int sub_array(int array[], int n, int i)
{
    if(i==n-2)
        return 0;
    for(int j=i+1;j<n-1;j++)
    {
        if(array[j]/array[i] == array[j+1]/array[i+1] && array[j]%array[i] == 0 && array[j+1]%array[i+1]==0)
        {
            int c=array[j]/array[i];
            printf("%d-%dx%d: %d-%d\n",array[i],array[i+1],c,array[j],array[j+1]);            
        }
    }
    for(int j=i+1;j<n-2;j++)
    {
        if(array[j]/array[i] == array[j+1]/array[i+1] && array[j]%array[i] == 0 && array[j+1]%array[i+1]==0 && array[j]/array[i] == array[j+2]/array[i+2] && array[j+2]%array[i+2] == 0)
        {
            int c=array[j]/array[i];
            printf("%d-%d-%dx%d: %d-%d-%d\n",array[i],array[i+1],array[i+2],c,array[j],array[j+1],array[j+2]);            
        }
    }
    sub_array(array, n, i+1);
    return 0;
}

int main()
{
    int arr[20]= {2, 3 ,7 ,5 ,1 ,2 ,7 ,4 ,4 ,2 ,6 ,9 ,21 ,10 ,2 ,4 ,4 ,2 ,6 ,9};
    sub_array(arr, 20, 0);
    return 0;
} */

/* Problem 6 */
/* To write a recursive function to convert this into a two dimensional matrix where 
 (a)The first row will only have non-prime numbers and (b)The second row will have prime numbers */

/* int rec(int ar[], int i, int n, int br[2][20], int x1, int x2)
{
    if(i==n)
        return 0;
    int c=0;
    for(int j=2; j<=ar[i]/2; j++)
    {
        if(ar[i]%j==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
        br[1][x1++]=ar[i];
    else
        br[0][x2++]=ar[i];
    rec(ar, i+1, n, br, x1, x2);
    return 0;
}
 
int main()
{
    int arr[20]={8 ,2 ,3 ,6 ,7 ,11 ,21 ,22 ,28 ,23 ,12 ,43 ,9 ,17 ,25 ,27 ,29 ,47 ,10 ,31};
    int ans[2][20];
    rec(arr, 0, 20, ans, 0, 0);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

/* Problem 7 */
/* To write a recursive function to find the number of paths between a pair of location and to compute the cost from source and a destination */
/*int path(int p,int q, int r, int s)
{
    int m=p-r, n=q-s;
    if(m<0)
        m*=-1;
    if(n<0)
        n*=-1;
    if(m==0 || n==0)
        return 1;
    m--; n--; 
    return 2+m*(n+1)+n*(m+1);
}

int cost(int p,int q,int r,int s)
{
    int m=p-r, n=q-s;
    if(m<0)
        m*=-1;
    if(n<0)
        n*=-1;
    return m+n;
    
}

int main()
{
    srand(time(0));
    int x,y,k;
    x=4+rand()%7;
    y=4+rand()%7;
    k=1+rand()%9;
    printf("Matrix %d x %d\n",x,y);
    int a,b,c,d;
    a=rand()%x;
    b=rand()%y;
    c=rand()%x;
    d=rand()%y;
    printf("For: (%d,%d) to (%d,%d)\n",a,b,c,d);
    printf("No. of paths -> %d\n",path(a,b,c,d));
    printf("If price=%d -> total price=%d\n",k,k*cost(a,b,c,d));

return 0;
} */ 


