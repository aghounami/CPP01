#include "HumanB.hpp"

HumanB::HumanB(const std::string& humanName)  :name(humanName), weapon(NULL) {
}

void HumanB::setWeapon(Weapon& newWeapon) {
    this->weapon = &newWeapon;
}

void HumanB::attack() const{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}

