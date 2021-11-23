// Bytes and Slices
//
// Author(s): CSCI 10 class, Fall 2021
// Date:      23 Nov 2021

#include <iostream>

#include "pizza.h"

int main() {
	std::cout << "Bytes and Slices" << std::endl;

	Pizza p;
	p.addTopping(Topping::RED_SAUCE);
	std::cout << p.toString() << std::endl;

	p.addToppings(Topping::CHEESE | Topping::PEPPERONI);
	std::cout << p.toString() << std::endl;

	return 0;
}