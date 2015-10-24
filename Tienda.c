

#include<stdio.h>//libreria de E/S
/*Tienda don Pepe*/
int N1;
int total;
int main()
{// inicio
printf("Tienda\n");
printf("(1)chetos $10\n(2)jugo $8\n(3)paletas $3\n(4)chicles $1\n(5)Leche $12\n(6)sandwich $15\n(7)galletas $8\n(8)donitas $5\n(9)helado $14\n(10)comida $30\n");
printf("Escribe el numero del producto que desea\n");
scanf("%d",&N1);

switch (N1)
{

	case 1: {
		printf("¿cuantos chetos quieres?\n");
		scanf("%d",&N1);
		total=N1*10;
		printf("total:%d",total);
		break;
	}
	case 2: {
		printf("¿cuantos jugos quieres?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 3: {
		printf ("¿cuantas paletas quiere?\n");
		scanf("%d",&N1);
		total=N1*3;
		printf ("total:%d",total);
		break;
	}
	case 4:{
		printf ("¿cuantos chicles quiere?\n");
		scanf("%d",&N1);
		total=N1*1;
		printf("total:%d",total);
		break;
	}
	case 5:{
		printf("¿cuantas leches quieres?\n");
		scanf("%d",&N1);
		total=N1*12;
		printf ("total:%d",total);
		break;
	}
	case 6:{
		printf("cuantas sandwich quiere\n");
		scanf("%d",&N1);
		total=N1*15;
		printf("total:%d",total);
		break;
	}
	case 7:{
		printf("¿cuantas galletas quiere?\n");
		scanf("%d",&N1);
		total=N1*8;
		printf("total:%d",total);
		break;
	}
	case 8:{
		printf("¿cuantas donitas quiere?\n");
		scanf("%d",&N1);
		total=N1*5;
		printf("total:%d",total);
		break;
	}
	case 9:{
		printf("¿cuantos helados quieres?\n");
		scanf("%d",&N1);
		total=N1*14;
		printf("total:%d",total);
		break;
	}
	case 10:{
		printf("¿cuantas comidas quieres?\n");
		scanf("%d",&N1);
		total=N1*30;
		printf("total:%d",total);
		break;
	}
	defaul:{
	printf("no hay");
		break;	
}
}
}//fin

