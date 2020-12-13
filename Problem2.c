// Write a C program to print all even or odd numbers in given range using recursion.
#include <stdio.h>
int evenodd(int ,int );
int main()
{
    int a,b;
    printf("Enter the lower limit: ");
    scanf("%d",&a);
    printf("Enter the upper limit: ");
    scanf("%d",&b);
    printf("Even numbers are :  ");
    if(a%2==0)
    {
        a=a;
    }
    else
    {
        a=a+1;
    }
    evenodd(a,b);
    printf("\n Odd numbers are :  ");
    if(a%2==0)
    {
        a=a+1;
    }
    else
    {
        a=a;
    }
    evenodd(a,b);
    return 0;
}
int evenodd(int i,int j)
{
    if(i>j)
    {
        return 0;
    }
    else
    {
       printf(" %d ",i);
       return evenodd(i+2,j);
    }
    
  
}