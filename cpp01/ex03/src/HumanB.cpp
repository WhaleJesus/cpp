/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:50:30 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/19 18:08:06 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void setWeapon(Weapon &weapon)
{
	_weapon = weapon;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
