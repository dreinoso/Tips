#ifndef CLASS_ONE_H
#define CLASS_ONE_H

#include "ClassTwo.h"

namespace ClassOneNS
{
    class ClassOne
    {
        public:
            virtual ~ClassOne() {};
            virtual void HowAreYou(ClassTwoNS::ClassTwo) const = 0;      
    };
}

#endif // CLASS_ONE_H