#include "Zombie.hpp"

Zombie::Zombie(){
	return;
}

Zombie::Zombie(std::string name){
	_name = name;
}

void	Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "The name of the zombie killed is : " << _name << std::endl;
}
