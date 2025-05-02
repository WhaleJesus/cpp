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

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->type = other.getType();
}

WrongCat& WrongCat::operator= (const WrongCat& other)
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this->type != other.type)
		this->type = other.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}
