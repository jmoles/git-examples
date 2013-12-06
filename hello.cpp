#include <iostream>
#include <string>
#include <sstream>

std::string GetHelloString(std::string in)
{
	std::stringstream ss;
	ss << "Hello, " << in << "!";
	return ss.str();
}


int main (int argc, char * argv[])
{
	std::string name = "Bob";

	if(argc > 1)
		name = argv[1];

	std::cout << GetHelloString(name) << std::endl;
}