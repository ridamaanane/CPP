/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:33:49 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:33:51 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z1 = zombieHorde(3, "rida"); //Each element of 3 is a Zombie object.
    for (int i = 0 ; i < 3; i++)
    {
        z1[i].setName("maanane"); //"->"" works on a pointer to a single object , but now we have array
    }
    for (int i = 0 ; i < 3; i++)
    {
        z1[i].announce(); //Purpose of announce() Every zombie introduces itself / prints a message
    }


    delete[] z1; //deallocates the array

    std:: cout << "enf of main" << std::endl;
}