// Write a C program to print all even or odd numbers in given range using recursion.
#include <stdio.h>
int sumevenodd(int ,int );
int main()
{
    int a,b,k,m;
    printf("Enter the lower limit: ");
    scanf("%d",&a);
    printf("Enter the upper limit: ");
    scanf("%d",&b);
    printf("Sum of the even numbers :  ");
    if(a%2==0)
    {
        a=a;
    }
    else
    {
        a=a+1;
    }
    k=sumevenodd(a,b);
    printf("%d",k);
    printf("\n Sum of the Odd numbers :  ");
    if(a%2==0)
    {
        a=a+1;
    }
    else
    {
        a=a;
    }
    m=sumevenodd(a,b);
    printf("%d",m);
    return 0;
}
int sumevenodd(int i,int j)
{
    if(i>j)
    {
        return 0;
    }
    else
    {    
       
        return (i+sumevenodd(i+2,j));
    }
}