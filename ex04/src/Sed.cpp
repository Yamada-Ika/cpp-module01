#include "Sed.hpp"

#include <fstream>
#include <iostream>

Sed::Sed(const std::string &filepath, const std::string &s1, const std::string &s2) {
    filepath_ = filepath;
    s1_ = s1;
    s2_ = s2;
}

static std::ifstream open(const std::string &path) {
    std::ifstream ifs(path);
    if (ifs.fail()) {
        std::cerr << "Error: Failed to open file" << std::endl;
        std::exit(1);
    }
    return ifs;
}

static void write(const std::string &path, const std::string &content) {
    std::ofstream ofs(path);
    if (ofs) {
        ofs << content;
    }
    if (ofs.bad()) {
        std::cerr << "Error: Failed to write to file" << std::endl;
        std::exit(1);
    }
}

void Sed::replace(void) {
    std::ifstream ifs = open(filepath_);
    std::string readline = "", replaced = "";

    while (std::getline(ifs, readline)) {
        size_t pos, idx = 0;
        while ((pos = readline.find(s1_, idx)) != std::string::npos) {
            replaced += readline.substr(idx, s1_.size()) + s2_;
            idx = pos + s1_.size();
        }
    }

    write(filepath_ + ".replace", replaced + "\n");
}
