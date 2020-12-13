// Write a C program to print all-natural numbers between 1 to n using function.
#include <stdio.h>
void func1(int);
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    func1(n);
    return 0;
}
void func1(int a)
{
    int i;
    printf("List of the all natural number upto %d are :\n ",a);
    for(i=1;i<=a;i++)
    {
        printf(" %d ",i);
    }
}
