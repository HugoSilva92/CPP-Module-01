#include "Zombie.hpp"

//Allocation of memory on the Heap, using new concept for the first time

Zombie* newZombie(std::string name){
	Zombie *ptr;

	ptr = new Zombie(name);
	return ptr;
}
