#include<stdio.h>
#include<conio.h>

void linearSearch(int arr[],int key,int n)
{
    int flag=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Key find At position := %d",i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nERROR............Key Not Find");
    }
}

int main()
{
    int arr[5],key;

    printf("Enter 5 Element in Array := ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Enter Key To be Search := ");
    scanf("%d",&key);
    linearSearch(arr,key,5);
}