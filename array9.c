
                                            /*Multidimensional Arrays
                                  WAP to multiply two matrices each of order 3*/
#include<stdio.h>
#include<conio.h>
int main()
{

    int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
    printf("Enter values for first matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter values for second matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<=2;i++)
       for(j=0;j<=2;j++)
       {
           sum=0;
           for(k=0;k<=2;k++)
           {
               sum=sum+a[i][k]*b[k][j];
               c[i][j]=sum;
           }
        }
     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        {
            printf("%d",c[i][j]);
            printf("\n");
        }


}

