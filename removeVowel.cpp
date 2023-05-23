#include <iostream>
#include <bits/stdc++.h>

// Write a function that takes in a string and returns that string with its vowels removed.

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
