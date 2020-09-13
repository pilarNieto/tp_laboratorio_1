

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "myLibrary.h"

	int dpn_showMenu(int flagMenu1, int flagMenu2, float operatorA, float operatorB)
	{
		int option;
		if(!flagMenu1 && !flagMenu2){
			system("cls");
			printf("***************************************\n");
			printf("******       CALCULADORA         ******\n");
			printf("****        MENU DE OPCIONES       ****\n\n");
			printf("** (1). Ingresar primer valor (A=x) **\n");
			printf("** (2). Ingresar segundo valor (B=y) **\n");
			printf("(3). Ingrese para calcular las operaciones\n");
			printf("     a) Calcular la suma  (A+B)\n");
			printf("     b) Calcular la resta (A-B)\n");
			printf("     c) Calcular la multiplicación (A*B)\n");
			printf("     d) Calcular la división (A/B)\n");
			printf("     e) Calcular el factorial (A!)\n");
			printf("     f) Calcular el factorial (B!)\n\n");
			printf("(4). Ingrese para ver los resultados\n");
			printf("(5). Ingrese para salir\n\n");
			printf("****************************************************\n");
			printf("Elija una opcion: ");
		}

			if(flagMenu1 && !flagMenu2)
			{
				printf("***************************************\n");
				printf("******       CALCULADORA         ******\n");
				printf("****        MENU DE OPCIONES       ****\n\n");
				printf("** (1). Ingresar primer valor (A=%.1f), **\n",operatorA);
				printf("** (2). Ingresar segundo valor (B=y) **\n");
				printf("(3). Ingrese para calcular las operaciones\n");
				printf("     a) Calcular la suma  (%.1f+B)\n", operatorA);
				printf("     b) Calcular la resta (%.1f-B)\n", operatorA);
				printf("     c) Calcular la multiplicación (%.1f*B)\n", operatorA);
				printf("     d) Calcular la división (%.1f/B)\n", operatorA);
				printf("     e) Calcular el factorial (%.1f!)\n", operatorA);
				printf("     f) Calcular el factorial (B!)\n\n");
				printf("(4). Ingrese para ver los resultados\n");
				printf("(5). Ingrese para salir\n\n");
				printf("****************************************************\n");
				printf("Elija una opcion: ");
			}
			if(flagMenu2)
			{
				printf("***************************************\n");
				printf("******       CALCULADORA         ******\n");
				printf("****        MENU DE OPCIONES       ****\n\n");
				printf("** (1). Ingresar primer valor (A=%.1f), **\n",operatorA);
				printf("** (2). Ingresar segundo valor (B=%.1f) **\n", operatorB);
				printf("(3). Ingrese para calcular las operaciones\n");
				printf("     a) Calcular la suma  (%.1f+%.1f)\n", operatorA, operatorB);
				printf("     b) Calcular la resta (%.1f-%.1f)\n", operatorA, operatorB);
				printf("     c) Calcular la multiplicación (%.1f*%.1f)\n", operatorA, operatorB);
				printf("     d) Calcular la división (%.1f/%.1f)\n", operatorA, operatorB);
				printf("     e) Calcular el factorial (%.1f!)\n", operatorA);
				printf("     f) Calcular el factorial (%.1f!)\n\n", operatorB);
				printf("(4). Ingrese para ver los resultados\n");
				printf("(5). Ingrese para salir\n\n");
				printf("****************************************************\n");
				printf("Elija una opcion: ");
			}
			scanf("%d", &option);

		return option;
	}

	int dpn_getFloat(char *mensaje, char *mensajeError, float *pResultado)
	{
		int retorno=-1; //cargo de una vez el error
		float bufferFloat; //espacio de intercambio con el usuario
		if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL)//valido que el puntero tenga una dirección de memoria valida.
		{
			printf("%s", mensaje);
			scanf("%f", &bufferFloat);
			retorno=0;
		}
			else
			{
				printf("%s", mensajeError);
			}

		return retorno;
	}

	int add(float operatorA, float operatorB)//suma
	{

		int resultado;
		resultado = operatorA + operatorB;
		return resultado;
	}

	int substraccion(float operatorA, float operatorB)//resta
	{
		int resultado;
		resultado = operatorA - operatorB;
		return resultado;
	}


	int multiplication(float operatorA, float operatorB)//multiplicación
	{
		int resultado;
		resultado = operatorA * operatorB;
		return resultado;
	}

	int division(float operatorA, float operatorB)//división
	{

		int retorno=-1;//cargo error
		if(operatorB!=0)//condicion para que no dividir por cero
		{
			retorno=operatorA/operatorB;
			retorno=0;
		}
		else
		{
			printf("Operación No valida");
			retorno=1;
		}
		return retorno;
		}

	long int factorial(int operatorB)//función recursiva
	{
		if(operatorB<=0){
			operatorB=1;
		}
		else{
			operatorB=operatorB*factorial(operatorB-1);//se llama asi misma
		}

		return operatorB;
	}

	int numberInteger(float operatorA)//funcion de casting para poder proceder a sacar el factorial
	{
		int integer;
		int retorno;

		integer=(int)operatorA;
		retorno=-1;
		if(integer-1 || operatorA<0)
		{
			retorno=0;
		}
		return retorno;
	}









