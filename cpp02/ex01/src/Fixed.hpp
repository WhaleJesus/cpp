/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:45:41 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/14 17:45:44 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"
class Fixed{
	
	private:
		int 			 	fixed_point;
		static const int	fractional = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed(const int i);
		Fixed(const float i);
		Fixed &operator= (const Fixed& other);
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
