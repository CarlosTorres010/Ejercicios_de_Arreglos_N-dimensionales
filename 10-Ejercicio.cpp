/*
10.
Generador de Tablero de Buscaminas.
 Desarrolla un programa que genere un tablero inicial para
el juego de Buscaminas en una cuadrícula de 10x10. El programa debe:
a) Crear aleatoriamente un tablero donde cada celda puede contener una mina (1) o estar vacía (0).
b) Para cada celda, calcular y mostrar el número de minas en las ocho celdas adyacentes (no se
cuenta la celda misma).
c) Mostrar el tablero original con las minas y el tablero con los números lado a lado.
Nota: Recuerda que en Buscaminas, el número en una celda indica cuántas minas hay alrededor, no
incluyendo la propia celda. 
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	int matriz[10][10];
	int ubicacion[10][10];
	srand(time(0));
	int minas;
	cout<<"segun la matriz donde los 1 son las minas: "<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			matriz[i][j]= rand() % 2 ;
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"la cantidad de minas que hay alrededor, sin contar la propia celda: "<<endl;
	for(int m=0;m<10;m++){
		for(int n=0;n<10;n++){
			int cont=0;
			for(int a=-1;a<2;a++){
				for(int b=-1;b<2;b++){
					if(matriz[m+a][n+b]==1 and m+a!=-1 and n+b!=-1 and m+a!=10 and n+b!=10){
					    if(a==0 and b==0){
						    cont--;
					    }
					    cont++;
					}
				}
			}
			ubicacion[m][n]=cont;
			cout<<ubicacion[m][n]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
