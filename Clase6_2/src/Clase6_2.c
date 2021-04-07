/*
 ============================================================================
 Name        : Clase6_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define NUMEROS 5

int printArrayInt (int* pArray, int limite);
int ordenarArray (int* pArray, int limite);

int main(void) {
	setbuf(stdout, NULL);

	int arrayNum [NUMEROS] = {9, 15, 18, 21, 5};
	int respuesta;

	printArrayInt(arrayNum, NUMEROS);
	respuesta = ordenarArray (arrayNum, NUMEROS);
	if (respuesta == 0)
	{
		printf ("\n Ordenamiento: %d", respuesta);
	}





	return EXIT_SUCCESS;
}

int printArrayInt (int* pArray, int limite)
{
	int retorno = -1;
	int i;
	if (pArray != NULL && limite >= 0)
	{
		retorno = 0;
		for (i=0; i<limite; i++)
		{
			printf ("\n [DEBUG] Indice: %d --- Valor: %d", i, pArray[i]);
		}

	}
	return retorno;
}


int ordenarArray (int* pArray, int limite)
{
	int retorno = -1;
	int i;
	int numMin;
	int indiceMin=0;
	int nuevoLimite = limite-1;
	int auxiliar;

	if (pArray != NULL && limite >= 0)
	{

		numMin = pArray[0];

		for (i=0; i<nuevoLimite; i++)
		{
			if (i != pArray [i])
			{
				if (pArray [i] < numMin)
				{
					numMin = pArray[i];
					pArray [i]= indiceMin;
				}
				auxiliar = pArray [i];
				indiceMin= numMin;
				indiceMin = auxiliar;
			}

		}
		retorno =0;
	}
	return retorno;
}
