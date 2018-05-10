#include <stdio.h>
#include <stdlib.h>

struct Estudiante{
	char nombre[30];
	int edad;
	char grado[30];
	float promedio;
	int notas[10];
	int n,i;
	char opcion[3];
}estudiantes,*pEstudiantes = &estudiantes;

void pedirdatos();

int main(){
	
	pedirdatos();
	system("pause");
	return 0;
}

void pedirdatos(){

do {
        printf("Ingrese nombre del alumno: ");
        fgets(pEstudiantes->nombre,30,stdin);
        printf("ingrese edad: ");
        scanf("%d",&pEstudiantes->edad);
        printf("ingrese el grado:");
        fgets(pEstudiantes->grado,30,stdin);
        printf("Cuantas notas tiene %f? ", pEstudiantes->nombre,30);
        scanf("%d",&pEstudiantes->n);

        for (int i = 0; i < pEstudiantes->n; ++i) {
            printf("  Nota %d: ", i + 1);
            scanf("%d",&pEstudiantes->notas[i]);
        }

        printf("El promedio de %s es %.1f\n", pEstudiantes->nombre,promedio(pEstudiantes->notas, pEstudiantes->n));

        printf("Desea calcular mas promedios (si/no)? ");
        fgets(pEstudiantes->opcion,3,stdin);

    } while (pEstudiantes->opcion[0] == 's' || pEstudiantes->opcion[0] == 'n');	
}
