/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:19:23 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/13 18:25:18 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "The memory adress of th str variable is: " << &str << std::endl;
	std::cout << "The memeory adress held by ptr: " << ptr << std::endl;
	std::cout << "The memory adress reference held by ref: " << ref << std::endl;

	std::cout << std::endl;

	std::cout << "The value of the str is: " << str << std::endl;
	std::cout << "The value pointed by ptr: " << *ptr << std::endl;
	std::cout << "The value pointed by ref: " << ref << std::endl;

	return (0);
}
