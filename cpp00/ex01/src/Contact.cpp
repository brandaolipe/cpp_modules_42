#include "Contact.hpp"

Contact::Contact(
	std::string name,
	std::string last_name,
	std::string nickname,
	std::string secret,
	std::string phone_number)
	: _name(name),
	  _last_name(last_name),
	  _nickname(nickname),
	  _secret(secret),
	  _phone_number(phone_number) {}

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::get_name() const
{
	return (_name);
}

std::string Contact::get_last_name() const
{
	return (_last_name);
}

std::string Contact::get_nickname() const
{
	return (_nickname);
}

std::string Contact::get_secret() const
{
	return (_secret);
}

std::string Contact::get_phone_number() const
{
	return (_phone_number);
}
