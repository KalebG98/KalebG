// Worked on this program with Dylan, Katherine, Andrew and Jose
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 120

                         
struct treeNode {
	struct treeNode *leftPtr; // pointer to left subtree
	char *data; // node value                             
	struct treeNode *rightPtr; // pointer to right subtree
};                           

typedef struct treeNode TreeNode; 
typedef TreeNode *TreeNodePtr; 

							   
void insertNode(TreeNodePtr *treePtr, char *value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);


int main(void)
{

	TreeNodePtr rootPtr = NULL; 

	char *LinePtr; 
	int c; 
	char sentence[SIZE]; 
	int i = 0; 

			   
	puts("Please enter a line of text:");

	// use getchar to read each character              
	while (i < SIZE - 1 && (c = getchar()) != '\n') {
		sentence[i++] = c;
	} 

	
	puts("Starting to initialize the line of text.");
	

	sentence[i] = '\0'; 
	LinePtr = strtok(sentence, " "); 

									  
	while(LinePtr!= NULL) {
		insertNode(&rootPtr, LinePtr);
		LinePtr = strtok(NULL, " "); 
	} 

	
	puts("Scanning line, tree is being created.");
	

	// traverse preOrder
	puts("The preOrder traversal is:");
	preOrder(rootPtr);

	puts("");

	// traverse inOrder
	puts("\nThe inOrder traversal is:");
	inOrder(rootPtr);

	puts("");

	// traverse postOrder
	puts("\nThe postOrder traversal is:");
	postOrder(rootPtr);

	puts("\n--------------------------------");
	system("pause");
	return 0;
} 

  // insert node into tree
void insertNode(TreeNodePtr *treePtr, char *value)
{
	// if tree is empty
	if (*treePtr == NULL) {
		*treePtr = (TreeNodePtr)malloc(sizeof(TreeNode));

		
		if (*treePtr != NULL) {
			(*treePtr)->data = value;
			(*treePtr)->leftPtr = NULL;
			(*treePtr)->rightPtr = NULL;
		} 
		else {
			printf("%s not inserted. No memory available.\n", value);
		} 
	} 
	else { 
		   
		if (strcmp((*treePtr)->data, value) == 1) {
			insertNode(&((*treePtr)->rightPtr), value);
		}
		
		else if (strcmp((*treePtr)->data, value) == -1) {
			insertNode(&((*treePtr)->leftPtr), value);
		}                                    
		else { 
			printf("The String %s is repeat\n", value);
		} 
	} 
} 

  // inOrder
void inOrder(TreeNodePtr treePtr)
{
	// Traversal
	if (treePtr != NULL) {
		inOrder(treePtr->leftPtr);
		printf("%s ", treePtr->data);
		inOrder(treePtr->rightPtr);
	}                         
} // end inOrder

  // preOrder
void preOrder(TreeNodePtr treePtr)
{
	// Traversal
	if (treePtr != NULL) {
		printf("%s ", treePtr->data);
		preOrder(treePtr->leftPtr);
		preOrder(treePtr->rightPtr);
	}                         
} // end preOrder

  // postOrder
void postOrder(TreeNodePtr treePtr)
{
	// Traversal
	if (treePtr != NULL) {
		postOrder(treePtr->leftPtr);
		postOrder(treePtr->rightPtr);
		printf("%s ", treePtr->data);
	}                        
} // end postOrder