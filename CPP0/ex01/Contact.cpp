#include "Contact.hpp"

Contact::Contact() 
{


}

Contact::~Contact()
{

}

	std::string  Contact::getFirstName(void) const {
		return this->FirstName;
	}

    void	Contact::setFirstName(std::string str) {
		this->FirstName = str;
	}

    std::string Contact::getLastName(void) const {
		return this->LastName;
	}

    void	Contact::setLastName(std::string str) {
		this->LastName = str;
	}

    std::string Contact::getNickName(void) const {
		return this->NickName;
	}

    void	Contact::setNickName(std::string str) {
		this->NickName = str;
	}

    std::string Contact::getNumber(void) const {
		return this->Number;
	}

    void	Contact::setNumber(std::string str) {
		this->Number = str;
	}

    std::string Contact::getDS(void) const {
		return this->DS;
	}

    void	Contact::setDS(std::string str) {
		this->DS = str;
	}	