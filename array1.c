                                /*WAP to calculate average of 10 numbers*/

#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],sum=0,i;
float avg;
printf("Enter the numbers of array\n");
for(i=1;i<=10;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
avg=sum/10.0;
printf("Average of 10 numbers is %f",avg);
}
