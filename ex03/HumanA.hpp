#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
		Weapon &_weaponA;
		std::string _name;
	public:
		HumanA(std::string name, Weapon &type);
		void	attack();
		~HumanA();
};

#endif
