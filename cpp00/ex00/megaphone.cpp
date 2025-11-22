/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:23:16 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/17 18:23:16 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>


int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        int i = 1;
        int j;
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (std::islower(av[i][j]))
                    std::cout << char(std::toupper(av[i][j]));                    
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


