                                             //Function Pointer
                                 //Basic program to demonstrate function pointer

#include<stdio.h>
#include<conio.h>

int toshu(int);
int main()
{
    int (*p)(int);
    p=toshu;
    printf("%d",p(5));
    getch();
    return 0;
}
int toshu(int x)
{
    printf("%d\n",x);
    return x+1;
}
