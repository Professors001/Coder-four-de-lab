#include <stdio.h>
#include <stdlib.h>

typedef struct LinkList {
    int value;
    struct LinkList* NextNode;
}Node;

void printList(Node *head) {
    Node* current = head;
    puts("Print LinkList");
    while(current) {
        printf("%d ", current->value);
        current = current->NextNode;
    }
    puts(""); puts("-------------------------");
}

void addList(Node** head,int n) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->value = n; temp->NextNode = NULL;
    if((*head) == NULL) {
        (*head) = temp;
    } else {
        Node* runner = *head;
        while(runner->NextNode) {
            runner = runner->NextNode;
        }
        runner->NextNode = temp;
    }
}

void deleteList(Node** head,int target) {
    Node* runner = *head; Node* prev = NULL;
    while(runner != NULL) {
        if(runner->value != target) {
            prev = runner;
            runner = runner->NextNode;
        } else {
            if(prev == NULL) {
                *head = runner->NextNode;
                free(runner); runner = (*head)->NextNode;
            } else {
                prev->NextNode = runner->NextNode;
                Node* temp = runner;
                runner = runner->NextNode;
                free(temp);
            }
        }
    }
}

int main() {
    Node* head = NULL;
    int x = 10;
    for(int i = 0;i < 10;i++) {
        addList(&head, i);
    }
    for(int i = 0;i < 10;i++) {
        addList(&head, 5);
    }
    printList(head);
    deleteList(&head, 0);
    printList(head);
    deleteList(&head, 0);
    printList(head);
    deleteList(&head, 9);
    printList(head);
    deleteList(&head, 5);
    printList(head);
    return 0;
}