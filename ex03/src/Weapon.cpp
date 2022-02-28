#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type_(type) {}

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {}

const std::string& Weapon::getType(void) {
  return type_;
}

void Weapon::setType(std::string type) {
  type_ = type;
}
