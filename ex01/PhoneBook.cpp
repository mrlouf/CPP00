/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:00:06 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/24 17:42:20 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::getIndex( void ) {
	
	std::string input;
	int index;

    std::cout << "36 15 Minitel> enter an index: ";
    std::getline(std::cin, input);

	if (input.find_first_not_of("0123456789+-") != std::string::npos) {
		std::cerr << "Invalid input: only digits and '+' or '-' signs are allowed" << std::endl;
		return (-1);
	}

	std::stringstream ss(input);

	ss >> index;

	try	{
		if ( index < 0 ) {
      		throw std::invalid_argument( "index is negative" );
		}
		else if ( index > 8 ) {
        	throw std::invalid_argument( "index is out of range" );
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return (-1);
	}

	return index;
};

void PhoneBook::displayContact(int index) {
	
	std::cout << "Displaying contact " << index << std::endl;

};

void PhoneBook::displayAll( void ) {
	
	std::cout << "Displaying all contacts \n";

	int index = getIndex();
	if (index == -1)
		return;
	displayContact(index);
};
