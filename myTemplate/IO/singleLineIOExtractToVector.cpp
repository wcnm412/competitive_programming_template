#include <iostream>
#include <sstream>
#include <vector>
#include <string>

// useful for parsing a single line of same data type and placing it in a vector

#define DATA_TYPE long long // replace with preferred type

/*
std::vector<DATA_TYPE> singleLineIOExtractToVector() // callable function if linked
{
    std::vector<DATA_TYPE> arr {}; // vector to put shit into, any data type

    std::string cinLine {}; 
    std::getline(std::cin, cinLine); // get whole line from cin

    std::stringstream ss(cinLine); // initialise string istream from line

    std::string strTemp; // initialise temporary string to dump inputs into

    while(std::getline(ss, strTemp, ' ')) // while works so IDK, delimit space to get characters in between
    {
        arr.push_back(std::stoi(strTemp)); // replace stoi as needed
        // std::cout << std::stoi(strTemp) << '\n'; or DO SOMETHING
    }

    // do something

    return arr;
}
*/

int main()
{
    std::vector<DATA_TYPE> arr {}; // vector to put shit into, any data type

    std::string cinLine {}; 
    std::getline(std::cin, cinLine); // get whole line from cin

    std::stringstream ss(cinLine); // initialise string istream from line

    std::string strTemp; // initialise temporary string to dump inputs into

    while(std::getline(ss, strTemp, ' ')) // while works so IDK, delimit space to get characters in between
    {
        arr.push_back(std::stoi(strTemp)); // replace stoi as needed
        // std::cout << std::stoi(strTemp) << '\n'; or DO SOMETHING
    }

    // do something

    return 0;
}