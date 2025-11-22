/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:34:01 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:34:03 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie* horde = new Zombie[N];   // creates array of N zombies
    if (!horde)
        return NULL;
    while (i < N)
    {
        horde[i].setName(name); // assign name to each zombie
        i++;
    }
    return (horde);
}