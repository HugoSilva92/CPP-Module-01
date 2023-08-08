#include "replace.hpp"

void	replace(char **av){
	std::ofstream fs;
	fs.open(av[1]);
	fs << "ola\n";
	fs.close();
}
