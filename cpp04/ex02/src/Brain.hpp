/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:18:33 by sklaps            #+#    #+#             */
/*   Updated: 2025/04/30 15:18:35 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
	private:

	public:
		Brain();
		Brain(const Brain& other);
		Brain& operator= (const Brain& other);
		virtual ~Brain();

		std::string _ideas[100];
};
