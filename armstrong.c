#include"stdio.h"
#include"conio.h"

int main()
{
    int n,rem,output=0,temp;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    //while(n>=1)
    while(n>0)
    //while(n!=0)
    {
        rem=n%10;
        output=output+rem*rem*rem;
        n=n/10;
    }
    if(output==temp)
        printf("%d is an armstrong number",temp);
    else
        printf("%d is not an armstrong number",temp);
    getch();
    return 0;
}
