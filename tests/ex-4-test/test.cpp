#include "pch.h"
#include "../../ex-4/Vec4.h"
#include "../../ex-4/Mat4.h"
#include "Mat4Test.h"

TEST(Vec4Test, AdditionTest) {
	Vec4 A(1, 1, 1, 1);
	Vec4 B(4, 3, 2, 1);

	Vec4 C{ A + B };

	Vec4 E(5, 4, 3, 2);
	EXPECT_EQ(C, E);
	Vec4 F(-3, -3, -3, -3);
	EXPECT_NE(C, F);
}

TEST(Vec4Test, SubtractionTest) {
	Vec4 A(1, 1, 1, 1);
	Vec4 B(4, 3, 2, 1);

	Vec4 D{ A - B };

	Vec4 E(-3, -2, -1, 0);
	EXPECT_EQ(D, E);
	Vec4 F(-3, -3, -3, -3);
	EXPECT_NE(D, F);
}

TEST(Vec4Test, MultiplicationByScalarTest) {
	Vec4 A(4, 3, 2, 1);
	int intNumber{ 5 };
	double doubleNumber{ 0.5 };

	Vec4 B{ intNumber * A };
	Vec4 C{ A * intNumber };
	Vec4 D(20,15,10,5);
	EXPECT_EQ(B, D);
	EXPECT_EQ(C, D);

	Vec4 E{ doubleNumber * A };
	Vec4 F{ A * doubleNumber };
	Vec4 G(2, 1.5, 1.0, 0.5);
	EXPECT_EQ(E, G);
	EXPECT_EQ(F, G);
}

TEST(Vec4Test, DivisionByScalarTest) {
	Vec4 A(8, 6, 4, 2);
	int intNumber{ 2 };
	double doubleNumber{ 0.5 };

	Vec4 B{ A / intNumber };
	Vec4 D(4, 3, 2, 1);
	EXPECT_EQ(B, D);

	Vec4 C{ A / doubleNumber };
	Vec4 E(16, 12, 8, 4);
	EXPECT_EQ(C, E);
}

TEST(Vec4Test, DotProductTest) {
	Vec4 A(8, 6, 4, 2);
	Vec4 B(1, 2, 3, 4);
	double dotProductExpected{ 40 };
	double dotProductCalculated{ A.dot(B) };
	EXPECT_EQ(dotProductCalculated, dotProductExpected);
}

TEST_F(Mat4Test, AtTest) {
	EXPECT_EQ(regularMatrix.at(0, 0), 0);
	EXPECT_EQ(regularMatrix.at(1, 1), 1);
	EXPECT_EQ(regularMatrix.at(2, 2), 2);
	
	EXPECT_EQ(regularMatrix.at(-1, 2), -1000000000) << "index out of bounds - wrong return value";
	EXPECT_EQ(regularMatrix.at(0, 6), -1000000000) << "index out of bounds - wrong return value";

	EXPECT_NE(regularMatrix.at(1, 1), 5);
}

TEST_F(Mat4Test, MuliplyMatByVecTest) {

	Vec4 inputVector(1,2,3,4);
	Vec4 expectedOutputVector(0, 10, 20, 30);
	Vec4 actualOutputVector{ regularMatrix * inputVector };

	EXPECT_EQ(expectedOutputVector, actualOutputVector);
}

TEST_F(Mat4Test, MatrixGenerationTest) {

	Mat4 generatedIdentityMatrix = Mat4::generateMatrix(Mat4::MatrixType::identity);
	EXPECT_EQ(generatedIdentityMatrix, identityMatrix);

	Mat4 generatedScalingMatrix = Mat4::generateMatrix(Mat4::MatrixType::scaling);
	EXPECT_EQ(generatedScalingMatrix, scalingMatrix);
}
