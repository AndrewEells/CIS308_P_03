//
// Created by Andrew Eells on 2/24/22.
//


#ifndef EELLSA_P02_LINKEDLIST_H
#define EELLSA_P02_LINKEDLIST_H

#endif //EELLSA_P02_LINKEDLIST_H


//
// HOUSES ALL FUNCTION AND STRUCT PROTOTYPES



typedef struct node {
    int data;
    struct node* next;
} Node;

void Push(Node** headRef, int newData);

int Pop(Node** headRef);

int Count(Node* head, int searchFor);