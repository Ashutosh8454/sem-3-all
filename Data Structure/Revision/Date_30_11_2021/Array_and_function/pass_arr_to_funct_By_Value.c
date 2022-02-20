#include<stdio.h>
#include<conio.h>

void Call_By_Value(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    Call_By_Value(arr,5);
    return 0;
}