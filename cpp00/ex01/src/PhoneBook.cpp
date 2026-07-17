#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0) {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact(Contact &new_contact)
{
	_contact_list[_size] = new_contact;
	_size++;
}

void	PhoneBook::search_contact()
{
	if (_size == 0)
		std::cout << "No contacts registered." << std::endl;
	else
	{
		std::cout << std::setw(10);
		std::cout << "Indice"
	}
}

// indice, primeiro nome, sobrenome apelido
