#include<stdio.h>
#include<malloc.h>
#include "AVLtree.h"

int main()
{
	int choice = 0;
	char ch = ' ';
	int val = 0;
	AVL_TREE *Root = NULL;
	do
	{
		printf("\n\n1. Add Node in Tree");
		printf("\n2. Preorder Traversal");
		printf("\n3. Inorder Traversal");
		printf("\n4. Postorder Traversal");
		printf("\n5. Delete Node in Tree");
		printf("\n6. Display The List");
		printf("\nEnter Your Choice");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nEnter the Node to be inserted : ");
			scanf_s("%d", &val);
			Root = InsertNewNode(Root, val);
			break;
		case 2:PreOrderTraversal(Root);
			break;
		case 3://Inorder(Root);
			break;
		case 4://Postorder(Root);
			break;
		case 5:
			break;
		case 6:
			break;
		default:
			break;

		}

		printf("\nEnter your Choice y/n:");
		scanf_s("%c", &ch);
		scanf_s("%c", &ch);
	} while (ch == 'Y' || ch == 'y');

	return 0;
}