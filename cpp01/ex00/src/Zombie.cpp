/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:13:29 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:13:30 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
