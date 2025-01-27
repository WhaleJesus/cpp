/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:03:42 by sklaps            #+#    #+#             */
/*   Updated: 2025/01/21 15:11:21 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int	main(int ac, char **av)
{
	string	s;

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
	cout << s;
	return (0);
}
