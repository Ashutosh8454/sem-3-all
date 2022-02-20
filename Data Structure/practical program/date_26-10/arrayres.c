#include<stdio.h>
#include<conio.h>

int main()
{
    int a[2][3],b[2][3],i,j;
   
   printf("Enter element in array 1");
   // Row wise accepting
    for(i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
  printf("Enter element in array 2");
  // column wise accepting
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<2;j++)
       {
           scanf("%d",&b[j][i]);
       }
   }

   //printing row wise
   printf("Printing element in Row wise\n");
     for(i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    //printing column wise
    printf("Printing element in column wise\n");
     for(int i=0;i<2;i++)
   {
       for(int j=0;j<3;j++)
       {
           printf("%d\t",b[i][j]);
       }
       printf("\n");
   }
   return 0;

}