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

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = other.type;
}

Animal& Animal::operator= (const Animal &other)
{
	std::cout << "Animal Copy assignment constructor called" << std::endl;
	if (this->type != other.type)
		this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound?" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
