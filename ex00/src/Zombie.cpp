#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string name) : name(name) {}

Zombie::Zombie() {}

Zombie::~Zombie() {
  std::cout << name + ": deleted" << std::endl;
}

void Zombie::announce( void ) {
  std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
