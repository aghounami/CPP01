#include "HumanA.hpp"

HumanA::HumanA(const std::string& humanName, Weapon& initialWeapon) 
    : name(humanName), weapon(initialWeapon)
{}

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}