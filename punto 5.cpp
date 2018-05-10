#include <stdio.h>
#include <stdlib.h>


struct Promedio{
	float nota1;
	float nota2;
	float nota3;
}promedios,*pPromedios = &promedios;

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumnos[100],*pAlumnos = alumnos;

void creardatos();

int main(){

	creardatos();	
	system("pause");
	return 0;
}
void creardatos(){
	int n_alumnos,posM=0;
	float promedio_alumno[100],mayor=0;
	
	printf("Digite el numero de alumnos: ");
	scanf("%d",&n_alumnos);
	
	for(int i=0;i<n_alumnos;i++){
		fflush(stdin);
		printf("Nombre: "); 
		fgets(pAlumnos[i].nombre,20,stdin);
		printf("Sexo: "); 
		fgets(pAlumnos[i].sexo,10,stdin);
		printf("Edad: "); 
		scanf("%d",&pAlumnos[i].edad);
	
		printf(".:Notas del Examen:.\n");
		printf("Nota1: "); 
		scanf("%f",&pAlumnos[i].prom.nota1);
		printf("Nota2: ");
		scanf("%f",&pAlumnos[i].prom.nota2);
		printf("Nota3: "); 
		scanf("%f",&pAlumnos[i].prom.nota3);
	
		//Sacando el promedio del alumno
		promedio_alumno[i] = (pAlumnos[i].prom.nota1+pAlumnos[i].prom.nota2+pAlumnos[i].prom.nota3)/3;
		
		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			posM = i;
		}
		printf("\n");
	}

	printf("\n\nMostrando Datos del alumno con mejor Promedio \n");
	printf("Nombre: %s \n",pAlumnos[posM].nombre);
	printf("Sexo: %s \n",pAlumnos[posM].sexo);
	printf("Edad: %d \n",pAlumnos[posM].edad);
	printf("Promedio: %.2f\n",promedio_alumno[posM]);	
}
