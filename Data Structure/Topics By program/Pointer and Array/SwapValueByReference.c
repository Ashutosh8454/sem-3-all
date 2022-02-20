#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10,b=20;


    printf("Value of a Before swap:%d\n",a);
    printf("Value of b Before swap:%d\n",b);

    swap(&a,&b);
    printf("Value of a After swap:%d\n",a);
    printf("Value of b after swap:%d\n",b);
    return 0;
}