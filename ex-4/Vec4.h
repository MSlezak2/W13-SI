#pragma once
class Vec4 {
public:
	Vec4();
	Vec4(double x, double y, double z, double w) : x{ x }, y{ y }, z{ z }, w{ w } {};

	Vec4 operator + (Vec4 addend);
	Vec4 operator - (Vec4 subtrahend);
	friend Vec4 operator * (Vec4 multiplier, double multiplicand);
	friend Vec4 operator * (double multiplier, Vec4 multiplicand);
	Vec4 operator / (double divisor);
	double dot(Vec4 multiplicant);
	Vec4 cross(Vec4 multiplicant); //TODO: Implement it

	friend bool operator == (const Vec4 leftOne, const Vec4 rightOne);
	friend bool operator != (const Vec4 leftOne, const Vec4 rightOne);
	double operator [] (int index);

	double getX();
	double getY();
	double getZ();
	double getW();
	void setX(double x);
	void setY(double y);
	void setZ(double z);
	void setW(double w);
	void setValue(int index, double value);

private:
	double x, y, z, w;

};

