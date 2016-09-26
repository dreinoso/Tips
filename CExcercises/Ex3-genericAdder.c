/*
Se desea hacer un sumador genérico, que tome: un arreglo de estructuras definidas por el
usuario; el tamaño de un campo específico; el offset de dicho campo; y la cantidad de elementos
del arreglo. Deberá retornar la suma de ese campo en cada estructura del arreglo. Se permite
utilizar la macro desarrollada en el ejercicio 2.

int genericPlus(const void* array, size_t elementSize, size_t fieldOffset, size_t amountOfElements);

Ejemplo de uso:

cons int result = genericPlus(&array[0], sizeof(struct S), offsetOf(struct S, field1), sizeof(array)/sizeof(array[0]));

El resultado será la suma de todos los field1 de cada estructura S del arreglo array.
*/
#include <stdio.h>

int nIndirections(void* initial, unsigned int indirections);

int main (int argc, char **argv)
{
	int a = 3;
	int *a1 = &a;
	int **a2 = &a1;
	int result = nIndirections((void*)a2, 2);
	printf("The result of 2 indirections is %i \n", result);
	return 0;
}

int nIndirections(void* initial, unsigned int indirections)
{
	int resultFromIndirections = 0;
	int i = 0;
	for (i=0; i<indirections - 1; i++)
	{
		initial = (int *) *initial;
	}

	return (int) *initial;
}