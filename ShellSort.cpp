#include "ShellSort.h"
#include <iostream>
#include <math.h>

using namespace std;

template<class T>
void shellSort(T *vect, unsigned long tamanio) {
    unsigned long incr = tamanio;
    while (incr >= 2) {
        incr = sqrt(incr);
        for (int i = 0; i < incr; ++i) {
            T comodin;
            bool intercambios = true;
            for (int j = incr; j < tamanio && intercambios; j += incr) {
                intercambios = false;
                for (int k = i; k < tamanio - j; k += incr)
                    if (vect[k] > vect[k + incr]) {
                        intercambios = true;
                        comodin = vect[k];
                        vect[k] = vect[k + incr];
                        vect[k + incr] = comodin;
                    }
            }
        }
    }
}
