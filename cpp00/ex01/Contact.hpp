#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	name_;
		std::string	last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string	secret_;

	public:
		Contact(
			std::string name,
			std::string last_name_,
			std::string nickname,
			std::string	phone_number,
			std::string secret
		);
		Contact();
		~Contact();
		std::string	get_name() const;
		std::string	get_last_name() const;
		std::string	get_nickname() const;
		std::string	get_secret() const;
		std::string	get_phone_number() const;
};

#endif
