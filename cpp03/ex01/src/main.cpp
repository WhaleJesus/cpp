/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:48:11 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/18 16:48:12 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap mark = ClapTrap("Mark");
	ClapTrap dennis = ClapTrap();
	ScavTrap hank = ScavTrap("Hank");

	mark.attack("enemy");
	dennis.takeDamage(2);
	dennis.beRepaired(15);
	dennis.takeDamage(200);
	dennis.beRepaired(15);
	dennis.attack("enemy");

	hank.takeDamage(15);
	hank.attack("blorgleblorhle");
	hank.beRepaired(35);
	hank.guardGate();
	hank.takeDamage(999);
	hank.beRepaired(15);
}
