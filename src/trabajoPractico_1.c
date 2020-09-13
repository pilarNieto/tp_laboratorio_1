/*
 ============================================================================
 Name        : trabajoPractico_1.c
 Author      : Pilar Nieto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "myLibrary.h"




int main(void) {

	setbuf(stdout,NULL);

	//declaración de variables
	float operatorA;
	float operatorB;
	float resulAdd;
	float resulSubstraction;
	float resulMultiplacation;
	float resulDivision;
	float resulFactorialA;
	float resulFactorialB;
	int flagOperatorA;
	int flagOperatorB;
	int flagShowCalculate;
	char seguir;
	char confirmar;

	//inicialización de banderas
	flagOperatorA=0;
	flagOperatorB=0;
	flagShowCalculate=0;

	system("color 75");

	do
	{

		switch (dpn_showMenu(flagOperatorA, flagOperatorB, operatorA, operatorB))//llamada a la función para mostar menu al usuario y que elija la opción.
		{
		case 1:
			operatorA=dpn_getFloat("Ingrese el primer operador\n", "error, reingrese el primer operador \n", &operatorA);
			flagOperatorA=1;//baja bandera del primer operador
			break;
		case 2:
			if(flagOperatorA==1){//condicion para ingresar el segundo operador
				operatorB=dpn_getFloat("Ingrese el primer operador", "error, reingrese", &operatorB);
				flagOperatorB=1;//indica el ingreso del segundo operador
			}
			else{
				printf("INGRESE EL PRIMER OPERANDO PARA PODER SEGUIR!\n");
			}
			break;

		case 3:

			if(flagOperatorA==1 && flagOperatorB==1){//condición para calcular resultados
				resulAdd=add(operatorA, operatorB);
				resulSubstraction=substraccion(operatorA, operatorB);
				resulMultiplacation=multiplication(operatorA, operatorB);
				resulDivision=division(operatorA, operatorB);
				if(numberInteger(operatorA)){
					resulFactorialA=factorial(operatorA);
				}
				if(numberInteger(operatorB)){
				resulFactorialB=factorial(operatorB);
				}

				printf("\n*****RESULTADOS PROCESANDOSE*******");
				flagShowCalculate=1;//indica que ya pasó a realizar los calculos
			}
			else{
				printf("\nNO HAY RESULTADOS PARA PROCESAR...INGRESELOS A TRAVÉS DE LA OPCIÓN 1 Y 2\n");
			}
			break;
		case 4:

			if(flagOperatorA==1 && flagOperatorB==1 && flagShowCalculate==1){//condiciones para mostrar resultados
				printf("\n El resultado de la suma entre A y B ES : %f ",resulAdd);
				printf("\n El resultado de la resta entre A y B ES : %f ",resulSubstraction);
				printf("\n El resultado de la  multiplicación entre A y B ES : %f ",resulMultiplacation);
				printf("\n El resultado de la división entre A y B ES : %f ",resulDivision);
				printf("\n El factorial de A es : %f ",resulFactorialA);
				printf("\n El factorial de b es : %f  ",resulFactorialB);
			}
			else{
				printf("NO HAY DATOS PARA MOSTRAR, REGRESE A LA OPCIÓN 1\n");
			}

			break;
		case 5:
			printf("Esta seguro que desea salir ? (y/n)\n");//confirmación de salida
			                fflush(stdin);
			                scanf("%c",&confirmar);
			                confirmar = tolower(confirmar);
			                if (confirmar == 'y')
			                {
			                	seguir = 'y';
			                }
			                break;
		   default:
				printf("Opcion invalida \n");
			}

			system("pause");
		}
		while(seguir == 'y');


	return EXIT_SUCCESS;

}



