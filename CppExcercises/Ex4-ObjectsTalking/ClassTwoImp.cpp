#include <iostream> 
#include "ClassTwoImp.h"

namespace ClassTwoNS
{
    //--------------------------------------------------------------------------
    ClassTwoImp::ClassTwoImp(std::string name)
    : mName { name }
    {
    }

    //--------------------------------------------------------------------------
    void ClassTwoImp::Hello() const
    {
        std::cout << "ClassTwo says 'Hello!'\n";
    }

    void ClassTwoImp::FineAndYou() const
    {
        std::cout << "ClassTwo says 'Fine and you?!'\n";
    }

    //--------------------------------------------------------------------------
    ClassTwoImp::~ClassTwoImp()
    {
    }
}