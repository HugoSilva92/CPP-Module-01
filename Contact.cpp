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

	std::cout << "First name: \n";
	getline(std::cin, f_name);
	if (f_name.length() == 0)
		return false;
	std::cout << "Last name: \n";
	getline(std::cin, l_name);
	if (l_name.length() == 0)
		return false;
	std::cout << "Nickname: \n";
	getline(std::cin, n_name);
	if (n_name.length() == 0)
		return false;
	std::cout << "Phone Number: \n";
	getline(std::cin, ph_num);
	if (ph_num.length() == 0)
		return false;
	std::cout << "Dark Secret: \n";
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

void	Contact::print()
{
	std::cout << first_name << "\n";
	std::cout << last_name << "\n";
	std::cout << nickname << "\n";
	std::cout << num << "\n";
	std::cout << darkest_secret << "\n";
}

Contact::~Contact()
{
	;
}
