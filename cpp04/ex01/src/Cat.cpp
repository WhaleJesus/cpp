/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:06:19 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/21 16:06:20 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = other.getType();
	_brain = new Brain(*(other._brain));
}

Cat& Cat::operator= (const Cat& other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this->type != other.type)
		this->type = other.getType();
	delete _brain;
	_brain = new Brain(*(other._brain));
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
