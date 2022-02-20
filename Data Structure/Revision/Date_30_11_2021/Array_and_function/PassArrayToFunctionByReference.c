#include<stdio.h>
#include<conio.h>

void call_By_Reference(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n%d",*(a+i));
    }

}

int main()
{
    int arr[]={1,2,3,4,5};
    call_By_Reference(arr,5);
    return 0;
}