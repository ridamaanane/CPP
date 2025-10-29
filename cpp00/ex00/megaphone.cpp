#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        int i = 1;
        int j;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (islower(av[i][j]))
                    std::cout << char(toupper(av[i][j]));
                else
                    std::cout << av[i][j];
                j++;        
            }
            std::cout << ' ';
            i++;
        }
    }
    std::cout << std::endl;
}