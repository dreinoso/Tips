/*Se debe implementar una macro llamada offsetOf que, dada una estructura y un campo de la
misma estructura, retorne la posición relativa de ese campo en la estructura.

Ejemplo:

struct S
{
	int field1;
	float field2;
	char field3[10];
	char field4;
}
se desea poder hacer algo al estilo de:
size_t pos = offsetOf(struct S, field3);
(Aclaración: size_t es un entero positivo dependiente de plataforma,
suficientemente grande como para representar la máxima cantidad de bytes
allocables en el sistema)

¿Es posible utilizar esta macro con estructuras que contengan bitfields? ¿Porque?
Rta: 
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* The FIELD is positionated in a bigger position of memory */
#define offsetOf(STRUCT, FIELD) ((long unsigned int)(&FIELD)-(long unsigned int)(&STRUCT))

struct S
{
	int field1;
	float field2;
	char field3[10];
	char field4;
};

int main ()
{
	struct S myStruct;
	size_t pos = 0;

   	myStruct.field1 = 10;
   	myStruct.field2 = 10.10;
   	strcpy( myStruct.field3, "Foobar....");
   	myStruct.field4 = 'a';

   	pos = offsetOf(myStruct, myStruct.field3);

	/* It's expected: int (4 bytes) + float (4 bytes) => 8 */
	printf("Struct Position\tField Position\tRelative Position\n\t%li\t%li\t%li\n", (long int) &myStruct, (long int) &myStruct.field3,pos);
	
	return (EXIT_SUCCESS);
}