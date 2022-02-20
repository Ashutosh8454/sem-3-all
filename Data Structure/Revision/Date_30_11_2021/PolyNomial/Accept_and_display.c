#include<stdio.h>
#include<conio.h>


void ploy_accept(int arr[],int term)
{
    for(int i= term-1;i>=0;i--)
    {
        printf("\nCoefficient of X^%d :=",i);
        scanf("%d",&arr[i]);
    }
}
void ploy_display(int arr[],int term)
{ 
    int i;
    printf("Polynomial := ");
    for(i= term-1;i>0;i--)
    {
        printf("%dX^%d + ", arr[i],i);
        
    }

    printf("%d",arr[i]);
}

int main()
{
    int arr[10],term;

    printf("Enter Term in polynomial := ");
    scanf("%d",&term);

    ploy_accept(arr,term);
    ploy_display(arr,term);
    return 0;
}

