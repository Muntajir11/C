/*  C program to Print Sum and Product of Digits of an integer  */

#include<stdio.h>

int main()
{
    int n,n1;
    int dig, sum,pro;

    printf("\nEnter any integer number :: ");
    scanf("%d",&n);

    n1=n;

    /*Calculating Sum and Product*/
    sum=0;
    pro=1;

    while(n>0)
    {
        dig=n%10; /*get digit*/
        sum+=dig;
        pro*=dig;
        n=n/10;
    }

    printf("\nSUM of Digits of Number [ %d ] : [ %d ].\n",n1,sum);
    printf("\nPRODUCT of digits of Number [ %d ] : [ %d ].\n",n1,pro);

    return 0;
}