/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:51:13 by ryusupov          #+#    #+#             */
/*   Updated: 2025/04/19 14:50:51 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : length(0), array(new T[0]) {
	//
}

template <typename T>
Array<T>::Array(unsigned int i) : length(i), array(new T[i]) {
	//
}

template <typename T>
Array<T>::Array(const Array &src) : length(src.length), array(new T[src.length]) {
	for (unsigned int i = 0; i < length; i++)
		array[i] = src.array[i];
}

template<typename T>
Array<T>::~Array() {
	delete[] array;
}


template <typename T>
Array<T> &Array<T>::operator=(const Array &src) {
	if (this != &src) {
		delete[] array;
		length = src.length;
		array = new T[length];
		for (unsigned int i = 0; i < length; ++i)
			array[i] = src.array[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](const unsigned int i) {
	if (i >= length)
		throw OutOfBoundsException();
	return array[i];
}

template <typename T>
unsigned int Array<T>::size() const {
	return length;
}

template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw() {
	return "Index out of bounds!";
}
