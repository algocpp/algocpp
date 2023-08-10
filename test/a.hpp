
#include <iostream>

void def()
{
	std::cout << __LINE__ << " " << __FILE__ << std::endl;
}

#define aad() \
	std::cout << __LINE__ << " " << __FILE__ << std::endl
