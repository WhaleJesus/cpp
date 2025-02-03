#include "Zombie.hpp"

Zombie::Zombie(std::string zombiename)
{
	this->name = zombiename;
	std::cout << this->name << " has been created." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " Has been destroyed." << std::endl;
}
