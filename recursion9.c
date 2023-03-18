                        /*Recursive fxn to print sum of first N natural numbers*/

#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("Sum of first %d natural number is %d",a,sum(a));
    getch();
    return 0;

}
int sum(int n)
{
    if(n==1)
     return 1;
    else
    return(n+sum(n-1));
}
