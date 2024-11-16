/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:48:25 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/13 17:51:54 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N < 1){
		std::cout << "A zombie Horde requires at least 1 partner!" << std::endl;
		exit(EXIT_FAILURE);
	}

	Zombie *anotherZombie = new Zombie[N];

	for (int i = 0; i < N; i++){
		anotherZombie[i].SetName(name);
		anotherZombie[i].announce();
	}
	return (anotherZombie);
}
