#include<stdio.h>
#include<conio.h>

void nfibo(int);
int main()
{
    int n;
    printf("Enter the nth term you want in the Fibonacci series\n");
    scanf("%d",&n);
  //  printf("%d%d",0,1);
    nfibo(n);
    getch();
}
void nfibo(int num)
{
    static int n1=0,n2=1,n3,t;
    t=num;
    if(num>2)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        //printf("%d",n3);
        nfibo(num-1);
        if(num==t)
        {
            printf("%dth term of Fibonacci series is %d",num,n3);
        }
    }
}
