/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:06:31 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/21 16:06:32 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.getType();
}

Dog& Dog::operator=(const Dog& other)
{
	if (this->type != other.type)
		this->type = other.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog desturctr called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof aaaaaaahhhhh bferwafgrsag" << std::endl;
}
