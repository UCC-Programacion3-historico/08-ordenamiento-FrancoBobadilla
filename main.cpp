#include <iostream>
#include <fstream>
#include <string>
#include "BubbleSort.cpp"
#include "QuickSort.cpp"
#include "ShellSort.cpp"
#include "InterSort.cpp"

using namespace std;

int main() {
    /*string line;
    string *palabras = new string[2014323]();
    ifstream miArchivo("dic.txt");
    unsigned long indice = 0;

    if (miArchivo.is_open()) {
        while (getline(miArchivo, line)) {
            palabras[indice] = line;
            indice++;
        }

        bubbleSort<string>(palabras, indice - 1);

        for (unsigned long i = 0; i < indice; i++)
            cout << palabras[i] << endl;

    } else
        cout << "No se pudo leer el archivo.";
    return 0;*/
    int n = 10;
    int arreglo[n];
    arreglo[0] = 4;
    arreglo[1] = 7;
    arreglo[2] = 2;
    arreglo[3] = 8;
    arreglo[4] = 1;
    arreglo[5] = 3;
    arreglo[6] = 9;
    arreglo[7] = 5;
    arreglo[8] = 0;
    arreglo[9] = 6;
    /**/
    for (int i = 0; i < n; ++i)cout << endl << arreglo[i];
    //bubbleSort(arreglo,n);
    interSort(arreglo,n);
    //shellSort(arreglo,n);
    //quickSort<int>(arreglo, 0, n - 1);
    cout << endl;
    for (int i = 0; i < n; ++i)cout << endl << arreglo[i];
}