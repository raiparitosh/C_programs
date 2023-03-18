                             /*recursive fxn to print fibonacci series*/

#include<stdio.h>
#include<conio.h>
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
   // static int n1,prev=0,next=1;
    int n1;
    static int prev=0,next=1;
    if( n>2)
      {
        n1=prev+next;
        prev=next;
        next=n1;
        printf(" %d",n1);
        fibonacci(n-1);
      }
}*/
void fibonacci(int);
void main()
{
    int n;
    printf("enter number upto which you want the series\n");
    scanf("%d",&n);
    printf("%d %d ",0,1);
    fibonacci(n-2);
    getch();
}
void fibonacci(int n)
{
    static int n3,prev=0,next=1;
    if(n>0)
    {
    n3=prev+next;
    prev=next;
    next=n3;
    printf("%d ",n3);
    fibonacci(n-1);
    }
}
