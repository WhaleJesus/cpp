/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:03:42 by sklaps            #+#    #+#             */
/*   Updated: 2025/01/27 14:47:49 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int ac, char **av)
{
	std::string	s;

	if (ac < 2)
		s = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		av++;
		for (int i = 0; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
				s += toupper(av[i][j]);
			s += ' ';
		}
	}
	s += '\n';
	std::cout << s;
	return (0);
}
