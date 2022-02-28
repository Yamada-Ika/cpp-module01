#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
 private:
    std::string name_;
    Weapon *weapon_;
  
 public:
    HumanB(std::string name);
    HumanB();
    ~HumanB(void);
    void attack(void);
    void setWeapon(Weapon &weapon);
};

#endif
