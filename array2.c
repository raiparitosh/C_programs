            /*WAP to calculate sum of all even numbers and sum of all odd numbers stored in an array of size 10*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,even_sum=0,odd_sum=0;
    printf("enter the numbers\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    /*}
    for(i=0;i<=9;i++)
    {*/
        if(a[i]%2==0)
            even_sum=even_sum+a[i];
        else
            odd_sum=odd_sum+a[i];
    }
printf("Even sum=%d",even_sum);
printf("\nOdd sum=%d",odd_sum);
getch();
return 0;
}
