#include "ShellSort.h"

template<class T>
void shellSort(T *vect, unsigned long tamanio) {
    for (int i = 2; i < tamanio; ++i) {
        unsigned long incremento = tamanio / i;
        for (int j = 0; j < i; ++j) {
            T comodin;
            bool intercambios = true;
            for (int k = 0; k < j && intercambios; ++k) {
                intercambios = false;
                for (int l = 0; l <= j - k; ++l)
                    if (vect[l] > vect[l + incremento]) {
                        intercambios = true;
                        comodin = vect[l];
                        vect[l] = vect[l + incremento];
                        vect[l + incremento] = comodin;
                    }
            }
        }
    }
}
