#pragma once
class Vec4 {
public:
	Vec4();
	Vec4(double x, double y, double z, double w) : x{ x }, y{ y }, z{ z }, w{ w } {};

	Vec4 operator + (Vec4 addend);
	Vec4 operator - (Vec4 addend);

	/*double getX();
	double getY();
	double getZ();
	double getW();*/

private:
	double x, y, z, w;

};

