#include "Zombie.hpp"

//This time I've learned how to make an array of objects, allocating memory.

Zombie* zombieHorde(int N, std::string name){
	Zombie *ptr = new Zombie[N];

	for (int i = 0; i < N; i++)
		ptr[i].ptrChange(name);
	return ptr;
}
