#include <stdio.h>
#include <stdlib.h>


//------------------------
//Structs, Etc.
//------------------------
typedef struct node {
    int data;
    struct node *next;
} Node;


//------------------------
//Pre-declaring Signatures
//------------------------
Node * createStartQueue(void);

void printQueue(Node* l);

int Length(Node* head);

void Enqueue(Node * head, int d);


//------------------------
//Main Function
//------------------------
int main() {


    printf("Called main.\n");
    Node * head = createStartQueue();
    printf("This is the value for the first node: %d");
    printQueue(head);




};




//------------------------
//Other Functions
//------------------------
Node * createStartQueue(void) {
    printf("Called createStartQueue");
    Node *starter = malloc(sizeof (Node));
    Enqueue(starter,5);
    Enqueue(starter,7);
    Enqueue(starter,9);


    return starter;
};

void printQueue(Node* l) {
    printf("Called printQueue. \n");
    Node * np;
    for (np = l; np != NULL; np = np->next) {
        printf("%d\n", np->data);
    }

};

int Length(Node* head) {
    int Count;
    Node *np;
    for (np = head; np != NULL; np = np->next) {
        Count++;
    };

    return Count;

}

void Enqueue(Node *head, int d) {
    Node *temp = malloc(sizeof (Node));
    temp->data = d;
    Node *np;
    for (np = head; np != NULL; np = np->next) {
        if (np->next == NULL) {
            np->next = temp;
        }
    }

    free(temp);
};