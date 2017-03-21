/*En desarrollo embebido en C, se usa una extensión llamada "at" (@) operator. 
Consiste en decir en qué posición poner una variable (generalmente porque 
corresponde a una dirección de memoria no física, en donde hay un puerto de hardware). 

Ejemplo:
	int pepe @ 0x123;
Hacer algo lo más parecido posible en C++:
	declare_at(type,name,address)
Notar que si la dirección que se pasa como tercer argumento no ha sido reservada,
declare_at ocasionará un error de ejecución. La memoria debe ser previamente reservada:
	int initialized[1];
	declare_at(int, pepe, &initialized);

NT: It could be any type of data but the array cause some errors that must be taken
care, that's why are in the example.*/

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

#define declare_at(type, name, address) type name = *(type*) &address;

int main()
{
    int initialized[1];
    declare_at(int, pepe, initialized);

    //int* pepe = (int*) initialized;
    printf("Pepe = %i \nPepe address: %lx \ninitialized address: %lx \n", pepe, &pepe, &initialized);
    return EXIT_SUCCESS;
}