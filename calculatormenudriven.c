                        //WAP for menu driven calculator

#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2,res,operation;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("\n");
    printf("Enter your choice of operation\n");
    scanf("%d",&operation);
    switch(operation)
    {
    case 1:
        res=n1+n2;
        printf("Additipon of %d and %d is %d",n1,n2,res);
        break;
    case 2:
        res=n1-n2;
        printf("Subtraction of %d and %d is %d",n1,n2,res);
        break;
    case 3:
        res=n1*n2;
        printf("Multiplication of %d and %d is %d",n1,n2,res);
        break;
    case 4:
        res=n1/n2;
        printf("Division of %d and %d is %d",n1,n2,res);
        break;
    default:
        printf("Enter valid operation");
    }
    return 0;
}
