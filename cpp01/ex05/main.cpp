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

    std::cout << "\nTesting INFO level:" << std::endl;
    object.complain("INFO");

    std::cout << "\nTesting WARNING level:" << std::endl;
    object.complain("WARNING");

    std::cout << "\nTesting ERROR level:" << std::endl;
    object.complain("ERROR");

    std::cout << "\nTesting invalid level:" << std::endl;
    object.complain("INVALID");

}