#include <iostream>
#include "Array.hpp"


int main() {
	Array<int> nums(5);

	for (unsigned int i = 0; i < nums.size(); ++i)
		nums[i] = i * 10;

	for (unsigned int i = 0; i < nums.size(); ++i)
		std::cout << nums[i] << " ";

	std::cout << std::endl;

	try {
		std::cout << nums[10] << std::endl; // Should throw
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
