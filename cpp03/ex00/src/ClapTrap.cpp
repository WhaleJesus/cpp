/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:48:43 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/18 16:48:45 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	_name = "John Pork haha funny";
	_health = 10;
	_energy = 10;
	_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with custom name called" << std::endl;
	_name = name;
	_health = 10;
	_energy = 10;
	_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called\n";
	_name = other._name;
	_health = other._health;
	_energy = other._energy;
	_damage = other._damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment constructor called\n";
	if (this != &other)
	{
		_name = other._name;
		_health = other._health;
		_energy = other._energy;
		_damage = other._damage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy <= 0)
	{
		std::cout << _name << " has no energy\n";
		return ;
	}
	_energy--;
	if (_health > 0)
		std::cout << _name << " attacks " << target << " and deals " << _damage << " damage " << std::endl;
	else {
		std::cout << _name << " cannot attack due to being dead" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_health > 0)
	{
		_health -= amount;
		std::cout << _name << " takes " << amount << " damage, " << _health << "HP remaining" << std::endl;
	}
	else
	{
		std::cout << _name << " is already dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= 0)
	{
		std::cout << _name << " has no energy\n";
		return ;
	}
	_energy--;
	if (_health > 0)
	{
		_health += amount;
		std::cout << _name << " repairs " << amount << " health" << std::endl;
	}
	else {
		std::cout << _name << " is dead and cannot be repaired" << std::endl;
	}
}
