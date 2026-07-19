#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size_(0) {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact(Contact &new_contact)
{
	contact_list_[index_] = new_contact;
	index_ = (index_ + 1) % 8;
	if (size_ < 8)
		size_++;
}

void	PhoneBook::search_contact()
{
	std::string	target_id;
	int			nb_id;
	if (size_ == 0)
	{
		std::cout << "No contacts registered." << std::endl;
		return ;
	}
	else
	{
		std::cout << std::setw(10) << "Index|"
				<< std::setw(10) << "First name|"
				<< std::setw(10) << "Last name|"
				<< std::setw(10) << "Nickname|"
				<< std::endl;
	}
	for (int i = 0; i < size_; i++)
	{
		std::cout << std::setw(10) << i << "|" 
				<< truncate_(contact_list_[i].get_name()) << "|"
				<< truncate_(contact_list_[i].get_last_name()) << "|"
				<< truncate_(contact_list_[i].get_nickname()) << "|"
				<< std::endl;
	}
	std::cout << "Index: ";
	std::getline(std::cin, target_id);
	std::stringstream stream_id(target_id);

	if (stream_id >> nb_id && (nb_id > 0 && nb_id < size_))
	{
		std::cout << "First name: " + contact_list_[nb_id].get_name() << std::endl;
		std::cout << "Last name: " + contact_list_[nb_id].get_last_name() << std::endl;
		std::cout << "Nickname: " + contact_list_[nb_id].get_nickname() << std::endl;
		std::cout << "Phone number: " + contact_list_[nb_id].get_phone_number() << std::endl;
		std::cout << "Secret: " + contact_list_[nb_id].get_secret() << std::endl;

	}
	else
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
}

std::string	PhoneBook::truncate_(std::string var)
{
	if (var.length() >= 10)
	{
		return (var.substr(0, 9) + ".");
	}
	return (var);
}
