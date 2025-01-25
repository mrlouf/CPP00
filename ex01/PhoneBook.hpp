/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:00:18 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/25 18:16:31 by nponchon         ###   ########.fr       */
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
		int _index = 0;

	public:
		void displayAll();
		void displayContact( int );
		int getIndex( void );
		void addContact(Contact contact);
};

#endif