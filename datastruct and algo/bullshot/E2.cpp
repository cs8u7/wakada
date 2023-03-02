# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <bits/stdc++.h>

typedef struct _Node
{
    char word;
    struct _Node *next;
} Node;

typedef struct _Stack
{
    Node *pFront, *pBack;
} Stack;

Node *newNode(char word)
{
    Node* temp = (Node *)malloc(sizeof(Node));
    temp->word = word;
    temp->next = NULL;
    return temp;
}

int isEmpty(Stack s)
{
    if(s.pFront == NULL)
        return 0;
    return 1;
}

Stack* init()
{
    Stack* s = (Stack *)malloc(sizeof(Stack));
    s->pFront = s->pBack = NULL;
    return s;
}

void push(Stack &s, char data) {
	Node *ptr = newNode(data);
	if (isEmpty(s)==0)
		s.pFront = s.pBack =ptr;
	else {
	    ptr->next=s.pFront;
		s.pFront=ptr;
	}
}

char pop(Stack &s) {
	if(isEmpty(s)==1)
	{
	    Node* ptr=s.pFront;
	    s.pFront=s.pFront->next;
	    return ptr->word;
	    delete ptr;
	}
}

void Scanf(Stack &s)
{
    char ch[]="VietNam";
    for(int i=0;i<7;i++)
        push(s,ch[i]);
    return;
}

void Printf(Stack &s)
{

    if(isEmpty(s)==1)
    {
        Node *p=s.pFront;
        while(p!=NULL)
        {
            printf("%c",p->word);
            p=p->next;
        }
    }
    else printf("empty stack");
    printf("\n");
}

void Process(Stack &s,Stack &out)
{
    for(int i=0;i<4;i++)
        {
            printf("Stack UNDO:");
            Printf(s);
            printf("Stack REDO:");
            Printf(out);
            char x=pop(s);
            push(out,x);
        }
    return;
}

int main()
{
    Stack *s=init();
    Stack *out=init();
    Scanf(*s);
    Process(*s,*out);
    return 0;
}
