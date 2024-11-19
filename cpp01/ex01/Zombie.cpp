/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:39:39 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/19 11:52:41 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Zombie created" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

void	Zombie::SetName(std::string name){
	this->name = name;
}

void Zombie::announce(){
	std::cout << this->name << " Braaaainnzzzzzzz" << std::endl;
}


