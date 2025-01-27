#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
	public:
		Contact();
		void	add_contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string secret);
		void	displaySimple(int index);
		void	displayBig();	
	
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secret;
};

#endif
