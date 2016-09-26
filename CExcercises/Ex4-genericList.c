/*
Se requiere la implementación de una lista genérica, es decir que pueda construirse una lista de
cualquier tipo de datos. Es necesario que la implementación soporte la construcción de dos listas
con tipos diferentes dentro del mismo archivo.

Se deben proveer las siguientes macros en “genericList.h”

declare_list_type(type, listName)

Declara el tipo de la lista y el nombre que tendrá. Encargada de declarar y definir todas las
funciones que serán llamadas en las otras macros correspondiendo a cada tipo en particular.

init_list(type, listName, list);

Inicializa la lista list, con nombre listName y que contiene elementos de tipo type.

addToList(type, listName, list, elem)

Inserta el elemento elem de tipo type a la lista list con nombre listName.
Si se considera necesario se podrán agregar más macros.

Restricción: Todas las macros deberán tener a lo sumo una línea, excepto la macro declare_list_type.

Ejemplo de uso del tipo genérico:

// main.c

#include “genericList.h”

declare_list_type(int, ListOfInts);

int main (void)

{
	ListOfInts l;
	init_list(int, ListofInts, l);
	addToList(int, ListOfInts,l, 3);
	return 0;
}
*/
#include <stdio.h>
#include “genericList.h”

declare_list_type(int, ListOfInts);

int main (void)
{
	ListOfInts l;
	init_list(int, ListofInts, l);
	addToList(int, ListOfInts,l, 3);
	return 0;
}