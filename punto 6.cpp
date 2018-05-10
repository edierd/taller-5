#include<stdio.h>
#include<stdlib.h>

void pedirDatos();
void busqueda(int*,int);

int nElementos[100], *PnElementos = nElementos;
int cantidad;

int main(){
	pedirDatos();
	busqueda(PnElementos,cantidad);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	printf("Ingrese la cantidad de elementos del vector\n");
	scanf("%d",&cantidad);
	
	for(int i=0;i<cantidad;i++){
		printf("Digite un numero: "); 
		scanf("%d",&*(PnElementos+i));
	}
}
 
void busqueda(int *PnElementos, int cantidad){
	int dato, cont=0;
	printf("Ingrese dato a buscar ");
	scanf("%d",&dato);
	
	for(int i=0; i<cantidad; i++){
		if(*(PnElementos+i)==dato){
			printf("Numero encontrado \n");
			cont++;
		}
	}
	if(cont==0){
		printf("Numero no encontrado\n");
	}
}
