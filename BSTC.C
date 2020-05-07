#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *createnode(value)
{
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node *root,int data)
{
	if(root==NULL)
	return createnode(data);
	if(data<root->data)
	root->left=insert(root->left,data);
	else if(data>root->data)
	{
	root->right=insert(root->right,data);
	}
	return root;

}
void inorder(struct node *root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	printf("%d->",root->data);
	inorder(root->right);

}
void main()
{
	struct node *root=NULL;
	root=insert(root,8);
	insert(root,3);
	insert(root,5);
	insert(root,6);
	insert(root,7);
	insert(root,10);
	insert(root,15);
	insert(root,14);
	insert(root,4);
	inorder(root);
	getch();
}