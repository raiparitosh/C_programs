                             //WAP to find maximum number between two number using pointer

#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2,*a1,*a2;
    printf("Enter first number and second numbre\n");
    scanf("%d%d",&n1,&n2);
    a1=&n1;
    a2=&n2;
    if(*a1>*a2)
        printf("%d is greatest",*a1);
    else if(*a2>*a1)
        printf("%d is greatest",*a2);
    else
        printf("Both numbers are equal");
    getch();
    return 0;
}
