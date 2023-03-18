                   //  WAP to print the sum of elements of array using pointers

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5],*p,sum=0,i;
    printf("Enter the elements of array\n");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    p=&a[0];
    for(i=0;i<=4;i++)
    {
       //sum=sum+(*p);
       //p++;

        sum=sum+(*(p+i));
    }

    printf("Sum of elements of array using pointers is %d",sum);
}
