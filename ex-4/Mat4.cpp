#include "Mat4.h"

Mat4::Mat4() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			matrix[i][j] = 0;
		}
	}
}

void Mat4::insert(int x, int y, double value) {

	if (x >= 0 && y >= 0 && x < 4 && y < 4) {
		matrix[y][x] = value;
	}

}

double Mat4::at(int x, int y) {
	double value;

	if (x >= 0 && y >= 0 && x < 4 && y < 4) {
		value = matrix[y][x];
	} else {
		value = 1000000;
	}

	return value;
}

Mat4& Mat4::generateMatrix(MatrixType matrixType) {
	Mat4 identityMatrix;
	
	if (matrixType == MatrixType::identity) {
		identityMatrix.insert(0, 0, 1);
		identityMatrix.insert(1, 1, 1);
		identityMatrix.insert(2, 2, 1);
		identityMatrix.insert(3, 3, 1);
	}
	
	return identityMatrix;
}

Mat4& Mat4::generateMatrix(MatrixType matrixType, double sx, double sy, double sz) {
	Mat4 scalingMatrix;

	if (matrixType == MatrixType::scaling) {
		scalingMatrix.insert(0, 0, sx);
		scalingMatrix.insert(1, 1, sy);
		scalingMatrix.insert(2, 2, sz);
		scalingMatrix.insert(3, 3, 1);
	}

	return scalingMatrix;
}

Vec4 Mat4::operator*(Vec4 multiplicand) {
	Vec4 result;
	double tempValue;

	for (int y = 0; y < 4; y++) {
		tempValue = 0;
		for (int x = 0; x < 4; x++) {
			tempValue += matrix[y][x] * multiplicand[x];
		}
		result.setValue(y, tempValue);
	}
	
	return result;
}

//double* Mat4::operator[](int index) {
//	double* row = nullptr;
//
//	if (index >= 0 && index < 4) {
//		row = matrix[index];
//	}
//
//	return row;
//}

bool operator==(const Mat4 leftOne, const Mat4 rightOne) {
	bool isEqual{ true };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (leftOne.matrix[i][j] != rightOne.matrix[i][j]) {
				isEqual = false;
			}
			/*if (leftOne[i][j] != rightOne[i][j]) {
				isEqual = false;
			}*/
		}
	}
	
	return isEqual;
}

bool operator!=(const Mat4 leftOne, const Mat4 rightOne) {
	return !(leftOne == rightOne);
}
