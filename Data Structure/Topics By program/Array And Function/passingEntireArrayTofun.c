#include<stdio.h>
#include<conio.h>

void dispAll(int *n,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*n);
        n++;
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};

    dispAll(arr,5);
    return 0;
}