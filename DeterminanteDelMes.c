#include<stdio.h>/*Liber�a de E/S
Determina el mes
*/
int Mes;
int main ()
{//Inicio 
printf ("Dame el n�mero");
scanf ("%d" ,&Mes);
	switch (Mes) {
		case 1: {
			printf("Enero");
			break;
}
		case 2: {
			printf("Febrero");
			break;
		}
	
		case 3: {
			printf("Marzo"); 
			break;
		}
			
		case 4: {
			printf("Abril");
			break;
		}
		case 5: {
			printf("Mayo");
			break;
		}
	
		case 6: {
			printf("Junio"); 
			break;
		}
	
		case 7: {
			printf("Julio"); 
			break;
		}
			
		case 8: {
			printf("Agosto"); 
	 		break;
	 	}
	 		
		case 9: {
			printf("Septiembre"); 
			break;
		}
			
		case 10: {
			printf("Octubre"); 
			break;
		}
	
		case 11: {
			printf("Noviembre"); 
			break;
		}
		case 12: {
		
		
			printf("Diciembre"); 
			break;
		
		}
		case 13: {
			printf ("No hay m�s"); 
			break;
			}
		}
}//Fin 
