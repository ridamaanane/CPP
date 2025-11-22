/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:36:00 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:36:00 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type; //or you can rename the parameter, because this-> mean the name of varible in the private 
}

void Weapon::setType(const std::string &newtype)
{
    type = newtype;
}

const  std::string &Weapon::getType() const //& we put it after the type not the class
{
    return (type);
}

