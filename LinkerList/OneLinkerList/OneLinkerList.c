#define MAX(a, b) ((a) > (b) ? (a) : (b))
#include <malloc.h>
#include "OneLinkerList.h"

typedef struct MyLinkedNode {
    int val;
    struct MyLinkedNode *next;
} MyLinkedNode;

typedef struct {
    int size;
    struct MyLinkedNode *node;
} MyLinkedList;


MyLinkedNode* myLinkedNodeCrate(int val){
    MyLinkedNode * node = (MyLinkedNode *)malloc(sizeof(MyLinkedNode));
    node->val = val;
    node->next = NULL;
    return node;
}

MyLinkedList* myLinkedListCreate() {
    MyLinkedList * linkedList = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    linkedList->size = 0;
    linkedList->node = myLinkedNodeCrate(0);
    return linkedList;
}



int myLinkedListGet(MyLinkedList* obj, int index) {
    if (index < 0 || index >= obj->size) {
        return -1;
    }
    MyLinkedNode *node = obj->node;
    for (int i = 0; i <= index; i++) {
        node = node->next;
    }
    return node->val;
}


void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if (index > obj->size) {
        return ;
    }
    obj->size++;
    index = MAX(0, index);
    MyLinkedNode* node = obj->node;
    for (int i = 0; i < index; i++) {
         node = node->next;
    }
    MyLinkedNode* newNode = myLinkedNodeCrate(val);
    newNode->next = node->next;
    node->next = newNode;
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
    obj->size--;
    MyLinkedNode *pred = obj->node;
    for (int i = 0; i < index; i++) {
        pred = pred->next;
    }
    MyLinkedNode *p = pred->next;
    pred->next = pred->next->next;
    free(p);
}

void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedNode *cur = NULL, *tmp = NULL;
    for (cur = obj->node; cur;) {
        tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    free(obj);
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);

 * myLinkedListAddAtHead(obj, val);

 * myLinkedListAddAtTail(obj, val);

 * myLinkedListAddAtIndex(obj, index, val);

 * myLinkedListDeleteAtIndex(obj, index);

 * myLinkedListFree(obj);
*/