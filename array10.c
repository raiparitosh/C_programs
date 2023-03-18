                                 //WAP to merge two arrays into a single array
#include<stdio.h>
#include<conio.h>
/*
int main()
{
    int a[5]={0,1,2,3,4},b[5]={5,6,7,8,9},c[10],i,j=0;
    for(i=0;i<10;i++)
    {
        if(i<5)
            c[i]=a[i];
          //  printf("%d",c[i]);}
        else
        {
            c[i]=b[j];
            //printf("%d",c[i]);
            j++;
        }
    }
    for(i=0;i<10;i++)
       printf("%d\n",c[i]);
    return 0;
} */
int main()
{                                   //  not a good way of solving this problem
    int a[20],b[6],i,m=7,n=6;
    printf("Enter elements of first array\n");    //isme ek array ka size bda rakhna hoga jisme memory wastage hoga
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter elements of second array\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        a[m+i]=b[i];
    printf("Merged array is");
    for(i=0;i<m+n;i++)
    {
        printf(" %d",a[i]);
    }
}



