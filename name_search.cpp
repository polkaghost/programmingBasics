#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main()
{
	std::string goetia[] = {"Baal", "Paimon", "Aamon", "Asmodeus"};
	int size = sizeof(goetia)/sizeof(goetia[0]);
	int index;
	std::string myGoetia;
	
	std::cout << "Enter an element to search for: " << std::endl;
  	std::getline(std::cin, myGoetia);

  	index = searchArray(goetia, size, myGoetia);

  	if(index != -1){
    	std::cout << myGoetia << " is at index " << index << std::endl;
  	}
  	else{
    	std::cout << myGoetia << " is not in the array" << std::endl;
  	}

	return 0;
}

int searchArray(std::string array[], int size, std::string element){
	for(int i = 0; i < size; i++){
		if (array[i] == element){
			return i;
			}
		}
	return -1;
}
