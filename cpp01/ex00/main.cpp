/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:32:47 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:32:54 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z1 = newZombie("first zombie");
    Zombie *z2 = newZombie("second zombie");

    z1->announce();
    z2->announce();

    delete(z1); //called the destructor automatically
    delete(z2);

    std:: cout << "end of main" << std::endl;
}
