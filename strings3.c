                                          /*gets() and puts()*/


#include<stdio.h>
#include<conio.h>
int main()
{
    system("color 3");
    char name[20];
    printf("enter name\n");
 //   scanf("%s",name);
    gets(name);
    printf("kaise");
    puts("ho");
    puts(name);
    printf("Hello %s",name);
    getch();
    return 0;
}
