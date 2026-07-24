#include <iostream>
#include <string>

int	main(void)
{
	std::string	str1 = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str1;
	std::string	&stringREF = str1;

	std::cout << &str1 << "<- str1 adress." << std::endl;
	std::cout << stringPTR << "<- adress held by stringPTR" << std::endl;
	std::cout << &stringREF << "<- adress held by stringREF" <<std::endl;

	std::cout << "str1 value: " << str1 << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;  
	return (0);
}
