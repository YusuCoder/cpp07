/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:28:01 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/16 17:33:28 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon*		weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		Weapon	getWeapon() const;
		void	setWeapon(Weapon& weapon);
		void	attack();
};

#endif
