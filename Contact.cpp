#include "Contact.hpp"

Contact::Contact(){
	;
}

bool	Contact::add_cnt(){
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string ph_num;
	std::string dk_sec;

	std::cout << "First name: ";
	getline(std::cin, f_name);
	if (f_name.length() == 0)
		return false;
	std::cout << "Last name: ";
	getline(std::cin, l_name);
	if (l_name.length() == 0)
		return false;
	std::cout << "Nickname: ";
	getline(std::cin, n_name);
	if (n_name.length() == 0)
		return false;
	std::cout << "Phone Number: ";
	getline(std::cin, ph_num);
	if (ph_num.length() == 0)
		return false;
	std::cout << "Dark Secret: ";
	getline(std::cin, dk_sec);
	if (dk_sec.length() == 0)
		return false;

	first_name = f_name;
	last_name = l_name;
	nickname = n_name;
	num = ph_num;
	darkest_secret = dk_sec;
	return true;
}

std::string	Contact::resize_string(std::string str)
{
	if(str.size() > 9)
	{
		str.resize(9);
		str.append(".");
	}
	return str;
}

void	Contact::print()
{
	first_name = resize_string(first_name);
	last_name = resize_string(last_name);
	nickname = resize_string(nickname);
	num = resize_string(num);
	darkest_secret = resize_string(darkest_secret);
	std::cout << "-------------------------------------------------------\n";
	std::cout << "|FirstName| Last Name|  Nickname|    Number|DarkSecret|\n";
	std::cout << "-------------------------------------------------------\n";
	std::cout << first_name << "|";
	//std::cout << "Last Name: ";
	std::cout << last_name << "|";
	//std::cout << "Nickname: ";
	std::cout << nickname << "|";
	//std::cout << "Number: ";
	std::cout << num << "|";
	//std::cout << "Darkest Secret: ";
	std::cout << darkest_secret << "|";
}

Contact::~Contact()
{
	;
}
