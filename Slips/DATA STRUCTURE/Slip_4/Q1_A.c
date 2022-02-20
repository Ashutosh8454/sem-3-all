#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* newnode(int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->data=item;
    temp->left=temp->right=NULL;

    return temp;
}

struct node* create(struct node *temp,int item)
{
    if(temp==NULL)
    {
        newnode(item);
    }

    if(item<temp->data)
    {
        temp->left=create(temp->left,item);
    }
    else if(item>temp->data)
    {
        temp->right=create(temp->right,item);
    }
    return temp;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        postorder(root->left);
        postorder(root->right);
    }
}


int main()
{
    struct node *root;
    root==NULL;
    int ch,ele;

    while(1)
     {
         printf("1:Create BST\n2:insert BST \n3:inorder BST\n4:postorder BST\n5:Exit");
         scanf("%d",&ch);
         switch (ch)
         {
         case 1:{
                   printf("Enter Root Node ");
                   scanf("%d",&ele);
                   newnode(ele);
         } break;
         case 2:{
                   printf("Enter Node ");
                   scanf("%d",&ele);
                   if(root==NULL)
                   root=create(root,ele);
                   else
                   create(root,ele);
         } break;
         case 3:inorder(root); break;
         case 4:postorder(root); break;
         case 5:exit(0); break;
         default:printf("enter Right choice");
             
         }

     }
     
}

