#include <iostream>

int main()
{
  std::string names[] = {"Baal", "Paimon", "Aamon", "Asmodeus"};

  for(int i = 0; i < sizeof(names)/sizeof(names[0]); i++){
      std::cout << names[i] << std::endl;
  }

  return 0;
}
