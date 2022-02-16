#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *n;
    n =(struct node*)malloc(sizeof( struct node ));
    n->data = data;
    n->left = NULL;
    n->right =NULL; 
    return n;
}
void preordertraverse(struct node *root )
{
    if(root != NULL)
    {
         printf("%d ",root->data);
         preordertraverse(root->left);
         preordertraverse(root->right);

    }
   
}
void postoreder(struct node *root)
{
    
    if (root != NULL)
    {
        postoreder(root->left);
        postoreder(root->right);
        printf("%d ",root->data);
    }
    
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    
}
int isBST(struct node* root)
{
    static struct node *prev =NULL;
    if (root!=NULL)
    {
        
        if(!isBST( root ->left)){
          printf("it is not binary s tree");
            return 0;//if given tree is binary search tree then this loop is not executed as function will return 1;
        }
        if( prev != NULL && root ->data <= prev->data)
        {
            printf("this is not a binary search tree");
            return 0;  //this will execute if it is not binary search tree.
        }
        prev = root;
        return isBST(root ->right);//this will always give 1 if given tree is binary search tree
    }
    else
    {
        return 1;//this will used most
    }
      
}

int main()
{
    struct node *p  =  createNode(4);
    struct node *p1  = createNode(2);
    struct node *p2  = createNode(1);
    struct node *p3 = createNode(3);
    struct node *p4 = createNode(6);
    struct node *p5 = createNode(5);
        struct node *p6 = createNode(7);




    //              4(p)
    //            /      \
    //           /        \    
    //       2(p1)        6(p4)
    //     /     \         /   \
    //    /       \       /     \
    //    1(p2)   3(p3)  5(p5)   7(p6)
p->left = p1;
p->right =p4;
p1->left = p2;
p1 -> right =p3; 
p4->left =p5;
p4->right = p6;
printf("preorder traverser: ");
preordertraverse(p);
printf("postorder traverser: ");
printf("inorder traverser:  ");
inorder(p);
// postoreder(p);
printf("is bst: %d",isBST(p));
    return 0;
}