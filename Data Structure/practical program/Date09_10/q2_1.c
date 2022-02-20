#include<conio.h>
#include<stdio.h>

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("swaped Value:=%d %d",a,b);
}

int main()
{
    int a=10,b=20;
    
     swap(a,b);
}