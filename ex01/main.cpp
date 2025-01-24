/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:02:39 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/24 16:02:50 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "utils.hpp"

int main( void ) {
	
    printWelcomeMessage();
	std::string input = getUserInput();

	//PhoneBook phonebook;
	Contact contact;

	input = getUserInput();
	
	while (!input.empty()) {
		if (input.compare("ADD") == 0)
			contact.addContact();
		else if (input.compare("SEARCH") == 0)
			std::cout << "You entered SEARCH" << std::endl;
		else if (input.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Unknown input: \'" << input << "\'" << std::endl;
		input = getUserInput();
	};
	
	return (0);
}
