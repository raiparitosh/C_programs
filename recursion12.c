             //Recursive program to calculate sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
    int N;
    printf("Enter the number upto you want the series\n");
    scanf("%d",&N);
    printf("Sum of first %d natural numbers is %d",N,sum(N));
    return 0;
}
int sum(int N)
{
    int s=0;
    if(N>=1)
    {
        s=N+sum(N-1);
        return s;
    }
}
