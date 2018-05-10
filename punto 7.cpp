#include<stdlib.h>
#include<stdio.h>
#include<string.h>


//Prototipo de Función
void pedirDatos();
int contarVocales(char *);

char nombreUsuario[30];

int main(){
	pedirDatos();
	printf("\nNumero de vocales en el nombre: %d\n",contarVocales(nombreUsuario));	
	
	system("pause");
	return 0;
}

void pedirDatos(){
	printf("Digite su nombre:\n ");
fgets(nombreUsuario,30,stdin);
	
	strupr(nombreUsuario); 
}

int contarVocales(char *nombre){
	int cont = 0;
	
	while(*nombre){ 
		switch(*nombre){
			case 'A': 
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	
	return cont;
}
