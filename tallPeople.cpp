#include <iostream>

// Write a function that takes a number (a person's height) and returns "Tall enough" if they are at least 5 feet (60 inches) or "Too short" if they are below 5 feet.

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

	std::cout << "Enter your height" << std::endl;
	std::cin >> myInt;

	heightFunc(myInt);

	return 0;
}
