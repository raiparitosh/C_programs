                                        /*program to print first N even natural numbers by Recursion*/

#include<stdio.h>
#include<conio.h>
void print(int);
void main()
{
    int N;
    printf("enter the number upto which you want to check\n");
    scanf("%d",&N);
    print(2*N);
    getch();
}
void print(int N)
{
    if(N>=2)
    {
        print(N-2);
        printf("%d\n",N);
    }
}
