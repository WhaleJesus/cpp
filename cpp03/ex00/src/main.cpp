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

int main(void)
{
	ClapTrap mark = ClapTrap("Mark");
	ClapTrap dennis = ClapTrap();

	mark.attack("enemy");
	dennis.takeDamage(2);
	dennis.beRepaired(15);
	dennis.takeDamage(200);
	dennis.beRepaired(15);
	dennis.attack("enemy");
}
