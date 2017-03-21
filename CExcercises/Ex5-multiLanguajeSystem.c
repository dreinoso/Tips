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

Respuesta: Si por el indice del enumerado, o crando un elemento final del enum, como son 
consecutivos, daria la cantidad de elementos, por ejemplo:
	
	enum Languages
	{	
		Spanish,
		English,
		LanguagesSize
	};

Entonces LanguagesSize = 3;

*/
#include <stdio.h>

#define LANGUAGES_LENGTH 2 // Can't use const int for index of a matrix
#define MESSAGES_LENGTH 3

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

const char* MESSAGES [LANGUAGES_LENGTH][MESSAGES_LENGTH] = {
	{"Hola Mundo", "Fuera de memoria", "Archivo no encontrado"},
	{"Hello World", "Out of Memory", "File not found"}
};

s
const char* getMessage(enum Languages language, enum Messages message);

int main (int argc, char **argv)
{
	printf("Spanish, HelloWorld: %s \n", getMessage(Spanish, HelloWorld));
	printf("Spanish, OutOfMemory: %s \n", getMessage(Spanish, OutOfMemory));
	printf("Spanish, FileNotFound: %s \n", getMessage(Spanish, FileNotFound));

	printf("English, HelloWorld: %s \n", getMessage(English, HelloWorld));
	printf("English, OutOfMemory: %s \n", getMessage(English, OutOfMemory));
	printf("English, FileNotFound: %s \n", getMessage(English, FileNotFound));

	return 0;
}

const char* getMessage(enum Languages language, enum Messages message)
{
	return MESSAGES[language][message];
}