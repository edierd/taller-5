#include <stdio.h>
#include <stdlib.h>


struct Promedio{
	float nota1;
	float nota2;
	float nota3;
}promedios,*pPromedios=&promedios;

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alumnos,*pAlumnos=&alumnos;

void pedirdatos();
int main(){
	
	pedirdatos();
	
	system("pause");
	return 0;
}

void pedirdatos(){
float promedio_alumno;
	
	printf("Nombre: "); 
	fgets(pAlumnos->nombre,20,stdin);
	printf("Sexo: "); 
	fgets(pAlumnos->sexo,10,stdin);
	printf("Edad: "); 
	scanf("%d",&pAlumnos->edad);
	printf(".:Notas del Examen:.\n");
	printf("Nota1: "); 
	scanf("%f",&pAlumnos->prom.nota1);
	printf("Nota2: "); 
	scanf("%f",&pAlumnos->prom.nota2);
	printf("Nota3: ");
	 scanf("%f",&pAlumnos->prom.nota3);
	
	//Sacando el promedio del alumno
	promedio_alumno = (pAlumnos->prom.nota1+pAlumnos->prom.nota2+pAlumnos->prom.nota3)/3;
	
	
	printf("\n\nMostrando Datos\n");
	printf("Nombre:%s\n ",pAlumnos->nombre);
	printf("Sexo: %s\n",pAlumnos->sexo);
	printf("Edad: %d\n",pAlumnos->edad);
	printf("Promedio: %.2f \n",promedio_alumno);	
}
