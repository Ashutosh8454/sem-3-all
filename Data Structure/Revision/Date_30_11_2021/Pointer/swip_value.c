#include<stdio.h>
#include<conio.h>

void modify_valu(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    printf("Enter Two Number to swip value : \n");
    scanf("%d%d",&a,&b);
    printf("without swip->  a:= %d  b:= %d\n",a,b);
    modify_valu(&a,&b);
    printf("swiped ->  a:= %d  b:= %d\n",a,b);
    return 0;
}