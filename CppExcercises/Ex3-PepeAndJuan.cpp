/*Dadas las siguientes estructuras:
Struct Pepe
{
	int x;
	int y;
	int z;
};
Struct Juan
{
	Pepe& pp;
	int a;
};

Lograr que esto compile y sea posible crear un objeto Juan. Imprimir por pantalla 
sizeof(Juan) y sizeof(Pepe).

¿Es válida la siguiente afirmación: “sizeof(Juan) == sizeof(Pepe) + sizeof(int)”?
Rta: Si, porque porque Pepe& es un tipo definido del cual se conocen sus campos,
por lo que el compilador puede determinar correctamente su tamaño, al cual le suma 
sizeof(int), debido a la variable a.*/

#include <cstdio>
#include <iostream>
#include <cstdlib>

struct Pepe
{
    int x;
    int y;
    int z;
}InitialPepe;



struct Juan
{
    Juan(Pepe& pepito)
    :pp(pepito)
    {}

    Pepe&  pp;
    int a;
};

int main()
{   
    InitialPepe.x = 0;
    InitialPepe.y = 0;
    InitialPepe.z = 0;

    struct Pepe pepito;
    struct Juan juancito1(pepito), juancito2(pepito);

    pepito.x = 10;
    pepito.y = 20;
    pepito.z = 30;

    juancito1.a = 40;
    juancito1.pp = pepito;

    std::cout << "Juancito.pepito.y = " << juancito1.pp.x << std::endl;
    std::cout << "Size of Pepe: " << sizeof(pepito) << std::endl;
    std::cout << "Size of Juan: " << sizeof(juancito1) << std::endl;

    return EXIT_SUCCESS;
}

//TODO: search struct of struct, bad compilation, intialization of pointer