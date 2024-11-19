/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 22:59:14 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/19 13:42:19 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my"
				"7XL-double-cheese-triple-pickle-specialketchup burger."
				"I really do!" << std::endl;
	return ;
}

void Harl::info(void) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
				"You didn’t put enough bacon in my burger!"
				"If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void Harl::warning(void) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
				"I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void Harl::error(void) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level) {
	static const std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	found = -1;

	for (int i = 0; i < 4; i++) {
		if (lvls[i] == level) {
			found = i;
			break ;
		}
	}
	switch (found)
	{
	case 0:
		this->debug();
		found++;
	case 1:
		this->info();
		found++;
	case 2:
		this->warning();
		found++;
	case 3:
		this->error();
		break ;
	default:
		std::cout << "There is no such level \"" << level << "\"." << std::endl;
	}
	return ;
}
