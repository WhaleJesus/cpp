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
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = other.getRawBits();
}

Fixed::Fixed(const int i)
{
	std::cout <<  "Int constructor called" << std::endl;
	this->fixed_point = i << this->fractional;
}

Fixed::Fixed(const float i)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf(i * 256);
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this->fixed_point != other.fixed_point)
	{
		this->fixed_point = other.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

bool Fixed::operator>(const Fixed& other) const
{
    return fixed_point > other.fixed_point;
}

bool Fixed::operator<(const Fixed& other) const
{
    return fixed_point < other.fixed_point;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return fixed_point >= other.fixed_point;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return  fixed_point <= other.fixed_point;
}

bool Fixed::operator==(const Fixed& other) const
{
    return fixed_point == other.fixed_point;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return fixed_point != other.fixed_point;
}

Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(fixed_point + other.fixed_point);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(fixed_point - other.fixed_point);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    // Multiply raw values, then shift back down
    long long mul = static_cast<long long>(fixed_point) * other.fixed_point;
    result.setRawBits(static_cast<long>(mul >> fractional));
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    // Shift numerator up before dividing to keep precision
    long long dividend = (static_cast<long long>(fixed_point) << fractional);
    result.setRawBits(static_cast<long>(dividend / other.fixed_point));
    return result;
}

// Pre-increment
Fixed& Fixed::operator++() {
    fixed_point += 1; // 1 is the smallest ϵ in fixed-point
    return *this;
}

// Post-increment
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    fixed_point += 1;
    return temp;
}

// Pre-decrement
Fixed& Fixed::operator--() {
    fixed_point -= 1;
    return *this;
}

// Post-decrement
Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    fixed_point -= 1;
    return temp;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(fixed_point) / (1 << fractional);
}

int	Fixed::toInt(void) const
{
	return fixed_point >> fractional;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a.getRawBits() > b.getRawBits()) ? a : b;
}
