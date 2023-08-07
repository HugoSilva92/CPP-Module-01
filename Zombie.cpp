#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Enter the name of the Zombie: ";
	getline(std::cin, _name);
}

void	Zombie::announce(void){
	std::cout << _name << std::endl;
}

Zombie::~Zombie(){
	std::cout << "The name of the zombie killed is : " << _name;
}
