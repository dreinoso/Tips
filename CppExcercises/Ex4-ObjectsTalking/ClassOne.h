#include <iostream> 
#include <string>

namespace ClassOneNS
{
	class ClassOne {
	    private:
	    	std::string name;
	    	int a, b; 
	    public:
	   	    void howAreYou();      
	   	    ClassOne(std::string name)
	   	    {
	   	    	this->name = name;
	   	    }
	};
}