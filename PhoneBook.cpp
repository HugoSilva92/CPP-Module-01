#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	;
}

bool	PhoneBook::add_to_book(int i){
	return (phone_num[i].add_cnt());
}

void	PhoneBook::print(int i){

		phone_num[i].print();
}

bool	PhoneBook::search(std::string c)
{
	if (atoi(c.c_str()) < 1 && atoi(c.c_str()) > 8)
		return false;
	print(atoi(c.c_str()));
	return true;
}

PhoneBook::~PhoneBook(){
	;
}
