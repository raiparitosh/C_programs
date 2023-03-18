                                    /*WAP to print the greatest number in an array*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,max;
    printf("Enter elements of array\n");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<=4;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("%d is greatest",max);
    return 0;
}
