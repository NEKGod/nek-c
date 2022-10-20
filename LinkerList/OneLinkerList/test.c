#include <stdio.h>
#include "OneLinkerList.c"

int main()
{
    MyLinkedList * linked = myLinkedListCreate();
    for (int i = 0; i <= 10; i++){
        myLinkedListAddAtIndex(linked, i, i);
    }
    for (int i = 0; i <= linked->size;i++) {
        printf("%d \r\n", myLinkedListGet(linked, i));
        if (i == 7) {
            myLinkedListDeleteAtIndex(linked, 2);
        }
    }
    for (int i = 0; i <= linked->size;i++) {
        printf("%d \r\n", myLinkedListGet(linked, i));
    }
    return 0;
}