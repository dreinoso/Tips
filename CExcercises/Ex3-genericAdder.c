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
#include <string.h>

#define offsetOf(STRUCT, FIELD) ((int)(&STRUCT) - (int)(&FIELD))

int genericPlus(const void* array, size_t elementSize, size_t fieldOffset, size_t amountOfElements);

struct S
{
	int field1;
	float field2;
	char field3[10];
	char field4;
};

int main (int argc, char **argv)
{
	struct S s1;
   	s1.field1 = 10;
   	s1.field2 = 10.10;
   	strcpy( s1.field3, "Foobar....");
   	s1.field4 = 'a';
   	
   	struct S s2;
   	s2.field1 = 10;
   	s2.field2 = 10.10;
   	strcpy( s2.field3, "Foobar....");
   	s2.field4 = 'a';

   	struct S s3;
   	s3.field1 = 10;
   	s3.field2 = 10.10;
   	strcpy( s3.field3, "Foobar....");
   	s3.field4 = 'a';

	struct S array[] = {s1,s2,s3};

	int result = genericPlus(&array[0], sizeof(struct S), offsetOf(s1, s1.field1), sizeof(array)/sizeof(array[0]));
	printf("The result of the generic adder is: %i \n", result);

	return 0;
}

int genericPlus(const void* array, size_t elementSize, size_t fieldOffset, size_t amountOfElements)
{
	int i = 0;
	int sumResult = 0;
	struct S =
	for (i=0; i < amountOfElements; i = i + 1)
	{
		sumResult = sumResult + array[i]
	}
	return 0;
}