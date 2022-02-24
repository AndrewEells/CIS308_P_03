//
// Created by Andrew Eells on 2/24/22.
//

#include "linkedlist.h"
#include <stdlib.h>;

void Push(Node ** headRef, int newData) {
    // 1. Create new node
    Node * node = malloc(sizeof(Node));
    node->data = newData;

    // 2. Set next to point to current head.
    node->next = *headRef;

    // 3. Change head to point to new node.
    **headRef = *node;

};

int Pop(Node ** headRef) {


};

int Count(Node * head, int searchFor) {

};