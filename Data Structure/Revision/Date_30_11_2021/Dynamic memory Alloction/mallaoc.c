#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the Size of array := ");
    scanf("%d",&n);

    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));

    printf("Enter Element In Array := ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("Enter Array is := ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }

    free(ptr);
}