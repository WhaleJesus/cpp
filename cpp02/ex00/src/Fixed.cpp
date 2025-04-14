/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:46:15 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/14 17:46:16 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixed_point = 0;
}

Fixed::Fixed(const Fixed& other)
{
	this->fixed_point = other.fixed_point;
}

Fixed::&operator=(const Fixed& other)
{
	if (this->fixed_point != other.fixed_point)
	{
		this->fixed_point = other.fixed_point;
	}
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
}
