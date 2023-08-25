#include "Zombie.hpp"

int	main(void){
	Zombie *ptr;

	ptr = newZombie("Zombie pointer");
	ptr->announce();
	randomChump("randomChump Zombie");

	//First time using delete so we can free the memory from the new
	delete(ptr);
	return 0;
}
