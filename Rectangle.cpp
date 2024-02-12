#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(float width, float height) {
	width_ = width;
	height_ = height;
}

Rectangle::~Rectangle() {

}

void Rectangle::size() {
	area_ = width_ * height_;
}

void Rectangle::draw() {
	std::cout << "��`�̖ʐς�" << area_ << "�ł�" << std::endl;
}