#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct align
{
    int num;
    int anotherNum;
} test;

struct Node *
createNode(int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

void traverseList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d and %ld ->", head->data, sizeof(*head));
        head = head->next;
    }
    printf("\n");
}

void main()
{
    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);


    printf("%ld \n", sizeof(struct Node*));
    printf("%d \n", sizeof(test));

    traverseList(head);
}