#include "Zombie.hpp"

int	main(void){
	Zombie *ptr;
	Zombie zon = Zombie("Class Zombie");

	zon.announce();
	ptr = newZombie("Zombie pointer");
	ptr->announce();
	randomChump("randomChump Zombie");
	delete(ptr);
}
