#include "Zombie.hpp"
#define <iostream>

int	main(void){
	Zombie *ptr;
	int	i;
	std::string name;

	std::cout << "How Many Zombies You Want In Your Horde?" << std::endl;
	std::cin >> i;
	std::cout << "What's the name for them?" << std::endl;
	std::cin >> name;

	ptr = zombieHorde(i , name);
	for (int j = 0; j < i; j++)
		ptr[j].announce();
	delete[] ptr;
}
