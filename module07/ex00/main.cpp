#include <iostream>
#include <string>
#include "define.hpp"
#include "whatever.hpp"

int	main(void)
{
	/*-------------------TEST-SWAP--------------------*/

	int		a = 10;
	int		b = 20;

	float		c = 42.8f;
	float		d = 21.4f;
	
	std::string	str1 = "Salut";
	std::string	str2 = "Hello";
	
	
	std::cout << "int a = " << a << std::endl;
	std::cout << "int b = " << b << std::endl;
	swap<int>(a, b);
	std::cout << "swap int a = " << a << std::endl;
	std::cout << "swap int b = " << b << std::endl;


	std::cout << "float c = " << c << std::endl;
	std::cout << "float d = " << d << std::endl;
	swap<float>(c, d);
	std::cout << "swap float c = " << c << std::endl;
	std::cout << "swap float d = " << d << std::endl;


	std::cout << "str1 = " << str1 << std::endl;
	std::cout << "str2 = " << str2 << std::endl;
	::swap<std::string>(str1, str2);
	std::cout << "swap str1 = " << str1 << std::endl;
	std::cout << "swapstr2 = " << str2 << std::endl;

	/*-------------------TEST-MIN--------------------*/

	int		dix = 10;
	int		vingt = 20;
	float		pie = 3.14;
	float		neperienne = 2.71;
	std::string	aloha = "aloha";
	std::string	bueno = "bueno";

	

	/*-------------------TEST-MAX--------------------*/


	return SUCCESS;
}
