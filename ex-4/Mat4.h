#pragma once
#include "Vec4.h"

class Mat4 {
public:

	enum class MatrixType { identity, scaling };

	Mat4();
	void insert(int x, int y, double value);
	double& at(int x, int y); //TODO: What does it mean to return reference to double?
	static Mat4& generateMatrix(MatrixType matrixType);
	static Mat4& generateMatrix(MatrixType matrixType, double sx, double sy, double sz);
	Vec4 operator * (Vec4 multiplicand);
	friend bool operator == (const Mat4 leftOne, const Mat4 rightOne);
	friend bool operator != (const Mat4 leftOne, const Mat4 rightOne);
	//double* operator [] (int index);

private:
	double matrix[4][4];
};

