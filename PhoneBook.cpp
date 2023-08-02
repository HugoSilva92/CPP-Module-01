#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	;
}

bool	PhoneBook::add_to_book(int i){
	return (phone_num[i].add_cnt());
}

bool	PhoneBook::search(std::string c)
{
	if (atoi(c.c_str()) < 1 && atoi(c.c_str()) > 8)
		return false;
}

void	PhoneBook::print(){
	int	i = 0;
	while (i < 8)
	{
		phone_num[i].print();
		i++;
	}
}

PhoneBook::~PhoneBook(){
	;
}
