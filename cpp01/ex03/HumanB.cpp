/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:35:30 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:35:30 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name; //this-> tells C++: “I mean the object’s member, not the parameter.”
    this->weapon = NULL; // no weapon yet
}
void HumanB::setWeapon(Weapon &weapon) //&weapon refference not address
{
    this->weapon = &weapon; //means “the address of the weapon object that was passed”. , without it mean only the value
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
}