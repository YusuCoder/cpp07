/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:46:24 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/19 12:11:34 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
	Weapon club = Weapon("ak47");
	HumanA bob("Bob", club);
	bob.attack();
	club.set_type("some other type of weapon");
	bob.attack();
}
{
	Weapon club = Weapon("desert");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.set_type("some other type of gun");
	jim.attack();
}
return 0;
}
