                       //WAP to add two numbers using pointers

#include<stdio.h>
#include<conio.h>
 int main()
 {
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
   //c=*(&a)+*(&b);
    c=(*(&a))+(*(&b));
    printf("Sum is %d",c);
    getch();
    return 0;
 }
