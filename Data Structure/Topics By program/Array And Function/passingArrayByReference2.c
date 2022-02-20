#include<stdio.h>
#include<conio.h>

void disp(int *n)
{
    printf("%d\n",*n);
}

int main()
{
    int arr[5]={1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        disp(&arr[i]);
    }
    return 0;

}