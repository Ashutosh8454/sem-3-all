#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[]={1,2,3,4,5};

    for(int i=0;i<=4;i++)
    {

     printf("\n%d",*(arr+i));
    }

    return 0;
}