#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node {
    int key;
    struct node *leftnode,*rightnode;
};

struct node* newnode(int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->key=item;
    temp->leftnode=temp->rightnode=NULL;
    return temp;
}

struct node* insert (struct node *node,int key)
{
    if(node==NULL)
    {
        return newnode(key);
    }

    if(key<node->key)
    {
        node->leftnode=insert(node->rightnode,key);
    }
    else if(key>node->key)
    {
        node->rightnode=insert(node->rightnode,key);
    }
    return node;
}

void inorder(struct node* node)
{
    if(node!=NULL)
    {
        inorder(node->leftnode);
        printf("%d\n",node->key);
        inorder(node->rightnode);
    }
}


int main()
{
    struct node * root=NULL;
    int key;

      while (1)
      {    
          int ch;
           printf("1:Create BST \n2:insert into BST \n1:Display BST \n4:Exit  BST\n");
           scanf("%d",&ch);

           switch (ch)
           {
           case 1: {
               printf("Enter Value of Root:  ");
               scanf("%d",&key);
               root = newnode(key);                 
            }break;
           case 2: {
               printf("Enter Value :  ");
               scanf("%d",&key);
               if(root==NULL)
               root=insert(root,key);  
               else
                  insert(root,key);            
            }break;
           case 3: {
                     inorder(root);               
            }break;
           case 4: {
                     exit(0);              
            }break;
               
           
           default:printf("Enter Right Key");
               break;
           }
      }
      
}

