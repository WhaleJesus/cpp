/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:06:22 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 13:06:24 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl myHarl = Harl();

	if (ac == 2)
		myHarl.complain(av[1]);
	else
		std::cout << "please provide level: info, debug, warning, error" << std::endl;
  	return 0;
}
