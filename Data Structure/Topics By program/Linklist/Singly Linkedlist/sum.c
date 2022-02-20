#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head;

void Create_SLL();
void Display_SLL();
void Sum_SLL();

int main()
{
    head=NULL;
    Create_SLL();
    Display_SLL();
    Sum_SLL();
    return 0;

}

void Create_SLL()
{
    struct node *pre,*newnode;
    int n,ele;
    printf("\nHow many nodes? ");
                                                                                                         scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Insufficient memory");
            exit(0);
        }

        printf("Enter Data : ");
        scanf("%d",&ele);
        newnode->data=ele;
        newnode->link=NULL;

        if(head==NULL)
        {
            head=newnode;
            pre=newnode;
        }
        else{
              pre->link=newnode;
              pre=newnode;
        }
    }
}

void Display_SLL()
{
    struct node *temp;
    temp=head;
 printf("Linked list is : ");
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->link;
    }
}

void Sum_SLL()
{
    struct node * temp;
    temp=head;
    int sum=0;

    while(temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->link;
    }
    printf("\n sum of linked list is : %d",sum);
}
