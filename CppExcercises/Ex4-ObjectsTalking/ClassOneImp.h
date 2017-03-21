#ifndef CLASS_ONE_IMP_H
#define CLASS_ONE_IMP_H

#include <iostream> 
#include <string>
#include "ClassOne.h"
#include "ClassTwo.h"

namespace ClassOneNS
{
    class ClassOneImp : ClassOne
    {
        public:
            ~ClassOneImp();
            ClassOneImp(std::string name);
            void HowAreYou(ClassTwoNS::ClassTwo cTwo) const override;
            
        private:
            std::string mName;
    };
}

#endif // CLASS_ONE_IMP_H