#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node* connect;

struct node
{
    int value;
    struct node *arrow;
};
typedef struct node number;

typedef struct linkedlist
{
    int size;
    number *low;
} list;

void initList(list *l)
{
    l->size = 0;
    l->low = NULL;
}

number* initNode(int num)
{
    number *Number = malloc(sizeof (number));
    Number->value = num;
    Number->arrow = NULL;
    return Number;
}

bool isEmpty_list(list *l)
{
    return (l->size == 0);
}

void insertFirst(number *pNew, list *l)
{
    if (isEmpty_list(l))
    {
        l->size++;
        l->low = pNew;
    }
}

void insert(number *pNew, number *pOld, list *l)
{
    pNew->arrow =  pOld->arrow;
    pOld->arrow = pNew;
    l->size++;
}

int length(list *l)
{
    return l->size;
}

void display(connect head)
{
    connect temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->arrow;
    }
    printf("\n");
}

void partition(connect head, connect *front, connect *back)
{
   connect fast, slow;
   if (head == NULL || head->arrow == NULL)
   {
       *front = head;
       *back = NULL;
   }
   else 
   {
       slow = head;
       fast = head->arrow;
       while (fast != NULL)
       {
           fast = fast->arrow;
           if (fast != NULL)
           {
               slow = slow->arrow; 
               fast = fast->arrow; 
           }
       }
   }
   *front = head; 
   *back = slow->arrow; 
   slow->arrow = NULL; 
   display(*front); 
   display(*back); 
}

connect mergeLists(connect a, connect b)
{
    connect mergedList = NULL;
    if (a == NULL)
    {
        return b;
    }
    else if (b == NULL)
    {
        return a;
    }
    if (a->value <= b->value)
    {
        mergedList = a;
        mergedList->arrow = mergeLists(a->arrow, b); 
    }
    else
    {

        mergedList = b;
        mergedList->arrow = mergeLists(a, b->arrow); 
    }
    return mergedList;
}

void mergeSort(connect *source)
{
    connect head = *source;
    connect a, b;
    if (head == NULL || head->arrow == NULL)
    {
        return;
    }
    partition(head, &a, &b);
    mergeSort(&a);
    mergeSort(&b);
    *source = mergeLists(a, b);
}

int main()
{
    int n, variable = 0;
    bool verify = false;
    number *x, *y;
    list *ls, a;
    ls = &a;
    initList(ls);
    connect *temp = &ls->low;
    printf("Algorithm complexity \n");
    printf("Worst O(nlog(n)) \n");
    printf("Best O(nlog(n)) \n");
    printf("Average O(nlog(n) \n");
    while (verify != true)
    {
        printf("Enter the size of your list: ");
        scanf("%d", &n);
        if(n <= 0)
        {
            printf("List is empty or invalid number \n");
        }
        else
        {
            verify = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number for index %d: ", i);
        scanf("%d", &variable);
        x = initNode(variable);
        if (i == 0)
        {
            insertFirst(x, ls);
        }
        else
        {
            insert(x, y, ls);
        }
        y = x;
    }
    printf("Your linked list: ");
    display(*temp);
    mergeSort(&ls->low);
    printf("Your sorted linked list: ");
    display(*temp);
    return 0;
}
