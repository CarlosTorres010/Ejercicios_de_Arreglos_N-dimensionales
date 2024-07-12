/*
2.
Buscar un Valor en una Matriz 
Escriba un programa que busque un valor específico en una matriz de 3x3 y devuelva 
todas las posiciones donde se encuentra, indicando la fila y la columna de cada
ocurrencia.
*/
#include <iostream>
using namespace std;

void buscarValores(int matriz[3][3], int valor) {
    bool encontrado = false;
    cout << "El valor " << valor << " se encuentra en:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == valor) {
                encontrado = true;
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }
    if (!encontrado) {
        cout << "El valor " << valor << " no se encuentra en la matriz." << endl;
    }
}

int main() {
    int matriz[3][3] = {{1, 2, 3},
                        {4, 3, 6},
                        {3, 8, 9}};
    
    int encontrarValor = 3;

    cout << "Matriz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    buscarValores(matriz, encontrarValor);

    return 0;
}

