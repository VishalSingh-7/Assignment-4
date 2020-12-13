// Write a C program to find reverse of any number using recursion.
#include <stdio.h>
int reverse(int);
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("The reverse of the %d is :",n);
    reverse(n);
    return 0;
}
int reverse(int x)
{
    int rem;
    if(x==0)
    {
        return 0;
    }
    else
    {
        rem=x%10;
        printf("%d",rem);
        reverse(x/10);
    }
    
}