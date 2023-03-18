                                   //Structure initialization

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    struct student
    {
        char name[20];
        int rollno;
        float cgpa;
    };
    struct student s;
    //s.name="paritosh";
    strcpy(s.name,"Paritosh Rai");
    s.rollno=25;
    s.cgpa=8.2;

    printf("Student Details are:\n");
    printf("Student Name is %s\n",s.name);
    printf("Student Roll Number is %d\n",s.rollno);
    printf("Student CGPA is %f",s.cgpa);
    getch();
    return 0;
}
