#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string zombiename);
		~Zombie(void);
		void	announce(void);
	private:
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);
#endif
