/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:24:30 by ryusupov          #+#    #+#             */
/*   Updated: 2025/02/25 13:31:13 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min (const T &a, const T &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max (const T &a, const T &b) {
	if (a > b)
		return (a);
	else
		return (b);
}
#endif
