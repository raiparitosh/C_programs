                                     /*     12345
                                            1234
                                            123
                                            12
                                            1     */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=5-i+1;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
