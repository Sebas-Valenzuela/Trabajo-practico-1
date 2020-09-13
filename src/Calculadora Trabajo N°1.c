/*
 ============================================================================
 Name        : Calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Calculadora Biblioteca.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int respuesta;
	float numero1;
	float numero2;
	float resultado;
	int resultadoFactorial1;
	int resultadoFactorial2;

	do
	{
			respuesta = utn_getNumero(&opcion,"Seleccione una Operacion: \n1=+\n2=-\n3=*\n4=/\n5=!factorial\n6=salir\n","Error seleccione una opcion valida\n",1,6,2);
			printf("Operacion: %d\n",opcion);
			utn_getNumeroFloat(&numero1,"Ingrese un numero","Error Ingrese un Numero",-10000,10000,2);
			printf("Primera numero ingresado= %.2f\n",numero1);
			utn_getNumeroFloat(&numero2,"Ingrese un numero","Error Ingrese un Numero",-10000,10000,2);
			printf("Segundo numero ingresado= %.2f\n",numero2);

			if(respuesta == 0)
			{
				switch (opcion)
				{
				case 1:
					suma(&resultado,numero1,numero2);
					printf("El Resultado es: %.2f\n",resultado);
					break;
				case 2:
					resta(&resultado,numero1,numero2);
					printf("El Resultado es: %.2f\n",resultado);
					break;
				case 3:
					multiplicacion(&resultado,numero1,numero2);
					printf("El Resultado es: %.2f\n",resultado);
					break;
				case 4:
					division(&resultado,numero1,numero2,"No se puede dividir por 0\n");
					if(division==0)
						{
						printf("El Resultado es: %.2f\n",resultado);
						}
					break;
				case 5:
					factorial(&resultadoFactorial1,&resultadoFactorial2,numero1,numero2,"Ingrese un numero mayor a 1 \n");
					printf("El Resultado del Factoreo del N°1: %d\n",resultadoFactorial1);
					printf("El Resultado del Factoreo del N°2: %d\n",resultadoFactorial2);
					break;
				}
			}
		}while(opcion != 6);

	return EXIT_SUCCESS;
}


