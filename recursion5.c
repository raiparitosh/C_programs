                        /*program to print sum of squares of first N natural numbers by Recursion*/

#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int s,N;
    printf("Enter the number upto which you want to check\n");
    scanf("%d",&N);
    s=sum(N);
    printf("Sum of first %d natural number is %d",N,s);
    getch();
    return 0;
}
int sum(int n)
{
    int s;
    if(n>=1)
    {
    s=n*n+sum(n-1);
    return s;
    }
}
