#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static std::string	get_value(std::string var_name)
{
	std::string	variable;

	while (true)
	{
		std::cout << var_name + ": ";
		std::getline(std::cin, variable);
		if (variable.empty())
			std::cout << "Empty field" << std::endl;
		else
			return (variable);
	}
}

int	main(void)
{
	PhoneBook	phone_book;
	std::string	action;

	do
	{
		std::cout << "What do you want to do? ADD SEARCH EXIT\n";
		std::getline(std::cin, action);
		if (action == "ADD")
		{
			std::string	name = get_value("Name");
			std::string	last_name = get_value("Last name");
			std::string	nickname = get_value("Nickname");
			std::string	phone_number = get_value("Phone number");
			std::string	secret = get_value("Secret");
			
			Contact	new_contact(name, last_name, nickname, phone_number, secret);
			phone_book.add_contact(new_contact);
		}
		else if(action == "SEARCH")
		{
			// Exiba os contatos salvos como uma lista de 4 colunas
			// máximo de 10 caracteres de largura
		}
		else if (action != "EXIT")
		{
			// comando inválido
		}
	}
	while (action != "EXIT");
 
	return (0);
}

//	std::cin.eof() - to handle ctrl + D
