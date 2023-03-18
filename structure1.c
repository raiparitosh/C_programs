                  //WAP to get the size of a structure using sizeof()

#include<stdio.h>
#include<conio.h>

#pragma pack(1)      //#pragma pack(1) is used to save the memory but wastage of cycles(processor) should be there

struct emp
 {
     int eno;
     char ename[35];
     float esal;
     char c;
 };
int main()
{
 struct emp e;
// printf("Size of emp is %d",sizeof(e));
 printf("Size of emp is %d",sizeof(struct emp));
 getch();
 return 0;
}
