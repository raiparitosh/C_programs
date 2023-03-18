
                                                   /*WAP to sort an array*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter elements of array\n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    printf("Entered Array Elements");
    for(i=0;i<=4;i++)
    printf("-%d",a[i]);
    for(j=0;j<=4;j++)
    {
        for(i=0;i<=3;i++)
        {
          //  temp=a[i];
            temp=a[i+1];
            if(a[i]>a[i+1])
            {
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\nSorted Array");
    for(i=0;i<=4;i++)
    printf("-%d",a[i]);
    getch();
    return 0;
}
