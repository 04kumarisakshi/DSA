#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node*newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data=data ;
    node->left= NULL;
    node->right=NULL;
    return(node);

}
void printInorder(struct node*node)
{
    if(node==NULL)
    return;
    printInorder(node->left);
    printf("%d",node->data);
    printInorder(node->right);
}
void printPreorder(struct node*node)
{
    if (node==NULL)
    return;
    else{
     printf("%d",node->data);
    printPreorder(node->left);
    printPreorder(node->right);
    }
   
}
void printPostorder(struct node*node)
{
    if (node==NULL)
    return;
     
    printPreorder(node->left);
    printPreorder(node->right);
    printf("%d",node->data);
   
}
 int main()
 {
    struct node*root=newNode(1);
  
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    printf("\n Inorder traversal of the tree\n");
    printInorder(root);
    printf("\n Preorder treversal of the tree\n");
    printPreorder(root);
    printf("\n postorder terversal of the tree \n");
    printPostorder(root);
    getchar();
    return  0;
 }
