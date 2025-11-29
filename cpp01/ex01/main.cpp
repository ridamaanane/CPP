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
    Zombie *z1 = zombieHorde(3, "rida");
    for (int i = 0; i < 3; i++)
    {
        z1[i].announce();
    }

    delete[] z1;

    std::cout << "enf of main" << std::endl;
}