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

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.getType();
	delete _brain;
	_brain = new Brain(*(other._brain));
}

Dog& Dog::operator=(const Dog& other)
{
	if (this->type != other.type)
		this->type = other.getType();
	delete _brain;
	_brain = new Brain(*(other._brain));
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog desturctr called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof woof aaaaaaahhhhh bferwafgrsag" << std::endl;
}
