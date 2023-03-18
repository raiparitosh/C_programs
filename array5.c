                                                    /*WAP to swap an array*/

#include<stdio.h>
#include<conio.h>
int main()
{
  /*  int a[5],i;
    printf("Enter elements of array\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
        printf("Array=%d-",a[i]);
    }
    printf("Reversed array");
    for(i=4;i>=0;i--)
        printf("-%d",a[i]);
    return 0;
}*/

                                                /*Swap an array using third variable*/
int a[5],i,p=0,q=4,temp;
printf("enter the elements of array\n");
for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
while(p<q)
{
    temp=a[p];
    a[p]=a[q];
    a[q]=temp;
    p++;
    q--;
}
printf("Reverse Array is:\n");
for(i=0;i<=4;i++)
    printf("%d\n",a[i]);
return 0;
}


