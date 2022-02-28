#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(std::string name) : name_(name) {
  weapon_ = NULL;
}

HumanB::HumanB() {
  weapon_ = NULL;
}

HumanB::~HumanB(void) {}

void HumanB::attack(void) {
  std::cout << name_ + " attacks with their " + weapon_->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
  weapon_ = &weapon;
}
