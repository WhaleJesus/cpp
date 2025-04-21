/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:47:36 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/21 15:47:38 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal& operator= (const Animal &other);
		~Animal();
		void makeSound(void);
		std:string getType();
}

#endif
