// Write a C program to find GCD (HCF) of two numbers using recursion.
#include <stdio.h>
int hcf(int,int);
int main()
{
    int a,b,k;
    printf("Enter the first numbers :");
    scanf("%d",&a);
    printf("Enter the Second numbers :");
    scanf("%d",&b);
    k=hcf(a,b);
    printf("The HCF of the %d and %d is %d",a,b,k);
    return 0;

}
/* 
We are using the euclid Algorithm

 n1>n2 then  hcf(n1%n2,n2);

 n2>n1 then hcf(n1,n2%n1);

 if n1==0 then hcf=n2;
 
 if n2==0 then hcf=n1;

*/
int hcf(int n1,int n2)
{
  if(n1==0)
  {
      return n2;
  }
  else if(n2==0)
  {
      return n1;
  }
  else if(n1>n2)
  {
      return hcf(n1%n2,n2);
  }
  else if (n2>n1)
  {
      return hcf(n1,n2%n1);
  }

}