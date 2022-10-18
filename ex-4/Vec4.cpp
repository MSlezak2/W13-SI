#include "Vec4.h"

Vec4::Vec4() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	w = 0.0;
}

Vec4 Vec4::operator+(Vec4 addend) const {
	Vec4 sum;

	sum.x = x + addend.x;
	sum.y = y + addend.y;
	sum.z = z + addend.z;
	sum.w = w + addend.w;

	return sum;
}

Vec4 Vec4::operator-(Vec4 subtrahend) const {
	Vec4 difference;

	difference.x = x - subtrahend.x;
	difference.y = y - subtrahend.y;
	difference.z = z - subtrahend.z;
	difference.w = w - subtrahend.w;

	return difference;
}

Vec4 operator * (Vec4 multiplier, double multiplicand){
	Vec4 product;

	product.x = multiplier.x * multiplicand;
	product.y = multiplier.y * multiplicand;
	product.z = multiplier.z * multiplicand;
	product.w = multiplier.w * multiplicand;

	return product;
}

Vec4 operator * (double multiplier, Vec4 multiplicand){
	Vec4 product;

	product.x = multiplier * multiplicand.x;
	product.y = multiplier * multiplicand.y;
	product.z = multiplier * multiplicand.z;
	product.w = multiplier * multiplicand.w;

	return product;
}

Vec4 Vec4::operator/(double divisor) const {
	Vec4 quotient;

	quotient.x = x / divisor;
	quotient.y = y / divisor;
	quotient.z = z / divisor;
	quotient.w = w / divisor;

	return quotient;
}

double Vec4::dot(Vec4 multiplicant) const {
	return x * multiplicant.x + y* multiplicant.y + z* multiplicant.z + w* multiplicant.w;
}

double Vec4::operator[](int index) {
	double value;

	switch (index) {
	case 0:
		value = x;
		break;
	case 1:
		value = y;
		break;
	case 2:
		value = z;
		break;
	case 3:
		value = w;
		break;
	default:
		value = 1000000;
		break;
	}
	return value;
}

double Vec4::getX() {
	return x;
}

double Vec4::getY() {
	return y;
}

double Vec4::getZ() {
	return z;
}

double Vec4::getW() {
	return w;
}

void Vec4::setX(double x) {
	this->x = x;
}

void Vec4::setY(double y) {
	this->y = y;
}

void Vec4::setZ(double z) {
	this->z = z;
}

void Vec4::setW(double w) {
	this->w = w;
}

void Vec4::setValue(int index, double value) {
	switch (index) {
	case 0:
		x = value;
		break;
	case 1:
		y = value;
		break;
	case 2:
		z = value;
		break;
	case 3:
		w = value;
		break;
	}
}

bool operator == (const Vec4 leftOne, const Vec4 rightOne) {
	bool isEqual{ true };
	
		if (leftOne.x != rightOne.x || leftOne.y != rightOne.y || leftOne.z != rightOne.z || leftOne.w != rightOne.w) {
			isEqual = false;
		}
		
		return isEqual;
}

bool operator!=(const Vec4 leftOne, const Vec4 rightOne) {
	bool isUnequal{ false };

	if (leftOne.x != rightOne.x || leftOne.y != rightOne.y || leftOne.z != rightOne.z || leftOne.w != rightOne.w) {
		isUnequal = true;
	}

	return isUnequal;
}
