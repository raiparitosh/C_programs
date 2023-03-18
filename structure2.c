                                  //structure initialization

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct emp
{
    int eid;
    char ename[20];
    float esalary;
};
int main()
{
    //struct emp e={7,"paritosh rai",50505.50};

    struct emp e;
    e.eid=6;
    strcpy(e.ename,"jai");
    e.esalary=50555.05;
    printf("Employee Details are\nEmployee id is %d\nEmployee Name is %s\nEmployee salary is %f",e.eid,e.ename,e.esalary);

   /* struct emp e;
    printf("Enter employee id and employee salary and employee name\n");
    scanf("%d%f",&e.eid,&e.esalary);
    fflush(stdin);
    gets(e.ename);

    printf("You Entered\n");
    printf("%d\n%f\n",e.eid,e.esalary);
    puts(e.ename);*/

    getch();
    return 0;
}
