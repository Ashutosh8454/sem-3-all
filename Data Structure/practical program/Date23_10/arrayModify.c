#include<stdio.h>
#include<conio.h>

void disp(int *ptr)
{
     for(int i=0;i<5;i++)
     {
        printf("%d\t",*ptr);
        *ptr=*ptr+2;
        ptr++;
     }
  
}

int main()
{
    int arr[5]={1,2,3,4,5};
  
     disp(arr);


   printf("\nChange Array\n");
     for(int i=0;i<5;i++)
     {
         printf("%d\t",arr[i]);
     }
     return 0;
   
}

/*
     

*/