/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:40:27 by sklaps            #+#    #+#             */
/*   Updated: 2025/01/27 19:17:49 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
	this->count = 0;
	for (int i = 0; i < 8; i++)
		this->contactList[i] = Contact();
}

void	PhoneBook::add()
{
	std::string	out[5] = {"First name", "Last name", "Nickname", "Phone Number", "Your darkest secret"};
	std::string	in[5];
	int		i = 0;
	int		j;

	while (i < 5)
	{
		std::cout << out[i] << ": ";
		std::getline(std::cin, in[i]);
		j = 0;
		while (in[i][j])
			j++;
		if (j < 1)
			return ;
		i++;
	}
	this->contactList[this->count].add_contact(in[0], in[1], in[2], in[3], in[4]);
	this->count++;
	if (this->count == 8)
		this->count = 0;
	if (this->i < 8)
		this->i++;
}

void	PhoneBook::search()
{
	int		i;
	int		index = 0;
	std::string	contact;
	std::string	out[5] = {"First name", "Last name", "Nickname", "Phone Number", "Darkest secret"};

	while (index < 1 || index > this->i)
	{
		system("clear");
		i = 1;
		std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
		while (i <= this->i)
		{
			this->contactList[i - 1].displaySimple(i);
			i++;
		}
		if (this->i < 1)
			break ;
		std::cout << "index: ";
		std::getline(std::cin, contact);
		if (contact[0] > 48 && contact[0] < 57 && contact.length() == 1)
		{
			index = contact[0] - '0';
			if (index > 0 && index <= this->i)
				this->contactList[index - 1].displayBig();
			else 
				index = 0;
		}
		//std::cout << index << std::endl;
	}
}
