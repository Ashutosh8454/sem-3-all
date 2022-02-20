#include<stdio.h>
#include<conio.h>

void Accep_poly(int a[],int t)
{
    int i;

    for(int i=t-1;i>=0;i--)
    {
        printf("\n Coefficient of X^%d:",i);
        scanf("%d",&a[i]);
    }
}

void Display_poly(int a[],int t)
{
    int i;
    printf("\nEnterd Polynomial is :");
    for(i=t-1;i>0;i--)
    {
        printf("%dx^%d +",a[i],i);
    }
    printf("%d",a[i]);
    
}

int main()
{
    int a[10]=0,t;
    
    printf("\nHow many terms for polynomial :");
    scanf("%d",&t);
    Accep_poly(a,t);
    Display_poly(a,t);
    return 0;

}