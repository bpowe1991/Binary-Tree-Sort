//Main binary tree file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binaryTree.h"

int main() 
{
     int num;

     while ( scanf("%d", &num)!=EOF)
     {
         insert(num);
     }

     printTree(root);
     deleteTree(root);

     return 0;
}
