#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact_list[8];
		int		_size;

	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact(Contact &new_contact);
		void	search_contact();
		/* metodo ADD: inserir as informacoes do novo contato um campo
		por vez */

		/* metodo SEARCH: exibir um contato especifico 
		- Exibo os contatos salvos como uma lista de 4 colunas: id, primeiro nome,
		sobrenome e apelido.
		- Cada coluna deve ter 10 caracteres de largura. Um caractere | os separa.
		O texto deve ser alinhado a direita. Se o texto for maior qe a coluna,
		ele deve ser truncado e o ultimo caractere exibivel deve ser substituido por
		um ponto (".").
		- Entao, solicite ao usuario novamente o indice da entrada a ser exibida. Se
		o indice estiver fora do intervalo ou errado, defina um comportamento relevante.
		Caso contrario, exiba as informacoes de contato, um campo por linha.
		*/
};

#endif