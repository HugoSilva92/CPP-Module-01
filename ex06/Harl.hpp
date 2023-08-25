#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl{
	public:
		Harl();
		void	complain(std::string level);
		int		see_index(std::string level);
		~Harl();
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

typedef void(Harl::*func)();
void	see_complain(Harl teste, std::string level);

#endif
