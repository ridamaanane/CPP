/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:32:47 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 19:22:54 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1;
    Zombie *z2 = newZombie("z2");
    
    
    z1.announce();
    z2->announce();
    delete z2;
    
    randomChump("z3");
}
