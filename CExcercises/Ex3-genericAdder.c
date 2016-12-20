/*Se desea hacer un sumador genérico, que tome: un arreglo de estructuras definidas por el
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

#define offsetOf(STRUCT, FIELD) ((long unsigned int)(&FIELD)-(long unsigned int)(&STRUCT))

int genericPlus(const void* array, size_t elementSize, size_t fieldOffset, size_t amountOfElements);
/*const void*  because not going to modify the memory that the pointer points at*/

struct S
{
	int field1;
	float field2;
	char field3[10];
	char field4;
};

int main ()
{
	struct S s1;
  	struct S s2;
   	struct S s3;
   	struct S arrayOfStructs[3];

   	s1.field1 = 10;
   	s1.field2 = 10.10;
   	strcpy(s1.field3, "Foobar....");
   	s1.field4 = 'a';
   	
   	s2.field1 = 20;
   	s2.field2 = 10.10;
   	strcpy(s2.field3, "Foobar....");
   	s2.field4 = 'a';

   	s3.field1 = 30;
   	s3.field2 = 10.10;
   	strcpy(s3.field3, "Foobar....");
   	s3.field4 = 'a';

	arrayOfStructs[0] = s1;
	arrayOfStructs[1] = s2;
	arrayOfStructs[2] = s3;

	int result = genericPlus(&arrayOfStructs[0], sizeof(struct S), offsetOf(s1, s1.field1), sizeof(arrayOfStructs)/sizeof(arrayOfStructs[0]));
	printf("The result of the generic adder is: %i \n", result);

	return 0;
}

int genericPlus(const void* array, size_t elementSize, size_t fieldOffset, size_t amountOfElements)
{
	/* Like the return tyoe is int, assume that all the fields to add are int*/
	unsigned int indexOfStructs = 0;
	int sumResult = 0;
	struct S * sArray  = (struct S *) array; /* Cast to Struct S */

	for(; indexOfStructs < amountOfElements; indexOfStructs ++)
	{
		int * tempPointer = (int *) ((int)sArray + indexOfStructs * (elementSize) + fieldOffset);
		/*A int cast of the struct is needed to the processor doesn't add the length of the struct
		  example: sArray + x = sArray + x * (sizeof(struct S))  It's characteristic of C compiler*/
		sumResult += *tempPointer;
	}
	return sumResult;
}