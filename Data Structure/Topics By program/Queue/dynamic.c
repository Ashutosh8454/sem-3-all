#include<stdio.h>
#include<stdlib.h>//Ashutosh Kumar
#include<conio.h>//Roll_no-SA04

struct queue
{
    int data;
    struct queue *link;
}*front=NULL,*rear=NULL;

void add();
void delete();
void queue_size();
void Display();

void main()
{
    int choice, value;
 
    while(1)
    {
        printf("enter the choice \n");
        printf("1 : Insert element\n");
        printf("2 : Delete Element \n3 : Queue Size \n");
        printf("4. Display\n");
        printf("5. Exit\n");
        scanf("%d", &choice);
        switch (choice)    
        {
        
        case 1:    
            add();
            break;
        case 2: 
            delete();
            break;
        case 3: 
            queue_size();
            break;
        case 4: 
            Display();
            break;
        case 5: 
            exit(0);
            break;
        default: 
            printf("wrong choice\n");
            break;
        }
    }
}

void add()
{
  struct queue *temp;
 
    temp = (struct queue*)malloc(sizeof(struct queue));
    printf("Enter value to be inserted \n");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (rear  ==  NULL)
    {
        front = rear = temp;
    }
    else
    {
        rear->link = temp;
        rear = temp;
    }    
}

void delete()
{
    struct queue *temp;
 
    temp = front;
    if (front == NULL)
    {
        printf("queue is empty \n");
        front = rear = NULL;
    }
    else
    {    
        printf("deleted element is %d\n", front->data);
        front = front->link;
        free(temp);
    }
}

void queue_size()
{
    struct queue *temp;
 
    temp = front;
    int cnt = 0;
    if (front  ==  NULL)
    {
        printf(" queue empty \n");
    }
    while (temp)
    {
       
        temp = temp->link;
        cnt++;
    }
    printf(" size of queue is %d \n", cnt);
}

void Display()
{
    struct queue *temp;
    temp=front;
    if(front==NULL)
    {
        printf("queue is Empty");
    }

    while(temp)
    {
        printf("%d \n",temp->data);
        temp=temp->link;

    }
}