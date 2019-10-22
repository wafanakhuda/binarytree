#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<assert.h>
#include "bst.h"


int main()
{
Tree bst = tree_new();
Tree *tree = &bst;
//1. Design a BST class with methods to add element, search element, number of elements and delete requested element
tree = add_node(tree,10);
tree = add_node(tree,20);
tree = add_node(tree,50);
tree = add_node(tree,90);
tree = add_node(tree,70);


assert(tree->count == 5);

assert(lookup(tree,50)==1);
assert(lookup(tree,100)==0);

tree = delete_node(tree,20);
assert(tree->count == 4);

tree = delete_node(tree,20);


//2. Add methods to in-order, pre-order, post-order and level-order traversals

printf("In-order: ");
tree_inorder(tree);
printf("\nPre-order: ");
tree_preorder(tree);
printf("\nPost-order: ");
tree_postorder(tree);
printf("\nlevel-order: ");
tree_levelorder(tree);
printf("\n");

//3. Add method to find the height of binary search tree

assert(tree_height(tree)==3);

//4. Add method to count the number of terminal nodes in BST


//5. Add methods to find max and min element in BST

assert(find_min(tree)==20);
assert(find_max(tree)==70);

//6. Add method to display elements in ascending order
printf("\n");
printf("Ascending Order: ");
tree_ascending(tree);
//7. Add method to display elements in descending order

printf("\n");
printf("Descending Order: ");
tree_descending(tree);



return 0 ;

}