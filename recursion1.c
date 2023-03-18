
                                /*Recursive program to print first N natural number*/
#include<stdio.h>
#include<conio.h>
void print(int);
int main()
{
    int N;
    printf("Enter the number upto which you want to check\n");
    scanf("%d",&N);
    print(N);
    getch();
    return 0;
}
void print(int N)
{
    if(N>0)
    {
       print(N-1);
       printf("%d\n",N);
    }
}
