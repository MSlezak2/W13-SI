#pragma once
#include "Vec4.h"

class Mat4 {
public:

	enum class MatrixType { identity, scaling };

	Mat4();
	void insert(int x, int y, double value);
	double at(int x, int y);
	static Mat4 generateMatrix(MatrixType matrixType);
	static Mat4 generateMatrix(MatrixType matrixType, double sx, double sy, double sz);
	Vec4 operator * (Vec4 multiplicand);

private:
	double matrix[4][4];
};

