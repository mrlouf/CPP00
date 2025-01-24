/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:00:18 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/24 17:09:16 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];

	public:
		void displayAll();
		void displayContact( int );
		int getIndex( void );
};

#endif