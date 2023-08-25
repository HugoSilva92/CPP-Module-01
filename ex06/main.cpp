#include "Harl.hpp"

//Till now could't use switch statements, the problem here was with the compiler at home
//it gave me fall through, had to change the makefile to clang so the error disappeared.
//The rest is the exat same thing as the exercise before.

void	see_complain(Harl teste, std::string level){
	int i;

	i = teste.see_index(level);
	switch (i){
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
			break;
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			teste.complain("debug");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			teste.complain("info");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			teste.complain("warning");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			teste.complain("error");
			std::cout << std::endl;
	}
}

int	main(int ac, char **av){
	Harl teste;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	else
		see_complain(teste, av[1]);
	return 0;
}
