//Write a C program to find sum of digits of a given number using recursion.
#include <stdio.h>
int sum(int);
int main()
{
    int n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    k=sum(n);
    printf("The Sum of the digits of the %d is %d",n,k);
    return 0;
}
int sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return ((a%10)+sum(a/10));
    }
    
}