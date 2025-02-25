/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:44:00 by ryusupov          #+#    #+#             */
/*   Updated: 2025/02/25 14:05:39 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void set_char(char &src) {
	src = std::rand() % 26 + 65;
}

void set_int(int &i) {
	i = std::rand() % 100;
}
int main(void)
{
	int	*nums = new int[20];
	char	*str = new char[20];

	std::srand(time(NULL));

	iter(str, 20, &set_char);
	iter(str, 20, &_print);
	std::cout << std::endl;

	iter(str, 10, &_add<char>);
	iter(str, 20, &_print<char>);
	std::cout << std::endl;

	iter(nums, 20, &set_int);
	iter(nums, 20, &_print<int>);
	std::cout << std::endl;

	iter(nums, 20, &_add<int>);
	iter(nums, 20, &_print<int>);

}

