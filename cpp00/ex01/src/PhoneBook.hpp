#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook()
{
	public:
		PhoneBook();
		void	add();
		void	delete();
		void	search();
	
	private:
		Contact contactList[8];
		int		count;
		int		i;
}

#endif
