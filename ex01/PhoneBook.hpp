/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:00:18 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/27 10:23:48 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <sstream>
#include <exception>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		int _index;

	public:
		void displayAll( PhoneBook book );
		void displayContact( PhoneBook book, int index );
		int getIndex( void );
		void addContact(PhoneBook book, Contact contact);
		void setIndex(int index) { _index = index; };
};

#endif