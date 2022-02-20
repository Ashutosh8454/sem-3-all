#include<stdio.h>
#include<conio.h>

void Bsearch(int[],int,int);//Function Decelertion

int main()
{
    int arr[20],n,key;

    printf("How many element You Want to Enter In Array : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)//for loop for Accepting Element in Array
    {
        printf("Enter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter Number To Be searched in Array : ");
    scanf("%d",&key);

    Bsearch(arr,n,key);

}

void Bsearch(int arr[],int n, int key)
{
    int start,end,middle,flag;
    flag=0;
    start=0;
    end=n-1;
    middle=(start+end)/2;

    while(start<=end)
    {
        if(key==arr[middle])
        {
            flag=1;
            break;
        }
        else if(key>arr[middle])
        {
            start=middle+1;
        }
        else{
              end=middle-1;
        }
        middle=(start+end)/2;
    }

    if(flag==1)
    {
        printf("Number %d Found At position %d",key,middle+1);
    }
    else{
          printf("Number Not Found in the Array");
    }
}