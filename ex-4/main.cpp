#include "Vec4.h"
#include <iostream>

int main() {
	
	Vec4 A(1,1,1,1);
	Vec4 B(4, 3, 2, 1);

	Vec4 C{ A + B };
	Vec4 D{ A - B };
	Vec4 E{ A * 5 };
	Vec4 F{ 4 * A };
	Vec4 G{ A / 5 };

	

	return 0;
}