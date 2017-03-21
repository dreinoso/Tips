/*Se requiere la implementación de un diálogo entre objetos por pasaje de mensajes 
(en c++, llamadas a métodos) usando interfaces. Cada objeto será de una clase 
diferente y el diálogo entre los mismos será como se puede apreciar en el siguiente 
diagrama: ...
Se requiere que los objetos conozcan interfaces y no implementaciones. Colocar nombres
adecuados a clases, interfaces y objetos creados. Se pide además de crear un main que ejecute
el diálogo, escribir tests haciendo mocking con el framework gmock. 

NT: es decir que cada objeto debe tener una instancia del otro con su interfaz por
medio de la cual llama a sus métodos.*/

#include <string>
#include "ClassOne.h"
#include "ClassOneImp.h"
#include "ClassTwo.h"
#include "ClassTwoImp.h"

int main() 
{
	std::string name1 = "ClassOneName";
    std::string name2 = "ClassTwoName";

    ClassOneNS::ClassOne* myClassOne = new ClassOneImp;
    ClassTwoNS::ClassTwo* myClassTwo = new ClassTwoImp;

    myClassOne->HowAreYou(* myClassTwo);

    return 0;
}