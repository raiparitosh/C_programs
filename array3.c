                                          /*Search an element in an array*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a[10],i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the values for array\n");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]==n)
        {
            printf("%d is present in the array",n);
            exit(9);
        }
    }
     printf("%d is not present in the array\n",n);
     return 0;
}
