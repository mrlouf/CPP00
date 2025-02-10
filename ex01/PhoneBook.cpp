/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:00:06 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/10 08:40:36 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "PhoneBook.hpp"

void PhoneBook::setIndex(int index) {
    _index = index;
}

void setIndex(PhoneBook& book, int index) {
    book.setIndex(index);
}

int PhoneBook::getIndex( void ) {
	
	std::string input;
	int index;

    std::cout << "36 15 Minitel> enter an index: ";
    std::getline(std::cin, input);

	if (input.compare("EXIT") == 0 || input.compare("exit") == 0)
	{
		exit (0);
	}

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
}

void PhoneBook::displayContact( PhoneBook book ) {
	
	(void)book;

}

void PhoneBook::displayAll( PhoneBook book ) {

	std::cout << std::endl;
    std::cout << "*___________________________________________*" << std::endl;
    std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

	if (book._index == 0) {
		
		std::cout << "Contact list is empty!" << std::endl;
		return ;
	}

	for (int i = 0; i < 8; i++) {
		;
	}

	int index = getIndex();
	if (index == -1)
		return;
}

void PhoneBook::addContact(PhoneBook book) {

	//TODO
	// Add contact in the slot _index, increment index
	// If _index is 7, overwrite the last contact

	Contact contact;

	_contacts[book._index] = contact;
	if (book._index == 7)
		std::cerr << "36 15 Minitel> PhoneBook was full, last contact overwritten" << std::endl;
	else
		book._index++;

}