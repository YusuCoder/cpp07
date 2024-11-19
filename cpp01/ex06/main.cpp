/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:30:03 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/19 13:33:16 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Usage: ./harl <level>" << std::endl;
	return (0);
}
