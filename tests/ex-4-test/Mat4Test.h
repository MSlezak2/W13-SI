#pragma once
#include <Mat4.h>

class Mat4Test 
	: public ::testing::Test {
protected:
	Mat4Test();
	Mat4 regularMatrix; // first row = 0; second = 1; etc...
	Mat4 identityMatrix;
	Mat4 scalingMatrix; // sx = 5; sy = 3; sz = 1;

};

