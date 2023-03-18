                                        //Pointers basics
                          //To print the address of pointer and value of variable in different ways

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int *ptr=&num;
    printf("Address of pointer to num is %d\n",&ptr);
    printf("Address of num is %d\n",&num);
    printf("Address of num is %d\n",ptr);
    printf("Value of number is %d\n",num);
    printf("Value of number is %d",*ptr);
    getch();
    return 0;

    /*int a[5]={1,2,3,4,5};
    printf("%d,%d",*a+2,*(a+3));*/      //output=3,4

}
