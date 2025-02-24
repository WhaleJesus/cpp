/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:42:09 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/19 18:00:49 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string attr)
{
	_attr = attr;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string attr)
{
	_attr = attr;
}

const std::string &Weapon::getType() const
{
	return _attr;
}
