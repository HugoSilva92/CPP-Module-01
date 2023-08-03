#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
	private:
		std::string		num;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		darkest_secret;
	public:
		Contact();
		bool	add_cnt();
		void	print();
		std::string	resize_string(std::string str);
		~Contact();
};
#endif
