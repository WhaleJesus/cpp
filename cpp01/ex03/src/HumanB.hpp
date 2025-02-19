/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:02:03 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/19 18:06:29 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif
