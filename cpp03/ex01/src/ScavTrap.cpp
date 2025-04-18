/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:54:33 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/18 17:54:34 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    _name = "Default ScavTrap";
    _health = 100;
    _energy = 50;
    _damage = 20;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap named constructor called" << std::endl;
    _name = name;
    _health = 100;
    _energy = 50;
    _damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_health > 0) {
        std::cout << "ScavTrap " << _name << " throws hands at " << target
                  << ", dealing " << _damage << " epic damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " is too dead to attack." << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

