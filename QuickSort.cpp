#include "QuickSort.h"

template<class T>
void quickSort(T *vect, unsigned long inicio, unsigned long fin) {
    if (fin>inicio) {
        unsigned long abajo = inicio;
        unsigned long arriba = fin;
        while (abajo < arriba) {
            while (abajo <= fin && vect[abajo] <= vect[inicio])
                abajo++;
            while (arriba > inicio && vect[arriba] > vect[inicio])
                arriba--;
            if (abajo < arriba) {
                T tmp = vect[abajo];
                vect[abajo] = vect[arriba];
                vect[arriba] = tmp;
            }
        }
        T tmp = vect[inicio];
        vect[inicio] = vect[arriba];
        vect[arriba] = tmp;
        quickSort(vect, inicio, arriba - 1);
        quickSort(vect, arriba + 1, fin);
    }
}
