/*
 * Calculadora Biblioteca.h
 *
 *  Created on: 12 sep. 2020
 *      Author: COVID-19
 */

#ifndef CALCULADORA_BIBLIOTECA_H_
#define CALCULADORA_BIBLIOTECA_H_

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_getNumeroFloat(float*pResultado,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos);
int suma(float* pResultado,float operador1,float operador2);
int resta(float* pResultado,float operador1,float operador2);
int multiplicacion(float* pResultado,float operador1,float operador2);
int division(float* pResultado,float operador1,float operador2,char* mensajeError);
int factorial(int* pResultado1,int* pResultado2,float operador1,float operador2,char* mensajeError);


#endif /* CALCULADORA_BIBLIOTECA_H_ */
