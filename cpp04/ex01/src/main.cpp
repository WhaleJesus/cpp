/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:54:33 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/21 15:54:34 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog bruh;
	{
		Dog tmp = bruh;
	}

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* x = new WrongAnimal();
	const WrongAnimal* z = new WrongCat();
	

	std::cout << "type: " << j->getType() << " " << std::endl;
	std::cout << "type: " <<  i->getType() << " " << std::endl;
	std::cout << "type: " <<  x->getType() << " " << std::endl;
	std::cout << "type: " <<  z->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	x->makeSound();
	z->makeSound();

	delete meta;
	delete i;
	delete j;
	delete x;
	delete z;

	return 0;
}
