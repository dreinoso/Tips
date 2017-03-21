/*Se debe implementar la función increment, que recibiendo un int lo incrementa 
sobre el mismo parámetro.

NT: Resolution oriented to pointers.*/
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

void increment(int&);

int main()
{
	int i = 2;
    increment(i);	
    cout << "Value Addres In Main: " << i << endl;
    return EXIT_SUCCESS;
}

void increment(int& value)
{
    value++;
}

