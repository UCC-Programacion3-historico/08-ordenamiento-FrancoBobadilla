#include "BubbleSort.h"

template<class T>
void bubbleSort(T *vect, unsigned long tamanio) {
    T comodin;
    bool intercambios = true;
    for (int i = 1; i < tamanio && intercambios; ++i) {
        intercambios = false;
        for (int j = 0; j < tamanio - i; ++j)
            if (vect[j] > vect[j + 1]) {
                intercambios = true;
                comodin = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = comodin;
            }
    }
}
