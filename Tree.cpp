#include <iostream>
#include <conio.h>

using namespace std;

struct node{
	int value;
	node * left,right,parent;
}*root;
void addnode(node * &nd,int x){
	node *E= new node;
	E->value=x;
	E->left=NULL;
	E->right=NULL;
	E->parent=NULL;
	
	if(nd==NULL){
		nd=E;
		parent=NULL;
	}
	else{
		if(x>nd->value)
			addnode(nd->right,x);
		else
			addnode(nd->left,x);
	}
}
void PreOrder(node *nd){
	cout<<nd->value<<endl;
	if(nd->left!=NULL) PreOrder(nd->left);
	if(nd->right!=NULL) PreOrder(nd->right);
}

void deletenode(node *deletenode,int y,int x){
	;
if (deletenode->left==NULL){
	y=deletenode;}
if  (deletenode->right==NULL){
y=deletenode;}
	else{
	y=findSuccesor(deletenode)}
	if(y->left != NULL){
		x=y->left;
	}
	else{
		x=y->Right;
	}
	if(x!=NULL){
		x->parent = y->parent;
	}
	if(y->parent==NULL){
		node->root=x;
	}
	else{
		if(y==y->parent->left){
		y->parent->left=x;
		}
		else{
			y->parent->right=x;
		}
	}
	if(y!=deletenode){
		deletenode->value = y->value;
	}
	return y;
}
