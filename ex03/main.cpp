#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
int main(){

	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	club.setType("sla7");
	jim.attack();

	return 0;
}
