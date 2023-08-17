#include "replace.hpp"

std::string	change_ocurrences(std::string arg, std::string line, std::string str)
{
	std::string buffer;
	std::size_t prevPos, pos = 0;

	while (true)
	{
		prevPos = pos;
		pos = arg.find(line, pos);
		if (pos == std::string::npos)
			break;
		buffer.append(arg, prevPos, pos - prevPos);
		buffer += str;
		pos += line.size();
	}
	buffer.append(arg, prevPos, arg.size() - prevPos);
	return buffer;
}

void	replace(char **av){
	std::ofstream	out;
	std::ifstream	in;
	std::string	name, line, arg, toReplace;

	toReplace = av[2];
	arg = av[3];
 	in.open(av[1]);
	if (in.is_open())
	{
		name = av[1];
		name.append(".replace");
		out.open(name.c_str());
		while(std::getline(in, line))
		{
			line = change_ocurrences(line, toReplace, arg);
			out << line << std::endl;
		}
		in.close();
		out.close();
	}
	else{
		std::cout << "Error!" << std::endl;
	}
}
