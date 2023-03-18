                              //WAP to store n elements in an array and print the elements using pointer

#include<stdio.h>
#include<conio.h>
 int main()
 {
     int a[100],n_ele,i;
     int *p;
     printf("Enter the number of elements you want to insert in the array\n");
     scanf("%d",&n_ele);
     printf("Enter the element\n");
     for(i=0;i<n_ele;i++)
     {
         scanf("%d",&a[i]);
     }
     p=&a[0];
     printf("You Entered:-\n");
     for(i=0;i<n_ele;i++)
     {
        // printf("%d\n",(*(a+i)));
        printf("%d\n",(*(p+i)));
     }
     getch();
     return 0;
 }
