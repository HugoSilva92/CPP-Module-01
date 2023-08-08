#include <string>
#include <iostream>

int	main(void){
	std::string real = "HI THIS IS BRAIN";
	std::string *ptr = &real;
	std::string &ref = real;

	std::cout << "The memory adress of the real one is: " << &real << std::endl;
	std::cout << "The memory adress of the pointer is: " << ptr << std::endl;
	std::cout << "The memory adress of the reference is: " << &ref << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "The value of the real one is: " << real << std::endl;
	std::cout << "The value of the pointer is: " << *ptr << std::endl;
	std::cout << "The value of the reference is: " << ref << std::endl;
}
