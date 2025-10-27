#include <iostream>

int main()
{
    time_t timestamp;
    time(&timestamp);

    std::cout << time(&timestamp);

}