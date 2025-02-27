/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:17:49 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:17:51 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Harl.hpp"

Harl::Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "DEBUG MESSAGE" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "ifo" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "THIS IS A WARNING" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ErRoR" << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"info", "debug", "warning", "error"};
	void (Harl::*actions[]) () = { &Harl::info, &Harl::debug, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
		{
			(this->*actions[i])();
			return ;
		}
	}
	std::cout << "Not a level" << std::endl;
}
