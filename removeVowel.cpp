#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string removeVowel(string str)
{
    regex r("[aeiouAEIOU]"); 
      
    return regex_replace(str, r, "");
}

int main()
{
	std::string myString;

	std::cout << "Enter a string" << std::endl;
        std::getline(std::cin, myString);

	std::cout << (removeVowel(myString)) << std::endl;	

	return 0;
}
