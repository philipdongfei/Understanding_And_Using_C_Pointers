#include <stdlib.h>
#include "link.h"

typedef struct _node {
    Data* data;
    struct _node* next;
} Node;

struct _linkedList {
    Node* head;
};

LinkedList* getLinkedListInstance() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    return list;
}

void removeLinkedListInstance(LinkedList* list){
    Node *tmp = list->head;
    while (tmp != NULL){
        free(tmp->data); // Potential memory leak
        Node *current = tmp;
        tmp = tmp->next;
        free(current);
    }
    free(list);
}

void addNode(LinkedList* list, Data data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    if (list->head == NULL){
        list->head = node;
        node->next = NULL;
    } else {
        node->next = list->head;
        list->head = node;
    }
}

Data removeNode(LinkedList* list){
    if (list->head == NULL){
        return NULL;
    } else {
        Node* tmp = list->head;
        Data* data;
        list->head = list->head->next;
        data = tmp->data;
        free(tmp);
        return data;
    }
}

