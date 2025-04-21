/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:06:07 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/21 16:06:08 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& other);
		Cat& operator= (const Cat& other);
		~Cat();
		void	makeSound(void);
}
