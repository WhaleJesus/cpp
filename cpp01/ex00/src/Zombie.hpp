/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:13:52 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:13:54 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string zombiename);
		~Zombie(void);
		void	announce(void);
	private:
		std::string	name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
#endif
