#include "Contact.hpp"

Contact::Contact(
	std::string name,
	std::string lastname,
	std::string nickname,
	std::string secret,
	std::string phone_number)
	: name_(name),
	  last_name_(lastname),
	  nickname_(nickname),
	  phone_number_(phone_number),
	  secret_(secret) {}

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::get_name() const
{
	return (name_);
}

std::string Contact::get_last_name() const
{
	return (last_name_);
}

std::string Contact::get_nickname() const
{
	return (nickname_);
}

std::string Contact::get_secret() const
{
	return (secret_);
}

std::string Contact::get_phone_number() const
{
	return (phone_number_);
}
