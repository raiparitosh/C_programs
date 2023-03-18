                       //WAP to print revese of a number using recursiom

#include<stdio.h>
#include<conio.h>
int print(int);
void main()
{
    int n;
    printf("Enter the number you want to  reverse\n");
    scanf("%d",&n);
    printf("Reverse of %d is %d",n,print(n));
}
int print(int n)
{
    static int rev,rem;
    if(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        print(n/10);
    }
     else
        return 0;
    return rev;
}
