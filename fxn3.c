            /*write a fxn to check wheather a given number is even or odd.Fxn should return 1 if number is even, otherwise return 0(TSRS)*/

#include<stdio.h>
#include<conio.h>
int evenodd(int);
void main()
{
    int x,a;
    printf("enter number\n");
    scanf("%d",&x);
    a=evenodd(x);
    if(a==1)
        printf("%d is even\n%d",x,a);
    else
        printf("%d is odd\n%d",x,a);
    getch();
}
int evenodd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}
