#include "part1.h"
#include <iostream>
#include <cstring> //add for use strncpy

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	//add this condition
	if (strlen(src) >= destsize)
	{
		std::cerr << "ERROR! string bigger then buffer" << std::endl;
		return nullptr;
	}
	char* ret = dest;
	while (*dest++ = *src++)
		;
	//add
	*dest = '\0';//nullptr
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[12];
	char src[] = "hello world!";
	
	//add this condition
	if (string_copy(dest, 12, src) != nullptr)
	{
		std::cout << src << std::endl;
		std::cout << dest << std::endl;
	}
	else
	{
		std::cerr << "ERROR! The sizes are not the same" << std::endl;
	}
}
