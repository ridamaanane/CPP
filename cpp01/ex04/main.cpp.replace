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
        std::cerr << "Error not enough arguments" << std::endl;
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
    input = file stream you are reading from   
    output = file stream you will write to
    */

    std::ifstream input(filename.c_str());
    if (!input.is_open())
    {
        std::cerr << "failed to open the file" << std::endl;
        return (1);
    }
    std::ofstream output((filename + ".replace").c_str());
    if (!output.is_open()) 
    {
        std::cerr << "failed to create the file" << std::endl;
        return (1);
    }
    std::string line;
    size_t pos; //find() returns size_t, so using the same type avoids errors
    while (getline(input, line))
    {
        while ((pos = line.find(s1)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
        output << line << std::endl; //write directly to the file
    }
    input.close(); 
    output.close();
}
