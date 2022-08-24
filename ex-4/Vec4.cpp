#include "Vec4.h"

Vec4::Vec4() {
	x = 0.0;
	y = 0.0;
	z = 0.0;
	w = 0.0;
}

Vec4 Vec4::operator+(Vec4 subtrahend) {
	Vec4 sum;

	sum.x = x + subtrahend.x;
	sum.y = y + subtrahend.y;
	sum.z = z + subtrahend.z;
	sum.w = w + subtrahend.w;

	return sum;
}

Vec4 Vec4::operator-(Vec4 addend) {
	Vec4 difference;

	difference.x = x - addend.x;
	difference.y = y - addend.y;
	difference.z = z - addend.z;
	difference.w = w - addend.w;

	return difference;
}

Vec4 operator * (Vec4 multiplier, double multiplicand) {
	Vec4 product;

	product.x = multiplier.x * multiplicand;
	product.y = multiplier.y * multiplicand;
	product.z = multiplier.z * multiplicand;
	product.w = multiplier.w * multiplicand;

	return product;
}

Vec4 operator * (double multiplier, Vec4 multiplicand) {
	Vec4 product;

	product.x = multiplier * multiplicand.x;
	product.y = multiplier * multiplicand.y;
	product.z = multiplier * multiplicand.z;
	product.w = multiplier * multiplicand.w;

	return product;
}

Vec4 Vec4::operator/(double divisor) {
	Vec4 quotient;

	quotient.x = x / divisor;
	quotient.y = y / divisor;
	quotient.z = z / divisor;
	quotient.w = w / divisor;

	return quotient;
}

//bool Vec4::operator==(Vec4 secondOne) {
//	bool isEqual{ true };
//
//	if (x != secondOne.x || y != secondOne.y || z != secondOne.z || w != secondOne.w) {
//		isEqual = false;
//	}
//	
//	return isEqual;
//}

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

bool operator == (const Vec4 leftOne, const Vec4 rightOne) {
	bool isEqual{ true };
	
		if (leftOne.x != rightOne.x || leftOne.y != rightOne.y || leftOne.z != rightOne.z || leftOne.w != rightOne.w) {
			isEqual = false;
		}
		
		return isEqual;
}