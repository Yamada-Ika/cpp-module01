#include <fstream>
#include <iostream>

#include "Sed.hpp"

int validate(int argc, char *argv[]) {
    if (argc != 4
        || argv == NULL
        ) {
        return 1;
    }
    for (int i = 0; i < argc; i++) {
        if (argv[i] == NULL) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (validate(argc, argv) != 0) {
        return (1);
    }
    Sed sed(argv[1], argv[2], argv[3]);
    sed.replace();
    return 0;
}
