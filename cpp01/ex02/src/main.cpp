/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:16:26 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:16:27 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* sptr = &s;
	std::string& sref = s;

	std::cout << &s << std::endl;
	std::cout << sptr << std::endl;
	std::cout << &sref << std::endl;

	std::cout << s << std::endl;
	std::cout << *sptr << std::endl;
	std::cout << sref << std::endl;
}
