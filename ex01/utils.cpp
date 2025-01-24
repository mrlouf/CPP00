/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:36:42 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/24 14:01:35 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string getUserInput( void ) {
	
	std::string input;

    std::cout << "36 15 Minitel> ";
    std::getline(std::cin, input);

	return input;
}

void printWelcomeMessage() {

    std::cout << " +--------------------------------------------------------------------------------------------+" << std::endl;
    std::cout << "|                                                                                              |" << std::endl;
    std::cout << "|      WELCOME TO THE (CRAPPY) RETRO PHONEBOOK                                                 |" << std::endl;
    std::cout << "|                                                                                              |" << std::endl;
    std::cout << "|   ██████╗  ██████╗      ██╗███████╗    ███╗   ███╗██╗███╗   ██╗██╗████████╗███████╗██╗       |" << std::endl;
    std::cout << "|   ╚════██╗██╔════╝     ███║██╔════╝    ████╗ ████║██║████╗  ██║██║╚══██╔══╝██╔════╝██║       |" << std::endl;
    std::cout << "|    █████╔╝███████╗     ╚██║███████╗    ██╔████╔██║██║██╔██╗ ██║██║   ██║   █████╗  ██║       |" << std::endl;
    std::cout << "|    ╚═══██╗██╔═══██╗     ██║╚════██║    ██║╚██╔╝██║██║██║╚██╗██║██║   ██║   ██╔══╝  ██║       |" << std::endl;
    std::cout << "|   ██████╔╝╚██████╔╝     ██║███████║    ██║ ╚═╝ ██║██║██║ ╚████║██║   ██║   ███████╗███████╗  |" << std::endl;
    std::cout << "|   ╚═════╝  ╚═════╝      ╚═╝╚══════╝    ╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═╝   ╚═╝   ╚══════╝╚══════╝  |" << std::endl;
    std::cout << "|                                                                                              |" << std::endl;
    std::cout << "|      Enter ADD to save a new contact                                                         |" << std::endl;
    std::cout << "|      Enter SEARCH to display a specific contact                                              |" << std::endl;
    std::cout << "|      Enter EXIT to quit and lose all contacts forever                                        |" << std::endl;
    std::cout << "|                                                                                              |" << std::endl;
    std::cout << " +--------------------------------------------------------------------------------------------+" << std::endl;

}