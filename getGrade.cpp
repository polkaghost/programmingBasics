#include <iostream>

// Write a function that takes in a numeric grade (0 to 100) and returns the letter grade.

void gradeFunc(int element);

void gradeFunc(int element){
	  if(element >= 90){
                std::cout << "A" << std::endl;
        }
        else if (element == 90 || element >= 80){
                std::cout << "B" << std::endl;
        }
        else if(element <= 80 || element >= 70){
                std::cout << "C" << std::endl;
        }
        else if(element <= 70 || element >= 60){
                std::cout << "D" << std::endl;
        }
        else if(element <= 60 || element <= 50){
                std::cout << "F" << std::endl;
        }
        else{
                std::cout << "Invalid Grade";
        }
}

int main()
{
	int grade;

	std::cout << "Enter your grade" << std::endl;
	std::cin >> grade;

	gradeFunc(grade);

	return 0;
}
