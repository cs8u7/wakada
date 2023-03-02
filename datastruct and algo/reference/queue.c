#include <stdio.h>
#include <stdlib.h>

struct Node {
	int key;
	struct Node *next;
};

struct Queue {
	struct Node *head, *tail;
};

struct Node *newNode(int k)
{
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp->key = k;
	temp->next = NULL;
	return temp;
}

struct Queue *createQueue()
{
	struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
	q->head = q->tail = NULL;
	return q;
}

void enQueue(struct Queue *q, int k)
{
	struct Node *temp = newNode(k);

	if (q->tail == NULL) {
		q->head = q->tail = temp;
		return;
	}
	q->tail->next = temp;
	q->tail = temp;
}

void deQueue(struct Queue *q)
{
	if (q->head == NULL)
		return;

	struct Node *temp = q->head;

	q->head = q->head->next;

	// If front becomes NULL, then change rear also as NULL
	if (q->head == NULL)
		q->tail = NULL;

	free(temp);
}

int main()
{
	struct Queue *q = createQueue();
	enQueue(q,10);
	enQueue(q,20);
	deQueue(q);
	deQueue(q);
	enQueue(q,30);
	enQueue(q,40);
	enQueue(q,50);
	deQueue(q);
	printf("Queue Front : %d \n", q->head->key);
	printf("Queue Rear : %d", q->tail->key);
	return 0;
}
