/*
3.
Suma de Diagonales
Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado
*/
#include <iostream>
using namespace std;

void sumarDiagonales(int matriz[4][4]) {
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < 4; i++) {
        sumaDiagonalPrincipal += matriz[i][i]; 
        sumaDiagonalSecundaria += matriz[i][4 - 1 - i]; 
    }
	cout << "Suma de la diagonal principal: " << sumaDiagonalPrincipal << endl;
    cout << "Suma de la diagonal secundaria: " << sumaDiagonalSecundaria << endl;
} 
int main() {
    int matriz[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};

    cout << "Matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    sumarDiagonales(matriz);

    return 0;
}

