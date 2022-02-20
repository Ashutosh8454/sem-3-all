#include<stdio.h>
#include<conio.h>

struct node {
      int data;
      struct node  *link;

} *head,*pre,*newnode,*temp;

int main()
{
    int n,ele,i;
    printf("\nHow many Nodes?");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            head=newnode;
            pre=newnode;
        }
        else{
                pre->link=newnode;
                pre=newnode;
        }
    }

    //display 
    
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}