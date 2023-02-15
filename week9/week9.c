#include <stdio.h>
#include <stdlib.h>

struct Book__ //declare struct
{
    char title[100];
    int page; // จำนวนหน้าในหนังสือ
    int readPage; //จำนวนหน้าที่อ่านแล้ว
};

struct Node__
{
    int value;
    struct Node__* next;
};

typedef struct Book__ Book;

typedef struct Node__ Node;

void printBook(Book book) {
    printf("Title: %s\n", book.title);
    printf("Read: %d/%d\n", book.readPage, book.page);
}

void readBook(Book *book, int page) {
    book->readPage += page;
}

void findTopPage(Book books[], int size, Book **topPage) {
    *topPage = &books[0];
    for(int i = 1; i < size; i++) {
        if((*topPage)->page < books[i].page) {
            *topPage = &books[i];
        }
    }
}

void printList(Node *startPtr) {
    Node *current = startPtr;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("\n");
}

void addFirst(Node **startPtr, int value)
{
    Node *temp = (Node*) malloc(sizeof(Node));
    temp->value = value;
    if(*startPtr == NULL) {
        temp->next = NULL;
        *startPtr = temp;
    } else {
        temp->next = *startPtr;
        *startPtr = temp;
    }
}

void addLast(Node **startPtr, int value) {
    Node *temp = (Node*) malloc(sizeof(Node));
    temp->value = value;
    temp->next = NULL;
    if(*startPtr == NULL) {
        *startPtr = temp;
    } else {
        Node* current = *startPtr;
        while (current->next != NULL) {
            current = current->next;

        }
        current->next = temp;
    }
}

void delete(Node **startPtr, int value) {
    Node *current = *startPtr;
    Node *previous = NULL;
    while (current != NULL && current -> value != value) {
        previous = current;
        current = current->next;
    }

    if(current != NULL) {
        if(previous != NULL) {
            previous->next = current -> next;
        } else {
            *startPtr = current -> next;
        }
        free(current);
    } else {
        printf("%d Not Found\n", value);
    }
}

int main() 
{
    // Book book; // declare variable
    // Book myBook;

    // book.page = 300;
    // book.readPage = 0;
    // sprintf(book.title, "Introduction to C/C++");

    // sprintf(myBook.title, "The Animal Farm");
    // myBook.page = 112;
    // myBook.readPage = 0;

    // // printf("Title: %s\n", book.title);
    // // printf("Read: %d/%d\n", book.readPage, book.page);

    // readBook(&book, 10);
    // readBook(&book, 15);

    // readBook(&myBook, 15);
    // readBook(&myBook, 25);

    // printBook(book);
    // printBook(myBook);

    //-----------------------------------------------------------------------------

    // Book books[100], *topPage;

    // books[0].page = 100;
    // sprintf(books[0].title, "The Animal Farm 1");
    // books[1].page = 111;
    // sprintf(books[1].title, "The Animal Farm 2");
    // books[2].page = 222;
    // sprintf(books[2].title, "The Animal Farm 3");
    // for(int i = 0;i < 4; i++) {
    //     books[i].readPage = 0;
    // }

    // findTopPage(books, 4, &topPage);
    // printBook(*topPage);
    Node *startPtr;
    startPtr = NULL;

    addFirst(&startPtr, 24);
    addFirst(&startPtr, 36);
    addFirst(&startPtr, 18);

    //add last

    addLast(&startPtr, 1);
    addLast(&startPtr, 52);
    addLast(&startPtr, 63);

    //delete()
    int value = 18;
    
    delete(&startPtr, 18);
    delete(&startPtr, 5);
    delete(&startPtr, 52);

    printList(startPtr);

    return 0;
}