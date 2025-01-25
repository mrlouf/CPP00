/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:02:39 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/25 17:14:06 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "utils.hpp"

int main( void ) {
	
    printWelcomeMessage();

	PhoneBook myPhoneBook;
	Contact myContact;

	std::string input = getUserInput();
	
	while (!input.empty()) {
		if (input.compare("ADD") == 0)
			myContact.addContact();
		else if (input.compare("SEARCH") == 0)
			myPhoneBook.displayAll();
		else if (input.compare("EXIT") == 0)
			return (0);
		else {
			std::cerr << "36 15 Minitel> Unknown input: \'" << input << "\'" << std::endl;
		};
		input = getUserInput();
	};
	
	return (0);
}
