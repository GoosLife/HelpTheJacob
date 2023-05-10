#include "HTMLConverter.h"

#include <iostream>

int main()
{
	HTMLConverter h;
	std::string message = "Hello world!";
	h.convert(message);
	std::cout << message << '\n';
}
