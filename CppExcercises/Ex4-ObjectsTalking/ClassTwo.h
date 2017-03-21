#ifndef CLASS_TWO_H
#define CLASS_TWO_H

#include "ClassOne.h"

namespace ClassTwoNS
{
    class ClassTwo
    {
        public:
            virtual ~ClassTwo() {};
            virtual void Hello(ClassOneNS::ClassOne classOne) const = 0;      
            virtual void FineAndYou(ClassOneNS::ClassOne classOne) const = 0;      
    };
}

#endif // CLASS_TWO_H