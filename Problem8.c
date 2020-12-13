// Write a C program to generate nth Fibonacci term using recursion.
#include <stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("Enter the numbers of the terms you want to see : ");
    scanf("%d",&n);
    printf("Fibonacci Series : \n ");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",fibo(i));
    }
    return 0;
}
int fibo(int a)
{
    int s;
    if(a==1 || a==2)
    {
        return 1;
    }
    else
    {
        s=fibo(a-1)+fibo(a-2);
        return s;
    }
    
}