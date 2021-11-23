#include "pizza.h"

void Pizza::addTopping(Topping t) {
	this->toppings |= t;
}

void Pizza::addToppings(unsigned int t) {
	this->toppings |= t;
}

bool Pizza::hasTopping(Topping t) {
	return this->toppings & t;
}

std::string Pizza::toString() {
	std::ostringstream out;

	out << "Pizza (" << this->toppings << ")";
	for (unsigned int i=Topping::RED_SAUCE; i < Topping::NO_TOPPING; i = i << 1) {
		if (this->hasTopping(static_cast<Topping>(i))) {
			out << ' ' << toppingString(i);
		}
	}

	return out.str();
}

std::string Pizza::toppingString(unsigned int t) {
	switch(t) {
	case Topping::RED_SAUCE:
		return std::string("red-sauce");
	case Topping::CHEESE:
		return std::string("cheese");
	case Topping::PEPPERONI:
		return std::string("pepperoni");
	case Topping::SAUSAGE:
		return std::string("sausage");
	case Topping::BACON:
		return std::string("bacon");
	case Topping::BELL_PEPPER:
		return std::string("bell-pepper");
	case Topping::BLACK_OLIVES:
		return std::string("black-olives");
	case Topping::BASIL:
		return std::string("basil");
	}

	return std::string("");
}