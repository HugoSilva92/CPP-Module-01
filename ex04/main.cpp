#include "replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Wrong number of arguments!" << std::endl;
	else
		replace(av);
}
