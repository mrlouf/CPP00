/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:02:39 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/27 10:18:40 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "utils.hpp"

int main( void ) {
	
    printWelcomeMessage();

	PhoneBook book;
	Contact contact;

	book.setIndex(0);

	std::string input = getUserInput();
	
	while (!input.empty()) {
		if (input.compare("ADD") == 0 || input.compare("add") == 0)
			book.addContact(book, contact);
		else if (input.compare("SEARCH") == 0 || input.compare("search") == 0)
			book.displayAll();
		else if (input.compare("EXIT") == 0 || input.compare("exit") == 0)
		{
			std::cout << "36 15 Minitel> Goodbye!" << std::endl;
			return (0);
		}
		else {
			std::cerr << "36 15 Minitel> Unknown input: \'" << input << "\'" << std::endl;
			input = getUserInput();
		};
	};
	
	return (0);
}
