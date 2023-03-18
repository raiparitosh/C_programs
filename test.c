#include<stdio.h>
#include<conio.h>
/*
int main()
{
    int n1=0,n2=1,n3,length,i;
    printf("enter the length of the series\n");
    scanf("%d",&length);
    printf("%d,%d",n1,n2);
    for(i=3;i<=length;i++)                            //fibonacci
    {
        n3=n1+n2;
        printf(",%d",n3);
        n1=n2;
        n2=n3;
    }
}

int main()
{
    int i,j=0;
    int a[5]={0,1,2,3,4};
    int b[5]={5,6,7,8,9};
    int c[10];
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
        printf("%d",c[i]);                              //merge array
    }
    for(i=5;i<10;i++)
    {

            c[i]=b[j];
            j++;
         printf("%d",c[i]);
    }
   /* printf("\n");
    for(i=0;i<10;i++)
        printf("%d",c[i]);
}*/



/*void fibonacci(int);
void main()
{
    int n;
    printf("enter number upto which you want the series\n");
    scanf("%d",&n);
    printf("%d %d",0,1);
    fibonacci(n);
    getch();
}
void fibonacci(int n)
{
    static int prev=0,next=1;
    int n1;
    if( n>2)
      {
        fibonacci(n-1);
        n1=prev+next;
        prev=next;
        next=n1;
        printf(" %d",n1);

      }
}*/
int main()
{
    int temp,i,j;
    int a[5];
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(j=0;j<=4;j++)
    {
        for(i=0;i<=4;i++)
        {
            temp=a[i];
            if(a[i]>a[i+1])
            {
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<=4;i++)
        printf("%d",a[i]);
}
