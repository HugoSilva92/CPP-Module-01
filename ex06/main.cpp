#include "Harl.hpp"

int	see_index(std::string level){
	if (level == "DEBUG"){return 0;}
	else if (level == "INFO"){return 1;}
	else if (level == "WARNING"){return 2;}
	else if (level == "ERROR"){return 3;}
	return 4;
}

void	see_complain(Harl teste, std::string level){
	int i;

	i = see_index(level);
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

	if (ac < 1 || ac > 2)
		std::cout << "Wrong number of arguments" << std::endl;
	else
		see_complain(teste, av[1]);
}
