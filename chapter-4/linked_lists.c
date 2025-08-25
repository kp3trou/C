#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node {
	int data;
	struct node *next;
};

// global variable pointer that points at struct node data type.
struct node *start = NULL;


// function declarations
struct node *create_ll(struct node *start);
struct node *display(struct node *start);


int main(int argc, char *argv[]){
	// A linked list is a collection of data elements called nodes
	// in which the linear  representation is given by links from
	// one node to the next node. 
	int option;

	do{
		printf("\n***** Main Menu *****\n\n");	
		printf("1: Create a list\n");
		printf("2: Display a list\n");
		printf("3: Add a node at the beginning\n");
		printf("4: Add a node at the end\n");
		printf("5: Add a node before a given node\n");
		printf("6: Add a node after a given node\n");
		printf("7: Delete a node from the beginning\n");
		printf("8: Delete a node from the end\n");
		printf("9: Delete a given node\n");
		printf("10: Delete a node after a given node\n");
		printf("11: Delete the entire list\n");
		printf("12: Sort the list\n");
		printf("13: EXIT\n");
		printf("Enter your option: ");
		scanf("%d",&option);
		switch(option){
			case 1: start =  create_ll(start);
			//return 0;
			break;
			case 2: start = display(start);
			break;
		}


	} while (option!=13);

	return 0;
}

// function definitions

// create linked list and insert nodes and data.
// The node insert at the end of list.(first, second, third, etc)
struct node *create_ll(struct node *start){

	struct node *new_node, *ptr;// declare 2 pointers that points at struct node data type.
	int num;
	printf("Enter -1 to end\n");
	printf("Enter the data: ");
	scanf("%d",&num);

	while(num!=-1){
		new_node = (struct node*)malloc(sizeof(struct node));// memory allocation for new node.
		new_node->data = num;// insert data.
		if(start==NULL){
			new_node->next = NULL;
			start = new_node;
		}
		else{
			ptr = start;
			while(ptr->next!=NULL){
				ptr = ptr->next;
			}
			ptr->next = new_node;
			new_node->next=NULL;
		}

		printf("Enter the data: \n");
		scanf("%d",&num);
	}

	return start;
}

// Display the list
struct node *display(struct node *start){
	struct node *ptr;
	ptr = start;
	if(ptr == NULL){
		printf("The list is empty.\n");
		return start;
	
	}
	while(ptr != NULL){
		printf("%d -> ", ptr -> data);
		ptr = ptr -> next;
	}
	printf("NULL (End Of List)\n");
	return start;
}
















