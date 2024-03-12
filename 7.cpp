#include <iostream>
#include <fstream>

int main()
{
    // Writing to a file
    {
        std::ofstream outfile("example.txt",std::ios::out);
        outfile << "Hello, World!\n";
    }

    // Reading from the file
    {
        std::ifstream infile("example.txt");
        std::string content;
        getline(infile, content);
        std::cout << "File content: " << content << std::endl;
    }

    return 0;
}