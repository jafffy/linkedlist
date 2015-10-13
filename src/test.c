// test.c
//
// There is linked list template code. Fill it.
//

#include <stdio.h>

struct Node
{
	int data;
	struct Node *data;
};

static struct Node* head = NULL;

void init()
{
}

// free all allocated memories
void destroy()
{
}

void push_back(int data)
{
}

void push_front(int data)
{
}

void pop_back()
{
}

void pop_front()
{
}

// insert new Node before "next" variable
void insert(struct Node* next, int data)
{
}

void erase(struct Node* target)
{
}

int main()
{
	int i;

	init();

	for (i = 0; i < 10; ++i) {
		push_back(i);
	}

	pop_front();
	pop_back();

	erase(head->next->next);

	insert(head->next->next->next, 5);

	for (struct Node* idx = head; idx != NULL; idx = idx->next) {
		printf("%d ", idx->data);
	}

	destroy();

	return 0;
}
