                                /*program to calculate x raise to the power y by Recursion*/

#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
    int x,y;
    printf("enter number and its power\n");
    scanf("%d%d",&x,&y);
    printf("%d raise to the power %d is %d",x,y,power(x,y));
    getch();
    return 0;
}
int power(int n,int p)
{
    int output;
    if(p==1)
    return n;
    //return n*power(n,p-1);//
    output=n*power(n,p-1);
    return output;
}
