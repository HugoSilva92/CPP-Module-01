#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class	Zombie{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		void	announce(void);
		void	ptrChange(std::string name);
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
