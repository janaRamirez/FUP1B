#include<stdio.h>//libreria de E/S
int N1;
int total;
int main()
{// inicio
printf("Tienda\n");
printf("(1)refrescos $5\n(2)chicles $2\n(3)dulces $2\n(4)papas $7\n(5)paletas $3\n");
printf("Escribe el numero del producto que desea\n");
scanf("%d",&N1);

switch (N1)
{

	case 1: {
		printf("¿cuantos refrescos quieres?\n");
		scanf("%d",&N1);
		total=N1*5;
		printf("total:%d",total);
		break;
	}
	case 2: {
		printf("¿cuantos chicles quieres?\n");
		scanf("%d",&N1);
		total=N1*2;
		printf("total:%d",total);
		break;
	}
	case 3: {
		printf ("¿cuantos dulces quiere?\n");
		scanf("%d",&N1);
		total=N1*2;
		printf ("total:%d",total);
		break;
	}
	case 4:{
		printf ("¿cuantas papas quiere?\n");
		scanf("%d",&N1);
		total=N1*7;
		printf("total:%d",total);
		break;
	}
	case 5:{
		printf("¿cuantas paletas quiere?\n");
		scanf("%d",&N1);
		total=N1*3;
		printf ("total:%d",total);
		break;

	}
	defaul:{
	printf("no hay");
		break;	
}
}
}//fin

