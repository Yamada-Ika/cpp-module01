#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {
 private:
    std::string name_;
    const Weapon& weapon_;

 public:
    explicit HumanA(std::string name, const Weapon &weapon);
    ~HumanA(void);
    void attack(void) const;
};

#endif
