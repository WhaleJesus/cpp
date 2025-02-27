/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:14:46 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:14:47 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie* horde;

	horde = new Zombie[N];
    
	for (int i = 0; i < N; i++) {
        horde[i] = Zombie(name);
    }

    return horde;
}
