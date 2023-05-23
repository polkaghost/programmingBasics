#include <iostream>

int heightFunc(int element);

int heightFunc(int element){
	 if(element >= 60){
		 std::cout << "Tall enough" << std::endl;
                }

         else{
		 std::cout << "Too short" << std::endl;
                }
	 return element;
}

int main()
{
	int myInt;

	std::cout << "Enter your height"<< std::endl;
	std::cin >> myInt;

	heightFunc(myInt);

	return 0;
}
