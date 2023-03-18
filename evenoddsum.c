                                   //Sum of even and odd digits of a number

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,e_sum=0,o_sum=0,rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        if(rem%2==0)
            e_sum=e_sum+rem;
        else
            o_sum=o_sum+rem;
        n=n/10;
    }
    printf("Even Sum =%d and Odd Sum =%d",e_sum,o_sum);
    return 0;
}
