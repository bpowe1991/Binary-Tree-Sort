//Implementation file for binary Tree header file.

#include "binaryTree.h"
#include <stdio.h>
#include <stdlib.h>


void insert(int newValue)
{
   struct node *newNode = (struct node*) malloc(sizeof(struct node));
   struct node *currentNode;
   struct node *parentNode;

   newNode->value = newValue;
   newNode->left = 0;
   newNode->right = 0;

   if(root == 0)
   {
      root = newNode;
   }
   else
   {
      currentNode = root;
      parentNode = 0;

      while(1)
      {
         parentNode = currentNode;

         if(newValue <= parentNode->value)
         {
            currentNode = currentNode->left;

            if(currentNode == 0)
            {
               parentNode->left = newNode;
               return;
            }
         }
         else
         {
            currentNode = currentNode->right;

            if(currentNode == 0)
            {
               parentNode->right = newNode;
               return;
            }
         }
      }
   }
}

void printTree(struct node* root)
{
   if(root != 0) {
      printTree(root->left);
      printf("%d ",root->value);
      printTree(root->right);
   }
}

void deleteTree(struct node * root)
{
	if (root == 0)
	{
		return;
	}
	deleteTree(root->left);
	deleteTree(root->right);
	free(root);

}
