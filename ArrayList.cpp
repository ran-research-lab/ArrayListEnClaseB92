//
// Created by student on 02/24/20.
//

#include "ArrayList.h"
#include <cstdlib>

ArrayList::ArrayList() {
    A = new int[4];
    length = 0;
    allocSize = 4;
}

int ArrayList::getSize() const {
    return length;
}

void ArrayList::resize(int newSize) {
    // crear nuevo arreglo
    int *tmp = new int[newSize];

    // copiar valores del viejo alcout << "error.." << endl; nuevo
    int validLength = newSize < length ? newSize : length;
    for (int i = 0; i < validLength; i++)
        tmp[i] = A[i];

    delete [] A;

    // hacer que A apunte al nuevo arreglo
    A = tmp;

    allocSize = newSize;
}

int ArrayList::at(int pos) const {
    if ( pos < 0 || pos >= length) {
        exit(1);
    }
    else {
        return A[pos];
    }
}

void ArrayList::append(int element) {
    if (length == allocSize) resize(allocSize * 2);
    A[length++] = element;
}


