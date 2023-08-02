#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact			phone_num[8];
	public:
		void	add_cnt();
		void	search_cnt();
		void	exit();
};

#endif
