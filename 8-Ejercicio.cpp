/*
8.
Espiral Matriz.
Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5
en orden espiral. El recorrido debe comenzar en la esquina superior izquierda de la matriz y avanzar
en sentido horario, imprimiendo los elementos en el orden en que se encuentran siguiendo un camino
espiral.
*/
#include<iostream>
using namespace std;

void espiralenOrden (int matriz[5][5]){
	int a = 0, b = 5 - 1; 
    int c = 0, d = 5 - 1; 

    while (a <= b && c <= d) {
        for (int i = c; i <= d; ++i) {
            cout << matriz[a][i] << " ";
        }
        a++; 

        for (int i = a; i <= b; ++i) {
            cout << matriz[i][d] << " ";
        }
        d--; 
        if (a <= b) {
            for (int i = d; i >= c; --i) {
                cout << matriz[b][i] << " ";
            }
            b--; 
        }

        if (c <= d) {
            for (int i = b; i >= a; --i) {
                cout << matriz[i][c] << " ";
            }
            c++; 
        }
    }
}

int main(){
	int matriz[5][5]={
		{1,  2,  3,  4,  5},
		{6,  7,  8,  9,  10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	cout << "Recorrido en espiral de la matriz:" << endl;
    espiralenOrden(matriz);
	return 0;
}
