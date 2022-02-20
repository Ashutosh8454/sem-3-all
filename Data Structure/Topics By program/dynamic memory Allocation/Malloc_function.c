#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter Size of Array");
    scanf("%d",&n);

    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        printf("\nEnter Element %d: ",i+1);
        scanf("%d",ptr+i);
    }

    for(int i=0;i<n;i++)
    {
        printf("\nElements : %d",*(ptr+i));
    }
    return 0;
}