#include<stdio.h>//E/S
int numero1;
int numero2;
int numero3;
int main()
{
    printf("ingresa el primer valor valor\n"); 
	printf("ingresa el segundo valor valor\n");
	printf("ingresa el tercer valor valor\n");
	scanf("%d",&numero1);
	scanf("%d",&numero2);
	scanf("%d",&numero3);
	if(numero1>numero2 && numero1>numero3)
	{
		printf("el mayor es:%d\n",numero1);
		if(numero1>numero2 &&numero2>numero3)
		{
			printf("la media es:%d\n",numero2);
			printf("el menor es:%d\n",numero3);
		}
		else
		{
		if(numero1>numero3 && numero3>numero2)
		{
			printf("la media es:%d\n",numero3);
			printf("el menor es:%d\n",numero2);
		}	
		}
	}
	else
	{
			if(numero1<numero2 && numero2>numero3)
	{
		printf("el mayor es:%d\n",numero2);
		if(numero1<numero2 && numero1>numero3)
		{
			printf("la media es:%d\n",numero1);
			printf("el menor es:%d\n",numero3);
		}
		else
		{
		if(numero2>numero3 && numero3>numero1)
		{
			printf("la media es:%d\n",numero3);
			printf("el menor es:%d\n",numero1);
		}	
		}
	}
    else
	{
	    if(numero2<numero3 && numero3>numero1)
	{
		printf("el mayor es:%d\n",numero3);
		if(numero1<numero3 && numero1>numero2)
		{
			printf("la media es:%d\n",numero1);
			printf("el menor es:%d\n",numero2);
		}
		else
		{
		if(numero3>numero2 && numero2>numero1)
		{
			printf("la media es:%d\n",numero2);
			printf("el menor es:%d\n",numero1);
		}	
		}
		}
	}
}
}
