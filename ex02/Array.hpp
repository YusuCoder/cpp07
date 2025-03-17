/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:38:00 by ryusupov          #+#    #+#             */
/*   Updated: 2025/02/25 14:45:45 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int	length;
		T				*array;

		public:
			Array();
			Array(unsigned int i);
			Array(const Array &src);
			~Array();

			Array &operator=(const Array &src);

			T &operator[](const unsigned int i);
			unsigned int size() const;

			class OutOfBoundsException : public std::exception {
				public:
					const char *what() const throw();
			};
};

#endif
