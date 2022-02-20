#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node{
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

struct node* insert(struct node* node , int key)
{
    if(node==NULL)
    {
        return newnode(key);
    }
    if(key<node->key)
    {
        node->leftnode=insert(node->leftnode ,key);
    }
    else if(key>node->key)
    {
        node->rightnode=insert(node->rightnode ,key);
    }
    return node;
}

void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->leftnode);
        printf("%d \n",root->key);
        inorder(root->rightnode);
    }
}

int main()
{
    int ch;
    int ex;
    struct node* root =NULL;

    do
    {
        printf("1: Create BTS \n");
        printf("2: Insert BTS \n");
        printf("3: Display BTS \n");
        scanf("%d",&ch);
        
        switch (ch)
        {
        case 1:{
            int key;
            printf("Enter key :  ");
            scanf("%d",&key);
            root=newnode(key);
        }break;
        case 2:{
            int key;
            printf("Enter key :  ");
            scanf("%d",&key);
             insert(root,key);
        }break;
        case 3:{
           inorder(root);
        }break;
        default:printf("Enter right key");
        }
        
        printf("1: Exit\n");
        printf("2:continue \n");
        scanf("%d",&ex);
    } while(ex!=1);
    
}

