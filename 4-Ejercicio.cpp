/*
4.
Intercambiar Filas
Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante.
*/	
#include <iostream>
using namespace std;

void intercambiarFilas(int matriz[4][4], int fila1, int fila2) {
    if (fila1 >= 0 && fila1 < 4 && fila2 >= 0 && fila2 < 4) {
        for (int j = 0; j < 4; j++) {
            int temp = matriz[fila1][j];
            matriz[fila1][j] = matriz[fila2][j];
            matriz[fila2][j] = temp;
        }
    } else {
        cout << "Upps las filas especificadas estan fuera del rango de la matriz." << endl;
    }
}

void mostrarMatriz(int matriz[4][4]) {
    cout << "Matriz resultante:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    
    int filaIntercambiar1 = 0; 
    int filaIntercambiar2 = 3; 

    cout << "La matriz original es:" << endl;
    mostrarMatriz(matriz);
    intercambiarFilas(matriz, filaIntercambiar1, filaIntercambiar2);
	mostrarMatriz(matriz);
	return 0;
}

