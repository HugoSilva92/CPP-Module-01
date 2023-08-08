#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *_weaponB;
		std::string _name;
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &_weapon);
		~HumanB();
};

#endif
