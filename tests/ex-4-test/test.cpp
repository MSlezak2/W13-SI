#include "pch.h"
#include "../../ex-4/Vec4.h"

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

TEST(Vec4Test, ScalarMultiplicationTest) {
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

TEST(Vec4Test, ScalarDivisionTest) {
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
