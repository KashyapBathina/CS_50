#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

void markEven(node* head) {
    node* tmp = head;

    while (tmp != NULL) {
        while (tmp != NULL && ((tmp->data) % 2) != 0) {
            tmp = tmp->next;
        }

        if (tmp != NULL) {
            node* newNode = malloc(sizeof(node));
            newNode->data = -1;
            newNode->next = NULL;

            newNode->next = tmp->next;
            tmp->next = newNode;
            tmp = newNode->next;
        }
    }
}

void deallocateList(node** head) {
    node* tmp = *head;
    while (tmp != NULL) {
        *head = tmp->next;
        free(tmp);
        tmp = *head;
    }
    *head = NULL;
}

int insertList(node** head, int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL)
        return -1;
    newNode->data = data;
    newNode->next = NULL;
    newNode->next = *head;
    *head = newNode;
    return 1;
}

void printList(node* head) {
    node* tmp = head;
    while (tmp != NULL) {
        printf("%d", tmp->data);
        if (tmp->next != NULL) {
            printf(", ");
        }
        else {
            printf(".\n");
        }
        tmp = tmp->next;
    }
}

int main(void) {
    node* head = NULL;
    insertList(&head, 8);
    insertList(&head, 3);
    insertList(&head, 1);
    insertList(&head, 7);
    insertList(&head, 6);
    insertList(&head, 2);
    printf("Initial List:\n");
    printList(head);
    markEven(head);
    printf("Marked List:\n");
    printList(head);
    deallocateList(&head);
}
