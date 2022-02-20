#include<stdio.h>
#include<conio.h>

struct student
{
     int roll;
     char name[25];
     int age;
};

int main()
{
    struct student *studentPtr,student1;
    studentPtr=&student1;
   
   //accepting roll
    printf("\nEnter roll Number:\n");
   // scanf("%d",&student1.roll);
            //OR
     scanf("%d",&studentPtr->roll);



   //accepting Name
    printf("\nEnter Student Name:\n");
    //scanf("%s",&student1.name);
            //OR
    scanf("%s",&studentPtr->name);



   // accepting age
    printf("\nEnter Student age:\n");
   // scanf("%d",&student1.age);
            //OR
      scanf("%d",&studentPtr->age);





   //printing roll
    printf("\nroll Number:\n");
   // printf("%d\n",student1.roll);
            //OR
    printf("%d\n",studentPtr->roll);




   //printing name
    printf("\n Student Name:\n");
  //  printf("%s\n",student1.name);
            //OR
    printf("%s\n",studentPtr->name);




   //printing age
    printf("\n Student age:\n");
   // printf("%d\n",student1.age);
            //OR
    printf("%d\n",studentPtr->age);

   
   
   return 0;


}