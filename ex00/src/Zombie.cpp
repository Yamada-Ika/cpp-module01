#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string name) : name_(name) {}

Zombie::Zombie() {}

Zombie::~Zombie() {
  std::cout << name_ + ": deleted" << std::endl;
}

void Zombie::announce(void) {
  std::cout << name_ + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
