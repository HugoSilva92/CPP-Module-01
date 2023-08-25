#include "Zombie.hpp"

int	main(void){
	Zombie *ptr;
	int	i;
	std::string name;

	std::cout << "How Many Zombies You Want In Your Horde?" << std::endl;
	std::cin >> i;
	std::cout << "What's the name for them?" << std::endl;
	std::cin >> name;
	if (i < 0 || name.empty())
		return 1;
	ptr = zombieHorde(i , name);
	for (int j = 0; j < i; j++)
		ptr[j].announce();

	//Here is the way to free all the array at one call.
	delete[] ptr;
	return 0;
}
