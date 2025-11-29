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
    Zombie* horde = new Zombie[N];
    if (!horde)
        return NULL;
    int i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}