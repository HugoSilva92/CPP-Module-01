#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

/* enum Options{
	op1,
	op2,
	op3,
	op4,
}; */

class Harl{
	public:
		Harl();
		void	complain(std::string level);
		~Harl();
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

int	see_complain(Harl teste, std::string level);

#endif
