#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
    int count(struct Node* head, int search_for)
    {
	struct Node* current = head;
	int count = 0;
	while (current != NULL) {
		if (current->data == search_for)
			count++;
		current = current->next;
	}
	return count;
}
int main()
{
	struct Node* head = NULL;
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
	printf("frequency of 1 is %d \n", count(head, 1));
	printf("frequency of 2 is %d \n", count(head, 2));
	printf("frequency of 3 is %d \n", count(head, 3));
	return 0;
}
