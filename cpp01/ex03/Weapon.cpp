/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:56:54 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/16 14:09:46 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type) : type(type){}
Weapon::~Weapon(){}

const std::string Weapon::get_type() const {
	return (this->type);
}

void	Weapon::set_type(std::string type) {
	this->type = type;
}

