/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sklaps <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:17:34 by sklaps            #+#    #+#             */
/*   Updated: 2025/02/27 17:17:36 by sklaps           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_HPP
# define OUTPUT_HPP

#include <string>

class Output
{
	private:
		std::string	_str;
		int			_index;
	public:
		Output();
		void		setStr(std::string s);
		void		setIndex(int i);
		std::string	getStr();
		int			getIndex();
};
#endif
