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
#include <stdlib.h>

#define pointers(indirections) indirections**

static int nIndirections(void* initial, unsigned int indirections);

int main ()
{	
	unsigned int indirections = 3; /* To not use magical values*/
	int a = 100;
	int *a1 = &a;
	int **a2 = &a1;
	int ***a3 = &a2;
	int result = nIndirections((void*)a3, indirections);
	printf("The result of 3 indirections is %i \n", result);
	return EXIT_SUCCESS;
}

static int nIndirections(void* initial, unsigned int indirections) /* A const void * points should not be modified, would fix better*/
{
	if (indirections == 0)
	{
		printf("Bad use of function nIndirections: indirections <= 0 is not a valid argument");
		exit(EXIT_FAILURE);
	}
	/*Desreference a void pt throw an error because the compiler does't know the long of the object, so the cast is needed*/
	int ** intInitial = (int *) initial; /*The type needed is a pointer of an int pointer so we avoid the core dump error*/ 
	unsigned int desreferencesCount = 1; /* Not good using of i,j,k... doesn't give an idea about what the loop does*/
	
	for(; desreferencesCount < indirections; desreferencesCount++)
	{
		intInitial = *intInitial;
	}

	return *intInitial;
}