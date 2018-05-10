#include <stdio.h>
#include <stdlib.h>

struct Empleado{
	char nombre[30];
	int salario;
	int n_empleados[100];
}empleados[100],*pempleados= &empleados[100];

void pedirdatos();

int main(){
	
	pedirdatos();
    system("pause");	
	return 0;
}
void pedirdatos(){

int n_empleados=100, mayor=0, menor=999999,posM,posm;
	
	printf("digite el numero de empleados:\n");
	scanf("%d",&n_empleados);
	
	for(int i=0;i<n_empleados;i++){
		
		fflush(stdin);
		printf("nombre:\n");
		fgets(pempleados->nombre,30,stdin);
	
		printf("digite su salario:\n");
		scanf("%d",&pempleados->salario);
		if(pempleados[i].salario > mayor){
			mayor = pempleados[i].salario;
			posM = i;
		}
		//Empleado con menor salario
		if(pempleados[i].salario < menor){
			menor  = pempleados[i].salario;
			posm = i;
		}		
	}
	printf("\nel empleado con mayor salario es:\n");
	printf("nombre: %s \n",pempleados[posM].nombre);
	printf("salario: %d \n",pempleados[posM].salario);
	
	printf("\n");
	
	printf("\nEmpleado con menor salario: \n");
	printf("Nombre: %s \n",pempleados[posm].nombre);
	printf("Salario: %d \n ",pempleados[posm].salario);	
}
