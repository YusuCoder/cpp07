/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:37:26 by ryusupov          #+#    #+#             */
/*   Updated: 2024/11/16 22:25:17 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {

	if (argc != 4) {
		std::cout << "Input error! Usage: ./sed <filename> <string_1> <string_2>" << std::endl;
		return -1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty()) {
		std::cout << "Error: The search string cannot be empty!" << std::endl;
		return -1;
	}
	std::ifstream current_file(filename);						//to read files
	if (!current_file.is_open() || current_file.fail()) {
		std::cout << "Error! Cannot open input file: " << filename << std::endl;
		return -1;
	}
	std::ofstream new_file(filename + ".replace");			//to write data to files
	if (!new_file.is_open() || new_file.fail()) {
		std::cout << "Error! Cannot create output file: " << filename << ".replace" << std::endl;
		return -1;
	}
	std::string line;
	while (getline(current_file, line)) {
		size_t i = 0;
		while (true) {
			size_t sub = line.find(s1, i);
			if (sub != std::string::npos) {
				new_file << line.substr(i, sub - i) << s2;	// Replaceing s1 with s2
				i = sub + s1.length();						// Moving past the replaced part
			} else {
				new_file << line.substr(i);					// Appending the remaining part of the line
				break;
			}
		}
		new_file << std::endl;
	}

	std::cout << "Replacement completed. Output file: " << filename << ".replace" << std::endl;
	return 0;
}
