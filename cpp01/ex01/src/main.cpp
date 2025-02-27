/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:14:41 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:14:42 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int N = 5;
	Zombie* horde;
	
	horde = zombieHorde(N, "ass");
	
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}
