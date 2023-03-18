                         // Linear Search Program

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10], i, ele, found = 0;
    printf("Enter the elements of the array\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Enter the element you want to search\n");
    scanf("%d",&ele);
    for(i=0;i<10;i++)
    {
        if(a[i] == ele)
        {
            printf("\nFound\n");
            found+=1;
            break;
        }
    }
    if(!found)
        printf("\nNot Found\n");

    return 0;
}

