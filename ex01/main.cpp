#include "Zombie.hpp"


Zombie::Zombie()
{
    std::cout << "Zombie 🧟‍♀️ constructor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie" << _name << " destructor called" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

void    Zombie::announce()
{
    std::cout << "      My name is " << _name << std::endl;
}

Zombie* zombieHorde( int N, std::string name )
{
    (void)name;
    Zombie *zombie = new Zombie[N];
    std::cout << "      ------------------" << std::endl;
    for(int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
    }
    return zombie;
}

int main()
{
    Zombie *zombie = zombieHorde(5, " Undead");

    for (int i = 0; i < 5; i++)
    {
       zombie[i].announce();
    }
    delete [] zombie;
    return 0;   
}

