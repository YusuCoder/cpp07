/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:42:17 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/16 16:41:34 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& gun) : name(name), weapon(gun) {}

HumanA::~HumanA(){}

void	HumanA::attack(){
	std::cout << this->name << " attacked with their " << this->weapon.get_type() << std::endl;
}
