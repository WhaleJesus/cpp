#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
	this->count = 0;
}

void	PhoneBook::add()
{
	string	*out = {"First name", "Last name", "Nickname", "Phone Number", "Your darkest secret"};
	string	in[5];
	int		i = 0;
	int		j;

	while (out[i])
	{
		std::cout << out[i] << ": ";
		std::getline(std::cin, in[i]);
		std::cout << std::endl;
		j = 0;
		while (in[i][j])
			j++;
		if (j < 1)
			return ;
		i++;
	}
	this->count++;
	if (this->count == 8)
		this->count = 0;
	if (this->i < 8)
		this->i++;
	Contact contact(in[0], in[1], in[2], in[3], in[4]);
	this->contactList[this->count] = contact;
}

void	PhoneBook::search()
{
	int		i = 1;
	int		index = 0;
	string	*contact;
	string	*out = {"First name", "Last name", "Nickname", "Phone Number", "Darkest secret"};

	while (index < 1 || index > 8 )
	{
		std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
		while (i <= this->i)
			this->contactList[i - 1].displaySimple(i);
		std::cout << "index: ";
		std::cin >> index;
		if (index < 1 || index > 8)
			std::cout << "Wrong input" << std::endl;
	}
	contact = this->contactList[index-1].getContact();
	i = 0;
	while (out[i])
	{
		std::cout << out[i] << ": " << contact[i] << std::endl;
		i++;
	}
	std::cout << "Press enter to continue...";
	std::cin >> contact;
}

void	PhoneBook::exit()
{
	exit(1);
}
