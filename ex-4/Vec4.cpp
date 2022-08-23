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

//double Vec4::getX() {
//	return x;
//}
//
//double Vec4::getY() {
//	return y;
//}
//
//double Vec4::getZ() {
//	return z;
//}
//
//double Vec4::getW() {
//	return w;
//}