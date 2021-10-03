#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};

void insertAfter(struct Node* prev_node, int new_data)
{
	if (prev_node == NULL)
	{
	printf("the given previous node cannot be NULL");
	return;
	}
	struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}
