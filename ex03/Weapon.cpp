#include "Weapon.hpp"

Weapon::Weapon(const std::string& _type) {
    this->type = _type;
}

const std::string& Weapon::getType() {
    return type;
}

void Weapon::setType(const std::string& newType) {
    type = newType;
}