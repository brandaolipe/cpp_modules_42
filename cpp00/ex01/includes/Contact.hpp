#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	_name;
		std::string	_last_name;
		std::string _nickname;
		std::string	_secret;
		std::string _phone_number;

	public:
		Contact(
			std::string name,
			std::string last_name,
			std::string nickname,
			std::string secret,
			std::string	phone_number
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

// Os métodos get precisaram de alguma informação especifica? uma verificação
// se o conteúdo existe?