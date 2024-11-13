/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:48:33 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/12 17:28:41 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void announce();
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
