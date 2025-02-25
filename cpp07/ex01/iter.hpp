/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:35:55 by ryusupov          #+#    #+#             */
/*   Updated: 2025/02/25 14:08:04 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void	_print (T &src) {
	std::cout << src << " ";
};

template <typename T>
void	_add(T &src) {
	src++;
};

template <typename T>
void	iter(T *a, size_t len, void (*fn)(T&)) {
	if (a == NULL || fn == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		fn(a[i]);
};

#endif
