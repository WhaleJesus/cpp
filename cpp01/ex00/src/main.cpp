#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie;
	
	zombie = newZombie("ass");
	randomChump("randomChump");

	delete zombie;
}
