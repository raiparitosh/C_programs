
                                /*program to print first N natural number in reverse order by Recursion*/
#include<stdio.h>
#include<conio.h>
void print(int N);
void main()
{
    print(7);
    getch();

}
void print(int N)
{
    if(N>0)
    {
        printf("%d\n",N);
        print(N-1);
    }
}
