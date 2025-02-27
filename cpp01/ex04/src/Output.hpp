
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
