#include "Harl.hpp"



Harl::Harl(){
	;
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

//Well this one was a hard-one, never knew this was even possible,
//A pointer array of functions that point to the reference of each function of Harl class
//Some info: https://stackoverflow.com/questions/5093090/whats-the-syntax-for-declaring-an-array-of-function-pointers-without-using-a-se
//It could be done using typedef too.

//typedef void(Harl::*func)();
//func funct[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

void	Harl::complain(std::string level){
	std::string msg[4] = {"debug", "info", "warning", "error"};
	void (Harl::*fun[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (msg[i] == level)
			(this->*fun[i])();
}

Harl::~Harl(){
	;
}
