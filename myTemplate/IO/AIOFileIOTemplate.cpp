#include <fstream>
#include <string>

#define IN_FILE "anyifile.txt"
#define OUT_FILE "anyofile.txt"

int main()
{
    std::ifstream infile(IN_FILE);
    std::string nStr {};
    std::getline(infile, nStr);
    // int n {std::stoi(nStr)};

    std::string kStr {};
    std::getline(infile, kStr);

    // do something

    std::ofstream ofile(OUT_FILE);
    ofile << "something";

    return 0;
}