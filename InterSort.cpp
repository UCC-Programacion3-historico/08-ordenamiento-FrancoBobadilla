#include "InterSort.h"

template<class T>
void interSort(T *vect, unsigned long tamanio) {
    int incr = 1;
    while (incr < tamanio) {
        incr *= 2;
        for (int i = 0; i < tamanio - 1; i += incr)
            if (incr + i <= tamanio) {
                bool intercambios = true;
                for (int j = 1; j < incr && intercambios; ++j) {
                    intercambios = false;
                    for (int k = i; k < incr - j; ++k)
                        if (vect[k] > vect[k + 1]) {
                            intercambios = true;
                            T comodin = vect[k];
                            vect[k] = vect[k + 1];
                            vect[k + 1] = comodin;
                        }
                }
            } else {
                bool intercambios = true;
                for (int j = 1; j < tamanio - 1 && intercambios; ++j) {
                    intercambios = false;
                    for (int k = i; k < tamanio - i - j; ++k)
                        if (vect[k] > vect[k + 1]) {
                            intercambios = true;
                            T comodin = vect[k];
                            vect[k] = vect[k + 1];
                            vect[k + 1] = comodin;
                        }
                }
            }
    }
}
