#include<stdio.h>// Libreria de E/S
/*Programa que saca el resultado de una calificacion*/
int calificacion;
int main ()

{
	printf("Ingrese la calificacion");
	scanf("%d",&calificacion);
	
	if (calificacion>=7)

{
	printf("Aprobado");
}
	
	else

{
	printf("Reprobado");
}
	
}



