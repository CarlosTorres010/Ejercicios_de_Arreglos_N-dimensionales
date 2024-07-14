/*
7.
Rotacion de una Imagen Representada por una Matriz
Escriba un programa que rote una matriz
de 4x4, representando una imagen, 90 grados en sentido horario.
*/
#include <iostream>
using namespace std;
void rotateImage90(int matriz[4][4]) {
    for (int y = 0; y < 4 / 2; ++y) {
        int f = y;
        int lt = 4 - 1 - y;
        for (int i = f; i < lt; ++i) {
            int set = i - f;
            int top = matriz[f][i];
            matriz[f][i] = matriz[lt - set][f];
            matriz[lt - set][f] = matriz[lt][lt - set];
            matriz[lt][lt - set] = matriz[i][lt];
            matriz[i][lt] = top;
        }
    }
}

void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int image[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Imagen original: " << endl;
    imprimirMatriz(image);
    rotateImage90(image);
    cout << "\nLa imagen rotada 90 grados en sentido horario:" <<endl;
    imprimirMatriz(image);

    return 0;
}
