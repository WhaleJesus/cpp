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

#include <iostream>
#include <fstream>
#include <string>

#include "Output.hpp"

std::string replace_all(std::string str, const std::string& find, const std::string& replace)
{
	if (find.empty() || find == replace)
		return str;
	std::size_t pos = 0;
	while ((pos = str.find(find, pos)) != std::string::npos)
	{
		str.replace(pos, find.length(), replace);
		pos += replace.length(); // move past the newly inserted replacement
	}
	return str;
}

void	program(char **av)
{
	Output cOutput = Output();
	std::size_t		found = 0;
	std::string		find;
	std::string		replace;
	std::string		output;
	std::string		line;
	std::string		filename;
	
	filename = av[1];
	std::ifstream fileRead (filename.c_str());
	if (!fileRead.is_open())
	{
		std::cout << "Unable to open file" << std::endl;
		return ;
	}
	while ( std::getline(fileRead, line))
	{
		output.append(line);
		output.append("\n");
	}
	cOutput.setStr(output);
	find = av[2];
	replace = av[3];
	found = output.find(find);
	output = replace_all(output, find, replace);
	cOutput.setStr(output);
	filename.append(".replace");
	std::ofstream fileWrite (filename.c_str());
	if (fileWrite.is_open())
		fileWrite << cOutput.getStr();
	else
		std::cout << "unable to write to new file" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac == 4)
		program(av);
  	return 0;
}
