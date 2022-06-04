#ifndef SED_HPP
# define SED_HPP

#include <string>

class Sed {
 private:
    std::string filepath_;
    std::string s1_;
    std::string s2_;
 public:
    Sed(const std::string &filepath, const std::string &s1, const std::string &s2);
    void replace(void);
};

# endif
