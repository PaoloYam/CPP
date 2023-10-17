#include "PhoneBook.hpp"
#include "main.h"

PhoneBook::PhoneBook() {
	this->_nbr_contact = 0;
	this->_total_contact = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::get_info(std::string *str, std::string s) {
	str->clear();
	while (str->empty())
	{
		std::cout << s;
		getline(std::cin, *str, '\n');	
	}
}

void	PhoneBook::add(void)
{
	std::string	str;

	if (this->_total_contact == 0 || this->_total_contact == 1)
		std::cout << "Let's add a new contact, you currently have " << this->_total_contact << " contact" << std::endl;
	else 
		std::cout << "Let's add a new contact, you currently have " << this->_total_contact << " contacts" << std::endl;
	get_info(&str, "Enter your First Name: ");
	this->_All_Contact[_nbr_contact % 8].setFirstName(str);
	get_info(&str, "Enter your Last Name: ");
	this->_All_Contact[_nbr_contact % 8].setLastName(str);
	get_info(&str, "Enter your Nick Name: ");
	this->_All_Contact[_nbr_contact % 8].setNickName(str);
	get_info(&str, "Enter your Number: ");
	this->_All_Contact[_nbr_contact % 8].setNumber(str);
	get_info(&str, "Enter your Darkest Secret: ");
	this->_All_Contact[_nbr_contact % 8].setDS(str);
	this->_nbr_contact += 1;
	if (this->_total_contact == 8)
	{
		std::cout << "Max size has been reached, last contact will be replaced" << std::endl;
		this->_total_contact = 8;
	}
	else
		this->_total_contact += 1;
	if (this->_total_contact == 0 || this->_total_contact == 1)
		std::cout << "Your contact has been added, you currently have " << this->_total_contact << " contact" << std::endl;
	else 
		std::cout << "Your contact has been added, you currently have "  << this->_total_contact << " contacts" << std::endl;
}

void	PhoneBook::print_contact(int i) {
	std::cout << "║" << std::setw(10);
	std::cout << i + 1;
	std::cout << "║" << std::setw(10);
	if (this->_All_Contact[i].getFirstName().length() > 10)
		std::cout << this->_All_Contact[i].getFirstName().substr(0,9).append(".");
	else
		std::cout << this->_All_Contact[i].getFirstName();
	std::cout << "║" << std::setw(10);	
	if (this->_All_Contact[i].getLastName().length() > 10)
		std::cout << this->_All_Contact[i].getLastName().substr(0,9).append(".");
	else
		std::cout << this->_All_Contact[i].getLastName();
	std::cout << "║" << std::setw(10);	
	if (this->_All_Contact[i].getNickName().length() > 10)
		std::cout << this->_All_Contact[i].getNickName().substr(0,9).append(".");
	else
		std::cout << this->_All_Contact[i].getNickName();
	std::cout << "║" << std::endl;
	if (i != this->_total_contact - 1)
		std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;


}


void	PhoneBook::search(void) {
	std::string index;	
	int	dex;

	dex = 0;
	std::cout << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
	std::cout << "║  Index   ║First Name║Last Name ║ Nickname ║" << std::endl;
	std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
	for (int i = 0; i < this->_total_contact; i++)
		print_contact(i);
	std::cout << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;
	std::cout << "Enter the index : ";
	getline(std::cin, index, '\n');
	if (index.empty())
	{
		std::cout << "Wrong Index" << std::endl;
		return;
	}
	dex = atoi(index.c_str());
	if (!dex)
	{
		std::cout << "Wrong Index" << std::endl;
		return;
	}	
	if (dex > this->_total_contact || dex < 1 || dex > 8)
	{
		std::cout << "Wrong index" << std::endl; 
		return;
	}
	std::cout << "First Name : " << this->_All_Contact[dex - 1].getFirstName() << std::endl;
	std::cout << "Last Name : " << this->_All_Contact[dex - 1].getLastName() << std::endl;
	std::cout << "Nick Name : " << this->_All_Contact[dex - 1].getNickName() << std::endl;
	std::cout << "Number : " << this->_All_Contact[dex - 1].getNumber() << std::endl;
	std::cout << "Darkest Secret : " << this->_All_Contact[dex - 1].getDS() << std::endl;
}
