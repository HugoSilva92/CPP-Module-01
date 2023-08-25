#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

//The curly braces inside the main are diferent scopes
//In this exercise I've learned that a pointer can be created as NULL (Jim doesnt has a inicial weapon)
//As a reference can't be a reference to something NULL (Bob weapon is a reference)

int	main(void)
{
	{
		Weapon club = Weapon("Crude spiked club");

		HumanA bob("bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("Crude spiked club");

		HumanB jim("jim");
		jim.attack();									//Extra, this is just to see if Jim doesn't really have a weapon
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
