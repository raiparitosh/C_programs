                                        /*WAP that checks how many times entered number is present in the array*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the values for array\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]==n)
            count++;
    }
    if(!count)
        printf("%d is not present in the array",n);
    else
        printf("%d is present in the array %d times",n,count);
    return 0;
}




