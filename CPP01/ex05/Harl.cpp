#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

 void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
void   Harl::complain(std::string level) {
	std::string	_table[4];
	void		(Harl::*fun_ptr[4])(void);

	_table[0] = "DEBUG";
	_table[1] = "INFO";
	_table[2] = "WARNING";
	_table[3] = "ERROR";

	fun_ptr[0] = &Harl::debug;
	fun_ptr[1] = &Harl::info;
	fun_ptr[2] = &Harl::warning;
	fun_ptr[3] = &Harl::error;

	for (int i = 0; i < 4; i++) {
		if (level == _table[i])
			(this->*fun_ptr[i])();
	}
	return;
}
