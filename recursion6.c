                                /*program to calculate factorial by Recursion*/

#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
    getch();
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return(n*fact(n-1));
}

