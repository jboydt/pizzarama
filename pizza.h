#pragma once

#include <sstream> // std::ostringstream
#include <string>  // std::string

enum Topping {
	RED_SAUCE = 1,
	CHEESE = 2,
	PEPPERONI = 4,
	SAUSAGE = 8,
	BACON = 16,
	BELL_PEPPER = 32,
	BLACK_OLIVES = 64,
	BASIL = 128,
	NO_TOPPING = 128
};

class Pizza {
public:
	void addTopping(Topping t);
	void addToppings(unsigned int t);
	bool hasTopping(Topping t);

	std::string toString();

private:
	unsigned int toppings = 0;

	std::string toppingString(unsigned int t);
};