#include<stdio.h>
#include<conio.h>

 void callbyvalue(int a)
 {
     printf("%d\t",a);
 }

 void callbyref(int *ptr)
 {
     printf("%d\t",*ptr);
 }

 void chaarry(int *ptr)
 {
     *ptr=*ptr+2;
 }



 int main()
{
    int arr[5]={1,2,3,4,5};

  printf("\ncall by value\n");
     for(int i=0;i<5;i++)
     {
         callbyvalue(arr[i]);
     }

  printf("\ncall by reference\n");

     for(int i=0;i<5;i++)
     {
         callbyref(arr+i);
     }
    
   printf("\nChange array\n");
   for(int i=0;i<5;i++)
   {
       chaarry(arr+i);
      
   }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
   return 0;
}