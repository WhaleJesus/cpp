#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *wombie = new Zombie(name);

	return (wombie);
}
