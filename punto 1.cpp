#include <stdio.h>
#include <stdlib.h>

struct competidor{
	char nombre[30];
	int edad;
	char sexo[30];
	char club[30];
	
}socio,*psocio = &socio;
void creardatos();
void pedirdatos();
void mostrardatos(competidor *);

int main(){
pedirdatos();	
creardatos();
mostrardatos(psocio);	
	system("pause"); 
	return 0;
}
void creardatos(){
	printf("ingrese un nombre: \n");
	fgets(psocio->nombre,30,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&psocio->edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(psocio->sexo,30,stdin);
	printf("ingrese el club:\n");
	fgets(psocio->club,30,stdin);
	
	if(socio.edad>30){
		printf("mayor\n");
	}else if(socio.edad<=15&&socio.edad<=30){
		printf("es infantil\n");
	}
	else{
		printf("es joven\n");
	}	
}
 
void pedirdatos(){
	printf("ingrese un nombre: \n");
	fgets(psocio->nombre,30,stdin);
	printf("ingrese edad: \n");
	scanf("%d",&psocio->edad);
	printf("ingrese sexo:\n");
	fflush(stdin);
	fgets(psocio->sexo,30,stdin);
	printf("ingrese el club:\n");
	fgets(psocio->club,30,stdin);
	
}

void mostrardatos(competidor *psocio){
	printf("su nombre:%s \n",psocio->nombre);
	printf("su edad: %d\n",psocio->edad);
	printf("su sexo:%s\n",psocio->sexo);
	printf("su club:%s\n",psocio->club);
	
}
