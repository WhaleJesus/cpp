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

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other)
	: Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = other.getType();
}

Cat& Cat::operator= (const Cat& other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this->type != other.type)
		this->type = other.getType();
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
