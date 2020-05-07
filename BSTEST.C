#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* createnode(value)
{
	struct node* newnode=malloc(sizeof(struct node));

	newnode->data= value;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insertleft(struct node *root,int value)
{
root->left=createnode(value);
return root->left;
}
struct node* insertright(struct node*root,int value)
{
root->right=createnode(value);
return root->right;

}
void main()
{
struct node *root=createnode(1);
insertleft(root,2);
insertright(root,3);
printf("Data is %d%d%d",root->data,root->left->data,root->right->data);

getch();
}
