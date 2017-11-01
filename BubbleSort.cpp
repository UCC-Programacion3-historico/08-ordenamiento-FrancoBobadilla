#include "BubbleSort.h"

template<class T>
void bubbleSort(T *vect, unsigned long tamanio) {
    bool intercambios = true;
    T comodin;
    for (int i = 0; i < tamanio && intercambios; ++i) {
        intercambios = false;
        for (int j = 0; j <= tamanio - i; ++j)
            if (vect[j] > vect[j + 1]) {
                intercambios = true;
                comodin = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = comodin;
            }
    }
}
