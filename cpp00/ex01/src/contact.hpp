#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
	public:
		Contact(string firstName, string lastName, string nickName, string phoneNumber, string secret);
		void	setContact(string firstName, string lastName, string nickName, string phoneNumber, string secret);
		string	*getContact();
	
	private:
		string c_firstName;
		string c_lastName;
		string c_nickName;
		string c_phoneNumber;
		string c_secret;
};

#endif
