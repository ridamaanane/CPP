#include <iostream>
#include <fstream>

int main() 
{
    std::ifstream input("file.txt");
    if (!input.is_open())
    {
        std::cout << "failed to open the file" << std::endl;
        return (1);
    }

    std::ofstream output("file.replace");
    if (!output.is_open())
    {
        std::cout << "failed to create the file" << std::endl;
        return (1);
    }

}
