                                        // Binary Search Program

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10] = {2,17,23,34,56,61,69,78,84,91}, key, lb=0, ub=9, mid, found=0;
    printf("Enter key value which you want to search\n");
    scanf("%d",&key);

    while(lb<=ub)
    {
        mid = (lb + ub)/2;
        if(key<a[mid])
            ub = mid - 1;
        else if(key>a[mid])
            lb = mid + 1;
        else if(key == a[mid])
        {
            printf("\nFound @ location %d",mid);
            found+=1;
            break;
        }
    }
    if(!found)
        printf("\nNot Found\n");

    return 0;
}
