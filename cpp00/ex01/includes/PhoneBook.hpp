#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <sstream>

class PhoneBook
{
	private:
		Contact		contact_list_[8];
		int			size_;
		int			index_;
		std::string	truncate_(std::string var);

	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(Contact &new_contact);
		void	search_contact();
};

#endif