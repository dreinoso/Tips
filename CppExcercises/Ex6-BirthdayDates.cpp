/*Hacer un programa que permita llevar un registro de coincidencias en fechas de 
cumpleaños de los integrantes de un grupo de amigos. Debe permitir visualizar 
cuáles amigos cumplen años el mismo día; esto es, en el mismo día y el mismo mes. 
Es necesario poder ingresar amigos a la lista de amigos con un nombre y una fecha 
de cumpleaños. Luego se deben imprimir sólo las fechas que tengan más de un cumpleañero 
con la lista de amigos que cumplen ese mismo dia y mes.

Implementar la clase FriendsGroup:

El algoritmo show() debe tener la menor complejidad posible. Si es necesario se pueden añadir
clases.*/

#include <cstdlib>
#include <iostream>
#include <string>

struct FriendElement
{
    string name;
    string birthday;
}

class FriendList{
    public:
        void showEqualsBrthday();
        void showList();
        void addFriend();
        void getFriend();
    
    private:
        std::vector<FriendElement> mList;
};

int main()
{
    FriendList myList;
    
    myList.addFriend("Pedro Ramirez", "22/10/90");
    myList.addFriend("Albus Alberione", "22/10/90");
    myList.addFriend("Gus Ojida", "22/10/90");
    myList.addFriend("Mark Ibarra", "22/10/90");

    myList.showList();
    myList.showEqualsBrthday();

    return EXIT_SUCCESS;
}

void FriendList::showEqualsBrthday()
{
    cout << "===================================" << std::endl;
    cout << "          Birthdays Matchs" << std::endl;
        matchList;
    tempList = mList;
    
    for(element : mList)
    {
        if(!matchList.conains(element))
        {
            tempList.remove(element)
            bool elementAdded = false;
            for(testElememt:tempList)
            {
                if(element == testElememt)
                {
                    if(!elementAdded)
                    {
                        matchList.addElement(testElememt);
                        elementAdded = true;
                    }
                    tempList.remove(testElememt);
                }
            }
        }
    }
    for(element : mList)
    {
        cout << element.name << "\t" << element.birthday << std::endl;
    }
}

void FriendList::showList()
{
    cout << "===================================" << std::endl;
    cout << "    Names     |     Birthdays" << std::endl;
    for(element : mList)
    {
        cout << element.name << "\t" << element.birthday << std::endl;
    }
}

FriendElement FriendList::getElemenet(int index)
{
    mList[index];
}

void FriendList::addFriend()
{
    struct FriendElement element;
    ekement.name
    mList.add(element);
}

FriendElement FriendList::getElemenet(int index)
{
    mList[index];
}