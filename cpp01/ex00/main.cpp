/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:27:30 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/19 11:38:02 by ryusupov         ###   ########.fr       */

/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;

	randomChump("Chump");
	z = newZombie("New Zombie");
	z->announce();
	delete z;
}
