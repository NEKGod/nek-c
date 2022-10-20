#include <malloc.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct DLinkListNode {
    int val;
    struct DLinkListNode *prev, *next;
} DLinkListNode;

typedef struct {
    struct DLinkListNode *head, *tail;
    int size;
} MyLinkedList;

DLinkListNode *dLinkListNodeCreat(int val) {
    DLinkListNode * node = (DLinkListNode *)malloc(sizeof(struct DLinkListNode));
    node->val = val;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

MyLinkedList* myLinkedListCreate() {
    MyLinkedList * obj = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    obj->size = 0;
    obj->head = dLinkListNodeCreat(0);
    obj->tail = dLinkListNodeCreat(0);
    obj->head->next = obj->tail;
    obj->tail->prev = obj->head;
    return obj;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    if (index < 0 || index >= obj->size) {
        return -1;
    }
    DLinkListNode *curr;
    if (index + 1 < obj->size - index) {
        curr = obj->head;
        for (int i = 0; i <= index; i++) {
            curr = curr->next;
        }
    } else {
        curr = obj->tail;
        for (int i = 0; i < obj->size - index; i++) {
            curr = curr->prev;
        }
    }
    return curr->val;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if (index > obj->size) {
        return;
    }
    index = MAX(0, index);
    DLinkListNode *pred, *succ;
    if (index < obj->size - index) {
        pred = obj->head;
        for (int i = 0; i < index; i++) {
            pred = pred->next;
        }
        succ = pred->next;
    } else {
        succ = obj->tail;
        for (int i = 0; i < obj->size - index; i++) {
            succ = succ->prev;
        }
        pred = succ->prev;
    }
    obj->size++;
    DLinkListNode *toAdd = dLinkListNodeCreat(val);
    toAdd->prev = pred;
    toAdd->next = succ;
    pred->next = toAdd;
    succ->prev = toAdd;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    myLinkedListAddAtIndex(obj, 0, val);
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    myLinkedListAddAtIndex(obj, obj->size, val);
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if (index < 0 || index >= obj->size) {
        return;
    }
    DLinkListNode *pred, *succ;
    if (index < obj->size - index) {
        pred = obj->head;
        for (int i = 0; i < index; i++) {
            pred = pred->next;
        }
        succ = pred->next->next;
    } else {
        succ = obj->tail;
        for (int i = 0; i < obj->size - index - 1; i++) {
            succ = succ->prev;
        }
        pred = succ->prev->prev;
    }
    obj->size--;
    DLinkListNode *p = pred->next;
    pred->next = succ;
    succ->prev = pred;
    free(p);
}

void myLinkedListFree(MyLinkedList* obj) {
    struct DLinkListNode *cur = NULL, *tmp = NULL;
    for (cur = obj->head; cur;) {
        tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    free(obj);
}