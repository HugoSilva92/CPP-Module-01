#include "replace.hpp"

//This was the best way that I ve found to search and replace strings.
//So while the pos is runnig, find is searching for the string,
//the it appends to the buffer that is currentlly empty and then puts the string to replace to the buffer.
//When the pos hits the npos(max of the string) it breaks and appends the rest of the string.

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

//Here I've learned the c++ way to open and read files

int	replace(char **av){
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
		while(std::getline(in, line))							//with the getline(), it allways goes till it finds a new line or null
		{														//that way the file is going to be read till the end.
			line = change_ocurrences(line, toReplace, arg);
			out << line << std::endl;
		}
		in.close();
		out.close();
		return 0;
	}
	else{
		std::cout << "Error!" << std::endl;
		return 1;
	}
}
