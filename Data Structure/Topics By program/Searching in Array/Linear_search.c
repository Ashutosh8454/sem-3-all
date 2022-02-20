#include<stdio.h>
#include<conio.h>

void lsearch(int[],int,int);//Function Decleration

int main()
{
    int arr[20],n,num;
    printf("How many Element print in array=> ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)//accepting element in arr
    {
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter Elemnet To be Search : ");
    scanf("%d",&num);

    lsearch(arr,n,num);//function Call
    return 0;
}

void lsearch(int arr[],int n, int num)
{
    int flag=0;

    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            flag++;
            printf("%d found At Position %d\n",num,i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("Number %d Not found in Array",num);
    }
}