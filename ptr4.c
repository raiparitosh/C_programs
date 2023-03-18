                                //WAP to add two numbers using call by reference

#include<stdio.h>
#include<conio.h>
int sum(int*,int*);
/*int main()
{
    int a,b,*p,*q;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Sum is %d",sum(p,q));
}*/
   int main()
   {
       int a=70,b=7;
       printf("Sum is %d",sum(&a,&b));
   }

int sum(int*r,int*s)
{
    int c;
    c=(*r)+(*s);
    return c;
}

                                    //Call by Value
/*int sum(int,int);
int main()
{
    int s;
    s=sum(4,103);
    printf("Sum is %d",s);
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}*/
