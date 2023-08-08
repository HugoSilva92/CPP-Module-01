#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weaponB(NULL), _name(name){
	;
}

void	HumanB::attack(){
	std::cout << _name << " attacks withe their " << _weaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type){
	_weaponB = &type;
}

HumanB::~HumanB(){
	;
}
