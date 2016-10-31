/*Se pide implementar la función:
int nIndirections(void* initial, unsigned int indirections);
La función toma por parámetro la dirección de memoria inicial en forma de puntero a void que
contendrá una variable de tipo int****..., con tantos asteriscos como indirecciones indique el
entero sin signo indirections. El valor de retorno de la función será un entero producto de realizar
N indirecciones al puntero initial.

Ejemplo:
int a = 3;
int* a1 = &a;
int ** a2 = &a1;
int result = nIndirections((void*)a2, 2);
El resultado será 3.*/
#include <stdio.h>

int nIndirections(void* initial, unsigned int indirections);

int main (int argc, char **argv)
{	
	int indirections = 2; // To not use magical values
	int a = 3;
	int *a1 = &a;
	int **a2 = &a1;
	int result = nIndirections((void*)a2, indirections);
	printf("The result of 2 indirections is %i \n", result);
	return 0;
}

int nIndirections(void* initial, unsigned int indirections) // A const void * points should not be modified, would fix better
{
	int resultFromIndirections = 0;
	// Desreference a void pt throw an error because the compiler does't know the long of the object, so the cast is needed
	int * intInitial = (int*) initial;
	int desreferencesCount = 0; // Not good using of i,k,k... doesn't give an idea about what the loop does
	for (desreferencesCount = 0; desreferencesCount < indirections - 1; desreferencesCount++)
	{
		intInitial = (int*) *intInitial;
	}

	return (int) *intInitial;
}
