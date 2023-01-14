#include<stdio.h>
void main()
{
    long long int fact=1,i;
    int a;
    printf("enter the value whose factorial is to be found:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("the factorial of given numeber is %lld",fact);
} 