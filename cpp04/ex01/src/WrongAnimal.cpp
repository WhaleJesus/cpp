/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:42:43 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/21 16:42:44 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = other.type;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy assignment constructor called" << std::endl;
	if (this->type != other.type)
		this->type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound?" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}
