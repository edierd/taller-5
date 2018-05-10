#include<stdio.h>
#include<stdlib.h>


struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void comprobarMejorPromedio(Alumno *);

int main(){
	pedirDatos();	
	comprobarMejorPromedio(puntero_alumno);
	
	system("pause");
	return 0;
}

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin); 
		printf("Digite su nombre: ");
		fgets((puntero_alumno+i)->nombre,30,stdin);
		printf("Digite su edad: ");
		scanf("%d",&(puntero_alumno+i)->edad);
		printf("Digite su promedio: ");
		scanf("%f",&(puntero_alumno+i)->promedio);
		printf("\n");
	}
}

void comprobarMejorPromedio(Alumno *puntero_alumno){
	float mayor = 0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mayor){
			mayor = (puntero_alumno+i)->promedio;
			pos = i;
		}
	}
	
	printf("\nAlumno con el mejor promedio:\n ");
	printf("Nombre: %s\n",(puntero_alumno+pos)->nombre);
	printf("Edad:%d\n ",(puntero_alumno+pos)->edad);
	printf("Promedio:%.1f\n ",(puntero_alumno+pos)->promedio);	
}
