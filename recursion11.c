                             //nth term of fibonacci series with and without recursion
#include<stdio.h>
#include<conio.h>

/*int nfibo(int);
int main()
{
    int n,t;
    printf("Enter the nth term you want in the Fibonacci series\n");
    scanf("%d",&n);
    t=nfibo(n);
    printf("%dth term of Fibonacci series is %d",n,t);
    getch();
}
int nfibo(int num)
{
    if(num==1||num==2)
        return num-1;
    else
        return nfibo(num-1)+nfibo(num-2);
}*/

int main()
{
    int n,n1=0,n2=1,n3,i,output;
    printf("Enter the term you want\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            n3=0;
        else
        n3=n1+n2;
        n1=n2;
        n2=n3;
        output=n3;
    }
    printf("%dth term of Fibonacci series is %d",n,output);
    getch();
    return 0;
}
