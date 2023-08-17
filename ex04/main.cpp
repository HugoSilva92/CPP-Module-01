#include "replace.hpp"

int	main(int ac, char **av)
{
	if (ac < 4)
		std::cout << "Not enough arguments!" << std::endl;
	replace(av);
}
