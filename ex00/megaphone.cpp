/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:26:12 by nponchon          #+#    #+#             */
/*   Updated: 2025/01/24 11:56:00 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
	(void)av;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < ac; ++i) {
			for (int j = 0; av[i][j]; ++j) {
				std::cout << (char)toupper(av[i][j]);
			}
			//if (i < ac -1) {
			//	std::cout << " ";
			//}
		}
		std::cout << std::endl;
	}
	return 0;
}