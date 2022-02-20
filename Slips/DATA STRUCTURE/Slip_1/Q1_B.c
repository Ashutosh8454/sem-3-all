#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void display(int a[10],int n)
{
    int i;
     for(i=n-1;i>0;i--)
    {
        printf("%dx^%d + ",a[i],i);
        
    }  
    printf("%d",a[i]);
}

void eve(int a[10],int n,int x)
{
    int sum=0,i;
    for(i=n-1;i>=0;i--)
    {
        sum+=a[i]*pow(x,i);
    }
    printf("Sum of polynomial :=%d",sum);
}

int main()
{
    int a[10],n;

    printf("Enter Number of cofficient: ");
    scanf("%d",&n);

    printf("Enter Polynomial : \n");

    for(int i=n-1;i>=0;i--)
    {
        printf("Enter x^%d:=",i);
        scanf("%d",&a[i]);
    }
    display(a,n);
    eve(a,n,3);
    return 0;

}


