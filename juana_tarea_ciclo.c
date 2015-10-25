#include<stdio.h>
int enteros;
int i=0;
int numero=0;
int main()
{
	printf("programa que sume un numero entero y los menores a el\n");
	printf("escoge un numero\n");
	scanf("%d",&enteros);
	while(i<enteros+1)
	{
		numero=numero+i;
		i=i+1;
	}
	printf("el resultado es:%d",numero);
}

