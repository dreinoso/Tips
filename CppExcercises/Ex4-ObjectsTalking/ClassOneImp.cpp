#include <iostream> 
#include "ClassOneImp.h"

namespace ClassOneNS
{
    //--------------------------------------------------------------------------
    ClassOneImp::ClassOneImp(std::string name)
    : mName { name }
    {
    }
    
    //--------------------------------------------------------------------------
    void ClassOneImp::HowAreYou() const
    {
        std::cout << "ClassOne says 'How Are you!'\n" ;
    }

    //--------------------------------------------------------------------------
    ClassOneImp::~ClassOneImp()
    {
    }
}
