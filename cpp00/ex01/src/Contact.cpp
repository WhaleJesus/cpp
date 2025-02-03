/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:40:14 by sklaps            #+#    #+#             */
/*   Updated: 2025/01/27 19:20:14 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->secret = "";
}

void	Contact::add_contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string secret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->secret = secret;
}

void	Contact::displaySimple(int index)
{
	int		i = 0;
	int		j;
	size_t	len;
	std::string	tmp;
	std::string	arr[3] = {this->firstName, this->lastName, this->nickName};

	while (i < 4)
	{
		if (i == 0)
			tmp = index + '0';
		else 
		{
			tmp = arr[i - 1];
			len = arr[i - 1].length();
			if (len > 9)
			{
				tmp[9] = '.';
				j = 10;
				while (tmp[j])
				{
					tmp[j] = '\0';
					j++;
				}
			}
		}
		std::cout << std::right << std::setw(10) << tmp;
		if (i < 3)
			std::cout << "|";
		else 
			std::cout << std::endl;
		i++;
	}
}

void	Contact::displayBig()
{
	std::string arr[5] = {this->firstName, this->lastName, this->nickName, this->phoneNumber, this->secret};
	std::string out[5] = {"First name: ", "Last name: ", "Nickname: ", "Phone number: ", "Darkest secret: "};
	std::string	input;

	for (int i = 0; i<5; i++)
		std::cout << out[i] << arr[i] << std::endl;
	std::cout << "press enter to continue...";
	std::getline(std::cin, input);
}
