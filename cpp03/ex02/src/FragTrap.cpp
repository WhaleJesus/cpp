/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:04:49 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/18 18:04:50 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    _name = "Unnamed Frag";
    _health = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "FragTrap named constructor called" << std::endl;
    _name = name;
    _health = 100;
    _energy = 100;
    _damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_health > 0)
        std::cout << "FragTrap " << _name << " blasts " << target << ", causing "
                  << _damage << " explosive damage!" << std::endl;
    else
        std::cout << "FragTrap " << _name << " is destroyed and cannot attack!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " says: High five, guys! 🙌" << std::endl;
}

