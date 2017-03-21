#ifndef CLASS_TWO_IMP_H
#define CLASS_TWO_IMP_H

#include "ClassTwo.h"
#include "ClassOne.h"
#include "string"

namespace ClassTwoNS
{
	class ClassTwoImp : ClassTwo
    {
	    public:
            ~ClassTwoImp();
            ClassTwoImp(std::string name);

            void Hello(ClassOneNS::ClassOne myClassOne) const override;      
	        void FineAndYou(ClassOneNS::ClassOne myClassOne) const override;

        private:
            std::string mName;
	};
}

#endif // CLASS_TWO_IMP_H