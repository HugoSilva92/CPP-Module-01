#include "PhoneBook.hpp"

int	main(){
	PhoneBook book;
	std::string cmd;
	int	i = 0;
	std::string	src;

	while (1)
	{
		std::cout << "What is your command Master?\n";
		getline(std::cin, cmd);
		if (cmd == "break")
			break;
		if (cmd == "ADD")
		{
			if(!book.add_to_book(i))
				std::cout << "Something went wrong with your input!\n";
			i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH")
		{
			std::cout << "What is the index of the Contact that you're looking?\n";
			getline(std::cin, src);
			if (!book.search(src))
				std::cout << "Wrong value for index, only numbers between 1 and 8";
		}
	}
	book.print();
}
