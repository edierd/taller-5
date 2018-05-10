#include<stdio.h>
#include<stdlib.h>


void pedirDatos();
void mostrarMatriz(int **,int,int);

int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	system("pause");
	return 0;
}

void pedirDatos(){
	printf("Digite el numero de filas: ");
	scanf("%d",&nFilas);
	printf("Digite el numero de columnas: ");
	scanf("%d",&nCol);
	
	puntero_matriz = new int*[nFilas]; 
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nCol]; 
	}
	
	printf("\nDigitando datos para la matriz: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("Digite un numero[i][j]: ");
			scanf("%d",&*(*(puntero_matriz+i)+j));
		}
	}	
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	printf("\nMostrando matriz Original: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			printf("%d\n",*(*(puntero_matriz+i)+j)); 
		}
		
	}
	
	printf("\nMostrando matriz Transpuesta: \n");
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
		printf(	"%d\n",*(*(puntero_matriz+j)+i)); 
		}
	
	}
}
