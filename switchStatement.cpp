#include <iostream>
#include <string.h>

int main()
{
	char grade;

	std::cout << "Enter your grade" << std::endl;
	std::cin >> grade;

	switch(grade) 
	{
	case 'A' :
		std::cout << "You did great!" << std::endl;
		break;
	case 'B' :
		std::cout << "You did good!" << std::endl;
	        break;
	case 'C' :
		std::cout << "Good effort" << std::endl;
		break;
	case 'D' :
		std::cout << "Needs improvement" << std::endl;
		break;
	case 'F' :
		std::cout << "Come to tutorials" << std::endl;
		break;
	default :
		std::cout << "Invalid Grade";
	}

	return 0;
}
