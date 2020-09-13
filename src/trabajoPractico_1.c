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

	//declaraci�n de variables
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

	//inicializaci�n de banderas
	flagOperatorA=0;
	flagOperatorB=0;
	flagShowCalculate=0;

	system("color 75");

	do
	{

		switch (dpn_showMenu1())//llamada a la funci�n para mostar menu al usuario y que elija la opci�n.
		{
		case 1:
			utn_getNumeroFlotante( &operatorA,"Ingrese el primer operador\n", "error, reingrese el primer operador \n",-1000, 1000,2);
			flagOperatorA=1;//baja bandera del primer operador
			dpn_showMenu2(operatorA);
			break;
		case 2:
			if(flagOperatorA==1){//condicion para ingresar el segundo operador
				utn_getNumeroFlotante( &operatorB,"Ingrese el SEGUNDO operador\n", "error, reingrese el segundo operador \n",-1000, 1000,2);
				flagOperatorB=1;//indica el ingreso del segundo operador
			}
			else{
				printf("INGRESE EL PRIMER OPERANDO PARA PODER SEGUIR!\n");
			}
			dpn_showMenu3(operatorA, operatorB);
			break;

		case 3:

			if(flagOperatorA==1 && flagOperatorB==1){//condici�n para calcular resultados
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
				flagShowCalculate=1;//indica que ya pas� a realizar los calculos
			}
			else{
				printf("\nNO HAY RESULTADOS PARA PROCESAR...INGRESELOS A TRAV�S DE LA OPCI�N 1 Y 2\n");
			}
			break;
		case 4:

			if(flagOperatorA==1 && flagOperatorB==1 && flagShowCalculate==1){//condiciones para mostrar resultados
				printf("\n El resultado de la suma entre A y B ES : %f ",resulAdd);
				printf("\n El resultado de la resta entre A y B ES : %f ",resulSubstraction);
				printf("\n El resultado de la  multiplicaci�n entre A y B ES : %f ",resulMultiplacation);
				printf("\n El resultado de la divisi�n entre A y B ES : %f ",resulDivision);
				printf("\n El factorial de A es : %f ",resulFactorialA);
				printf("\n El factorial de b es : %f  ",resulFactorialB);
			}
			else{
				printf("NO HAY DATOS PARA MOSTRAR, REGRESE A LA OPCI�N 1\n");
			}

			break;
		case 5:
			printf("Esta seguro que desea salir ? (y/n)\n");//confirmaci�n de salida
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


		}
		while(seguir == 'y');

	system("pause");

	return EXIT_SUCCESS;

}



