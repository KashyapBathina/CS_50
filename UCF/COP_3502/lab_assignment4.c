#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	char letter;
	struct node* next;
} node;

// Returns number of nodes in the linkedList.
int length(node* head) {
	int count = 0;
	node* temp = head;

	while (temp != NULL) {
		temp = temp->next;
		count++;
	}

	return count;
}

// parses the string in the linkedList
//  if the linked list is head -> |a|->|b|->|c|
//  then toCString function wil return "abc"
char* toCString(node* head) {
	int size = length(head);
	char* str = (char*) malloc((size) * sizeof(char));
	node* temp = head;

	int i = 0;
	while (temp != NULL) {
		str[i] = temp->letter;
		temp = temp->next;
		i++;
	}
	str[size] = '\0';

	return str;
}

// inserts character to the linkedlist
// f the linked list is head -> |a|->|b|->|c|
// then insertChar(&head, 'x') will update the linked list as foolows:
// head -> |a|->|b|->|c|->|x|
void insertChar(node** pHead, char c) {
	node* newNode = malloc(sizeof(node));
    newNode->letter = c;
    newNode->next = NULL;

	if (*pHead == NULL)
		*pHead = newNode;

	else {
		node* temp = *pHead;

		while (temp->next != NULL) {
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

// deletes all nodes in the linkedList.
void deleteList(node** pHead) {
	node* tmp = *pHead;
    while (tmp != NULL) {
        *pHead = tmp->next;
        free(tmp);
        tmp = *pHead;
    }
    *pHead = NULL;
}

int main(void) {
	int i, strLen, numInputs;
	node* head = NULL;
	char* str;
	char c;
	FILE* inFile = fopen("input.txt","r");

	fscanf(inFile, " %d\n", &numInputs);

	while (numInputs-- > 0)
	{
		fscanf(inFile, " %d\n", &strLen);
		for (i = 0; i < strLen; i++) {
			fscanf(inFile," %c", &c);
			insertChar(&head, c);
		}

		str = toCString(head);
		printf("String is : %s\n", str);

		free(str);
		deleteList(&head);

		if (head != NULL) {
			printf("deleteList is not correct!");
			break;
		}
	}

	fclose(inFile);
}
