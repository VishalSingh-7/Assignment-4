// Write a C program to find sum of all-natural numbers between 1 to n using recursion.
#include <stdio.h>
int sumnatural(int);
int main()
{
    int n,k;
    printf("Enter the value of the n :");
    scanf("%d",&n);
    k=sumnatural(n);
    printf("The sum of the first %d natural numbers = %d",n,k);
    return 0;
}
int sumnatural(int a)
{
    int s;
    if(a==1)
    {
        return a;
    }
    else
    {
        s=a+sumnatural(a-1);
        return s;
    }
    
}