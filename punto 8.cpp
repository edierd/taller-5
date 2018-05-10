#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void pedirDatos();
void contarVocales(char *);

char palabraUsuario[30];

int main(){
	pedirDatos();
	contarVocales(palabraUsuario);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	printf("Digite una palabra: ");
	fgets(palabraUsuario,30,stdin);
	
	strupr(palabraUsuario); 
}

void contarVocales(char *palabra){
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*palabra){ 
		switch(*palabra){
			case 'A': contA++;break;
			case 'E': contE++;break;
			case 'I': contI++;break;
			case 'O': contO++;break;
			case 'U': contU++;break;
		}
		palabra++;
	}
	
	//Imprimiendo el conteo de cada vocal
	printf("\nNumero de vocales A:%d\n ",contA);
	printf("Numero de vocales E:%d\n ",contE);
	printf("Numero de vocales I:%d\n ",contI);
	printf("Numero de vocales O:%d\n ",contO);
	printf("Numero de vocales U:%d\n ",contU);
}
