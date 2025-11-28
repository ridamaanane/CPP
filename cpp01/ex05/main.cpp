/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <ridamaanane@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:37:19 by rmaanane          #+#    #+#             */
/*   Updated: 2025/11/22 18:37:21 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main()
{
    Harl object;

    std::cout << "Testing DEBUG level:" << std::endl;
    object.complain("DEBUG");

    std::cout << "Testing ERROR level:" << std::endl;
    object.complain("ERROR");

}