                        //WAP for Calculator
#include"stdio.h"
#include"conio.h"

int main()
{
    float n1,n2,res=0;
    char operation;
    printf("Enter two numbers\n");
    scanf("%f%f",&n1,&n2);
    fflush(stdin);
    printf("Enter the operation you want to perform like +,-,*,/ :\n");
    scanf("%c",&operation);
    switch(operation)
    {
        case '+': res=n1+n2;
        printf("Output is %f",res);
        break;
        case '-': res=n1-n2;
        printf("Output is %f",res);
        break;
        case '*': res=n1*n2;
        printf("Output is %f",res);
        break;
        case '/': res=n1/n2;
        printf("Output is %f",res);
        break;
        default:
        printf("Invalid operation entered");
    }
    getch();
    return 0;
}
