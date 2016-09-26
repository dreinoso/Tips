/*
Implementar un sistema multi­idiomas de mensajes. Se requiere que dados dos enumerados que
representen idioma y mensajes se devuelva un const char* con el texto correspondiente.

enum Languages
{
	Spanish,
	English
};

enum Messages
{
	HelloWorld,
	OutOfMemory,
	FileNotFound
};

const char* getMessage(enum Languages language, enum Messages message);
Asumiendo que el valor del enumerado es consecutivo, empezando en cero: ¿Se le ocurre alguna
manera de saber cuantos mensajes y lenguajes hay en el enumerado?

---Respuesta: balalala
*/
#include <stdio.h>

enum Languages
{
	Spanish,
	English
};

enum Messages
{
	HelloWorld,
	OutOfMemory,
	FileNotFound
};

const char* getMessage(enum Languages language, enum Messages message);

int main (int argc, char **argv)
{
	printf("Spanish, HelloWorld: %s \n", getMessage(Languages.Spanish, Messages.HelloWorld));
	printf("Spanish, OutOfMemory: %s \n", getMessage(Languages.Spanish, Messages.OutOfMemory));
	printf("English, HelloWorld: %s \n", getMessage(Languages.English, Messages.HelloWorld));
	printf("English, FileNotFound: %s \n", getMessage(Languages.English, Messages.FileNotFound));
	return 0;
}

const char* getMessage(enum Languages language, enum Messages message);
{
	// Matrix or Dicctionary or another enum ir simply ifs
}