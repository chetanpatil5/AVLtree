#pragma once
typedef struct AVL_TREE
{
	int Data;
	struct AVL_TREE *lChild, *rChild;
	int height;
}AVL_TREE;


//Allocate a Memory to New Node
AVL_TREE *AllocateNewNode(int val);
AVL_TREE *InsertNewNode(AVL_TREE *root,int val);
AVL_TREE *DeleteNewNode(AVL_TREE *root, int val);
void PreOrderTraversal(AVL_TREE *root);
int Height(AVL_TREE *node);
int Max(int lnode, int rnode);
int GetBalance(AVL_TREE *node);

AVL_TREE *leftRotate(AVL_TREE *node);
AVL_TREE *rightRotate(AVL_TREE *node);

