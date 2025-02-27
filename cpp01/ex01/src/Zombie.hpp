/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:14:50 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:14:51 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
