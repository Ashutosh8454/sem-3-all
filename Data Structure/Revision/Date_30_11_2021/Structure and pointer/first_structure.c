#include<stdio.h>
#include<conio.h>

struct person 
{
    char Name[25];
    int Age;
    int Roll;

};

int main()
{
        struct person *ptrperson,person1;
        ptrperson=&person1;

        printf("Enter Name:= ");
        scanf("%s",&ptrperson->Name);
        printf("\nEnter Age := ");
        scanf("%d",&person1.Age);
        printf("\nEnter Roll Number := ");
        scanf("%d",&ptrperson->Roll);

        printf("\nName:= %s",ptrperson->Name);
        printf("\nAge := %d",person1.Age);
        printf("\nRoll number := %d",person1.Roll);


}