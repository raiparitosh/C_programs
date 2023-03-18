                                /*Recursive fxn to calculate sum of digits of a given number*/

#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("sum is %d",sum(x));
    getch();
    return 0;
}
int sum(int n)
{
     if(n>0)
     {
         return n%10+sum(n/10);
     }
}
