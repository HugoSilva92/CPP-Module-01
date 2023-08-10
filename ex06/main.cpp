#include "Harl.hpp"

int	see_index(std::string level){
	if (level == "debug"){return 0;}
	else if (level == "info"){return 1;}
	else if (level == "warning"){return 2;}
	else if (level == "error"){return 3;}
	return 4;
}

int	see_complain(Harl teste, std::string level){
	int i;

	i = see_index(level);
	switch (i){
		default:
			break;
		case 0:
			teste.complain("debug");
		case 1:
			teste.complain("info");
		case 2:
			teste.complain("warning");
		case 3:
			teste.complain("error");

	}
}

int	main(int ac, char **av){
	Harl teste;

	if (ac < 1 || ac > 2)
		std::cout << "Wrong number of arguments" << std::endl;
	else
		see_complain(teste, av[1]);
}
