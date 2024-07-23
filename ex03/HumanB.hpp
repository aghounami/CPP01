#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(const std::string& humanName);
    void setWeapon(Weapon& newWeapon);
    void attack() const;
};

#endif