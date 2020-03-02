// Source: https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/c
#include "DeleteNth.h"

char canAddMore(size_t szin, int* array, int elem, int max_e);


int* delete_nth(size_t szin, int order[], int max_e, size_t* szout) {
    int* newList = (int*)malloc(sizeof(int) * szin);
    int newListSize = 0;

    for (int i = 0; i < szin; i++) {
        if (canAddMore(newListSize, newList, order[i], max_e) == 't') {
            newList[newListSize++] = order[i];
        }
    }

    *szout = newListSize;
    return newList;
}

char canAddMore(size_t szin, int* array, int elem, int max_e) {
    int count = 0;
    int index = 0;
    if (szin == 0) {
        return 't';
    }
    do {
        if (array[index] == elem) {
            count++;
        }
        if (count >= max_e) {
            return 'f';
        }
    } while (++index < szin);
    return 't';
}
