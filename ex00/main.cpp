#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << _name << " is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " is dead" << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name )
{
    return new Zombie(name);
}

void randomChump( std::string name )
{
    Zombie zombie1 = Zombie(name);
    zombie1.announce();
}


int main()
{
    Zombie* zombie1 = newZombie("Zombie1");
    randomChump("Zombie2");
    delete zombie1;
    return 0;
}
