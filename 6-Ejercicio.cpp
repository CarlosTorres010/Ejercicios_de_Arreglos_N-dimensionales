/*
6. 
Reflejar una Imagen 
Implemente un programa que refleje horizontalmente una imagen
representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para
obtener la imagen reflejada.
*/
#include <iostream>
using namespace std;

void reflecjarHorizontal(int matriz[6][6]) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6 / 2; ++j) {
            int reflec = matriz[i][j];
            matriz[i][j] = matriz[i][6 - 1 - j];
            matriz[i][6 - 1 - j] = reflec;
        }
    }
}

void imprimirMatriz(int matriz[6][6]) {
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int image[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    cout << "Imagen original:" << endl;
    imprimirMatriz(image);
    reflecjarHorizontal(image);
    cout << "\nImagen reflejada horizontalmente:" <<endl;
    imprimirMatriz(image);
    return 0;
}
