#include "contact.hpp"

Contact::Contact(string firstName, string lastName, string nickName, string phoneNumber, string secret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->secret = secret;
}

string *Contact::getContact()
{
	string *ret = {this->firstName, this->lastName, this->nickName, this->phoneNumber, this->secret};
	return (ret);
}

void	displaySimple(int index)
{
	int		i = 0;
	size_t	len;
	string	tmp;
	string	*arr = {this->firstName, this->lastName, this->nickName};

	while (i < 4)
	{
		if (i == 0)
		 tmp = std::to_string(index);
		else 
		{
			tmp = "";
			len = std::strlen(arr[i]);
			if (len > 9)
			{
				tmp = arr[i];
				tmp[9] = ".";
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
			std::endl;
		i++;
	}
}
