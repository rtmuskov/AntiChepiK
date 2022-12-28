#include "process4.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct List {
    Node *head;
} List;

void process44(List *list) {
    if (!list) return;

    if (!(list->head)) return;

    Node *last = list->head;

    while (last->next) {
        last = last->next;
    }

    while (list->head && list->head->data == last->data) {
        list->head = list->head->next;
    }

    if(!(list->head)) return;

    Node *head = list->head;
    Node *curr = head;
    Node *n = head->next;

    while (n && n != last) {
        if (curr->data == last->data) {
            head->next = n;
            curr = n;
            n = curr->next;
        } else {
            head = curr;
            curr = n;
            n = curr->next;
        }
    }
    if (curr->data == last->data) {head->next = NULL;}
    curr->next = NULL;
}
void process4(){
    List *ls = (List*) malloc(sizeof(List));
    ls->head = (Node*) malloc (sizeof(Node));
    Node *base = ls->head;
    base->data = rand() % 10;
    base->next = (Node*) malloc(sizeof(Node));
    int num = rand() % 10 + 2;
    for (int i = 0; i < num; i++) {
        base = base->next;
        base->data = rand() % 10;
        base->next = (Node*) malloc(sizeof(Node));
    }
    base->next = NULL;
    process44(ls);
}