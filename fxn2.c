                                 /*fxn to calculate sum of first N natural number(TSRS)*/

#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int x;
    printf("enter number\n");
    scanf("%d",&x);
    printf("sum of first %d natural number is %d",x,sum(x));
    getch();
}
int sum(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
