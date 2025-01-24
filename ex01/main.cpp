/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:02:39 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/24 12:44:03 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {
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
	
	std::string input;
    std::cout << "Minitel> ";
    std::getline(std::cin, input);
    std::cout << "You entered: " << input << std::endl;
	return (0);
}