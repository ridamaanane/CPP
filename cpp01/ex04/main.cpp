/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:36:37 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:36:39 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


int main(int ac, char **av) 
{
    if (ac != 4)
    {
        std::cout << "Error not enough arguments" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty() || s2.empty())
    {
        std::cerr << "String cannot be empty" << std::endl;
        return (1);
    }
    /*
    input = the file you are reading from   
    output = the file you will write to
    */

    std::ifstream input(filename.c_str());
    if (!input.is_open())
    {
        std::cout << "failed to open the file" << std::endl;
        return (1);
    }
    std::ofstream output((filename + ".replace").c_str());
    if (!output.is_open())
    {
        std::cout << "failed to create the file" << std::endl;
        return (1);
    }
    std::string line;
    size_t pos; //std::string::find() returns size_t, so using the same type avoids warnings or errors.
    while (getline(input, line)) //Read one line from the file input, Store it into the variable line
    {
        pos = line.find(s1);
        while (pos != std::string::npos)
        {
            line.replace(pos, s1.length(), s2);
            pos = line.find(s1, pos + s2.length());
        }
        output << line << std::endl; //write directly to the file
    }
    input.close(); 
    output.close();
}
