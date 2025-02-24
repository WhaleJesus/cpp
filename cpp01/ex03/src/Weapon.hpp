/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <sklaps@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:30:09 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/19 18:01:37 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string	_attr;
	public:
		Weapon();
		Weapon(std::string attr);
		~Weapon();
		const	std::string& getType() const;
		void	setType(std::string attr);
};

#endif
