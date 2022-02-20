#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<math.h>

void ploy_accept(int arr[],int term)
{
    for(int i= term-1;i>=0;i--)
    {
        printf("\nCoefficient of X^%d :=",i);
        scanf("%d",&arr[i]);
    }
}
void ploy_display(int arr[],int term)
{ 
    int i;
    printf("\nPolynomial := ");
    for(i= term-1;i>0;i--)
    {
        printf("%dX^%d + ", arr[i],i);
        
    }

    printf("%d",arr[i]);
}

//addition function

void poly_addition(int arr[],int arr1[],int term,int term1)
{
    int size =((term>term1)?term:term1);
    int sum[20];

    for(int i=size-1;i>=0;i--)
    {
        sum[i]=arr[i]+arr1[i];
    }

    ploy_display(sum,size);
}

int main()
{
     int arr[10]={0},term;

    printf("\nEnter Term in polynomial := ");
    scanf("%d",&term);

    ploy_accept(arr,term);
    ploy_display(arr,term);

  //Second polynomial 
    printf("\n enter Second Polynomial ");
      int arr1[10]={0},term1;
    printf("\nEnter Term in polynomial := ");
    scanf("%d",&term1);

    ploy_accept(arr1,term1);
    ploy_display(arr1,term1);

    //calling addition function 
     printf("\nAdded polynomial is := ");
    poly_addition(arr,arr1,term,term1);

}