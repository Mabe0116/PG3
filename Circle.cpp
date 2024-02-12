#include "Circle.h"
#include <iostream>

Circle::Circle(float radius) {
	radius_ = radius;
}

Circle::~Circle() {

}

void Circle::size() {
	area_ = radius_ * radius_ * 3.14f;
}

void Circle::draw() {
	std::cout << "‰~‚Ì–ÊÏ‚Í" << area_ << "‚Å‚·" << std::endl;
}
