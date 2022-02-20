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
     swap(&a,&b);
     printf("swaped value:=%d %d",a,b);

}