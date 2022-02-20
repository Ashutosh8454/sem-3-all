#include<conio.h>
#include<stdio.h>


int main()
{
    int arr[5]={1,2,3,4,5};
    int max1=0,max2=0,sum=0;

    for(int i=0;i<5;i++)
    {
        if(arr[i]>=max1)
        {
            max1=arr[i];
        }
    }

    for(int i=0;i<5;i++)
    {
        if(arr[i]>=max2 && arr[i] != max1)
        {
            max2=arr[i];
        }
    }

    sum=max1+max2;

    printf("%d",sum);
}