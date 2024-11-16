/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:34:37 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/13 17:57:59 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{

	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce();
		void SetName(std::string name);
};
	Zombie* zombieHorde( int N, std::string name );
#endif
