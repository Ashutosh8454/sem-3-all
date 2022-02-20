#include<stdio.h>
#include<conio.h>

struct person   //creating Structure 
{
    int age;
    char Name[25];
    int Roll;
};

int main()
{
    struct person *personPtr,person1;
    personPtr=&person1;

   //acepting and printing  Age
    printf("Enter Age : ");
    scanf("%d",&person1.age);//other method scanf("%d",&personPtr->age);
    printf("age : %d\n",personPtr->age);

  //acepting and printing Name

  printf("Enter Name : \n");
  scanf("%s",&personPtr->Name);//other method scanf("%s",&person.age);
  printf("Name : %s\n",personPtr->Name);


  //Acepting and printing Roll

  printf("Enter Roll : \n");
  scanf("%d",&personPtr->Roll);//other method scanf("%d",&person.Roll);
  printf("Roll : %d\n",personPtr->Roll);

}
