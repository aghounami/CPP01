#include "Harl.hpp"

int main(int argc, char const *av[]) {
    if (argc != 2) {
        std::cout << "Usage: [DEBUG|INFO|WARNING|ERROR]" << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain(av[1]);
    return 0;
}