//Binary tree header file

#ifndef BINARYTREE_H_
#define BINARYTREE_H_

struct node *root;


struct node {
   int value;

   struct node * left;
   struct node * right;
};

void insert(int newValue);
void printTree(struct node* root);
void deleteTree(struct node* root);

#endif /* BINARYTREE_H_ */
