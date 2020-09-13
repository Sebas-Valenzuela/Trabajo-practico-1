/*
 * Calculadora Trabajo Biblioteca.c
 *
 *  Created on: 12 sep. 2020
 *      Author: COVID-19
 */

#include <stdio.h>
#include <stdlib.h>

//funcion que sirve para determinar que el numero entero ingresado se manejene entre un maximo y un minimo
// se toma el parametro numerico y los mensajes por puntero
//recibe el numero enero y determina si se tiene un error para imprimir por consula un mensaje mensaje
//si es correcta la operacion da como valor de return 0 si no -1

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	setbuf(stdout,NULL);
	int retorno = -1;
	int bufferInt;

	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%d", &bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}

	return retorno;
}

//funcion que sirve para determinar que el numero decimal ingresado se manejene entre un maximo y un minimo
// se toma el parametro numerico y los mensajes por puntero
//recibe el numero decimal y determina si se tiene un error para imprimir por consula un mensaje mensaje
//si es correcta la operacion da como valor de return 0 si no -1

int utn_getNumeroFloat(float* pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos)
{
	setbuf(stdout,NULL);
	int retorno = -1;
	float bufferFloat;

		if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	do
			{
				printf("%s", mensaje);
				fflush(stdin);
				scanf("%f", &bufferFloat);
				if(bufferFloat >= minimo && bufferFloat <= maximo)
				{
					*pResultado = bufferFloat;
					retorno = 0;
					break;
				}
				else
				{
					printf("%s", mensajeError);
					reintentos--;
				}
			}while(reintentos >= 0);

	return retorno;
}

//funcion que sirve para sumar no tiene restricciones ya que la suma no las tiene
//el resultado lo toma por puntero

int suma(float* pResultado,float operador1,float operador2)
{
	setbuf(stdout,NULL);
	float resultado;
	int retorno = -1;

	resultado=operador1+operador2;
	*pResultado = resultado;
	retorno = 0;

	return retorno;
}

//funcion que sirve para restar no tiene restricciones ya que la resta no las tiene
//el resultado lo toma por puntero

int resta(float* pResultado,float operador1,float operador2)
{
	setbuf(stdout,NULL);
	float resultado;
	int retorno = -1;

	resultado = operador1 - operador2;
	*pResultado = resultado;
	retorno = 0;

	return retorno;
}

//funcion que sirve para restar no tiene restricciones ya que la multiplicacion no las tiene
//el resultado lo toma por puntero

int multiplicacion(float* pResultado,float operador1,float operador2)
{
	setbuf(stdout,NULL);
	float resultado;
	int retorno = -1;

	resultado = operador1 * operador2;
	*pResultado = resultado;
	retorno = 0;

	return retorno;
}

//La division tiene la restriccion de que el divisor no puede ser 0 por lo tanto se avisa sobre este problema en caso que ocurra
//El resultado pasa por puntero
//si es correcta la operacion da como valor de return 0 si no -1

int division(float* pResultado,float operador1,float operador2,char* mensajeError)
{
	setbuf(stdout,NULL);
	float resultado;
	int retorno = -1;

	if(operador2 != 0)
	{
		resultado = operador1 / operador2;
		*pResultado = resultado;
		retorno = 0;
	}
	else
	{
		printf("%s", mensajeError);
		retorno = -1;
	}
	return retorno;
}

//Es un factorial que "castea" los numeros en caso  que sean float como int para poder calcularlos
//Tiene la restriccion que el valor ingresado tiene que ser mayor a 2
//si es correcta la operacion da como valor de return 0 si no -1

int factorial(int* pResultado1,int* pResultado2,float operador1,float operador2,char* mensajeError)
{
	setbuf(stdout,NULL);
	int acumulador1 = 1;
	int acumulador2 = 1;
	int retorno = -1;

	if(pResultado1 != NULL && pResultado2 != NULL)
	{
		if (operador1 > 1 || operador2 > 1)
		{
			while(operador1 > 1)
			{
				acumulador1 *= (int) operador1;
				operador1 --;
			}

			while(operador2 > 1)
			{
				acumulador2 *= (int) operador2;
				operador2 --;
			}

			*pResultado1 = acumulador1;
			*pResultado2 = acumulador2;

		retorno = 0;
		}

	}
	else
	{
	printf("%s", mensajeError);
	retorno = -1;
	}
	return retorno;
}
