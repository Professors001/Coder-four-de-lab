#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} node;

void printList(node *pList) {
    while (pList != NULL) {
        printf("%d ", pList->value);
        if(pList->next == NULL) {
            printf("\n");}
        pList = pList->next;}
}

void insertNode(node **pList, int value) {
    node *temp = (node*) malloc(sizeof(node));
    temp->value = value;
    if(*pList == NULL) {
        temp->next = NULL;
        *pList = temp;
    } else if ((*pList)->value > value) {
        temp->next = *pList;
        *pList = temp;
    } else {
        node *current = *pList;
        while (current->next != NULL && current->next->value < value) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 5; i++) {
    scanf(" %d", &value);
    insertNode(&pList, value);
  }

  printList(pList);
}