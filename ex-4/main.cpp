#include "Vec4.h"

int main() {
	
	Vec4 A(1,1,1,1);
	Vec4 B(4, 3, 2, 1);

	Vec4 C{ A + B };
	Vec4 D{ A - B };

	return 0;
}