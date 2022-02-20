#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[]={1,2,3};

    printf("Value of index 0:=%d\n",arr[0]);
    printf("Address of index 0:=%u\n",arr+0);
    printf("Value of index 1:=%d\n",*(arr+1));
    printf("Address of index 1:=%u\n",arr+1);
    printf("Value of index 2:=%d\n",*(arr+2));
    printf("Address of index 2:=%u\n",arr+2);
    return 0;
}