/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:42:54 by sklaps            #+#    #+#             */
/*   Updated: 2025/01/27 19:08:04 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	my_toupper(std::string option)
{
	int	len;

	len = option.length();
	for (int i = 0; i < len; i++)
		option[i] = toupper(option[i]);
	return (option);
}

int	main(void)
{
	std::string display = "Welcome to my very cool Phonebook!\n----------------------------------\noptions:\n\n1: ADD\n2: SEARCH\n3: EXIT\nYour choice: ";
	std::string	option = "";
	PhoneBook pb;

	pb = PhoneBook();
	while (option.compare("EXIT"))
	{
		system("clear");
		std::cout << display;
		std::getline(std::cin, option);
		//option = my_toupper(option);
		if (!option.compare("ADD"))
			pb.add();
		else if (!option.compare("SEARCH"))
			pb.search();
		//std::cout << option;
	}
	return (0);
}
