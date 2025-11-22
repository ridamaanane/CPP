/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:34:47 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:34:47 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) //we initialise the weapon here because the reference cannot be empty (need to initialized immediately)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

// If you try to do it inside the body:

// HumanA::HumanA(std::string name, Weapon &weapon)
// {
//     this->weapon = weapon;  // too late — weapon wasn’t initialized yet
// }