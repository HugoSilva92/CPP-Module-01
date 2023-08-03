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
	int	nb = atoi(c.c_str()) - 1;
	if (nb < 0 && nb > 7)
		return false;
	print(nb);
	return true;
}

PhoneBook::~PhoneBook(){
	;
}
