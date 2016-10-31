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
¿Es posible utilizar esta macro con estructuras que contengan bitfields? ¿Porque?*/

#include <stdio.h>
#include <string.h>

//The Field is posicionated in a bigger position of memory, because the 
#define offsetOf(STRUCT, FIELD) ((int)(&FIELD)-(int)(&STRUCT))

struct S
{
	int field1;
	float field2;
	char field3[10];
	char field4;
};

int main (int argc, char **argv)
{
	struct S s;

   	s.field1 = 10;
   	s.field2 = 10.10;
   	strcpy( s.field3, "Foobar....");
   	s.field4 = 'a';

   	size_t pos = offsetOf(s, s.field3);
	printf("Struct Position\tField Position\tRelative Position\n\t%p\t%p\t%p\n", &s, &s.field3,pos);
	// It's expected: int (4 bytes) + float (4 bytes) => 8
}