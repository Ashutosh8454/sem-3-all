#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *link;
}*head,*head1;


struct node* SLL(struct node *point)
{
    int ele;
    struct node *newnode;
    struct node *pre;
    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode==NULL)
    {
        printf("insufficient memory : ");
        exit(0);
    }

    printf("enter Value := ");
    scanf("%d",&ele);
    newnode->data=ele;
     newnode->link=NULL;

    if(point==NULL)
    {
        point=newnode;
        pre=newnode;
       
        
    }
    else{
          pre->link=newnode;
          pre=newnode;
    }
    return point;
}

void display(struct node *point)
{
    struct node *temp;
    temp=point;
    printf("\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}

 struct node* SLL_union(struct node *head ,struct node*head1)
 {
      struct node *result;
      struct node *q,*p;

      q=head;
      p=head1;   
  
     while(q!=NULL)
     {
         push(result,q->data);
         q=q->link;
     }

     while(p!=NULL)
     {
          if(!ispresent(result,p->data))
          {
              push(result,p->data);
          }
     }

     return result;

        
 }

 int ispresent(struct node *head,int key)
   {
       struct node *t;
       t=head;

       while (t!=NULL)
       {
           if(t->data==key)
           {
               return 1;
           }
       }
       return 0;
       
   }
   
  void push(struct node *point,int ele)
  {
      
    struct node *newnode;
    struct node *pre;
    newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode==NULL)
    {
        printf("insufficient memory : ");
        exit(0);
    }

   
    newnode->data=ele;
     newnode->link=NULL;

    if(point==NULL)
    {
        point=newnode;
        pre=newnode;   
    }
    else{
          pre->link=newnode;
          pre=newnode;
    }
    
  }

int main()
{
    head=NULL;
    head1=NULL;
    int n1,n2;

    printf("Enter number of node in first linklist := ");
    scanf("%d",&n1);

    for(int i=1;i<=n1;i++)
    {
       head=SLL(head);
    }
    printf("Enter number of node in second linklist := ");
    scanf("%d",&n2);

    for(int i=1;i<=n2;i++)
    {
       head1=SLL(head1);
    }

   struct node *finalunion;
   finalunion=SLL_union(head,head1);
   display(finalunion);


}


  