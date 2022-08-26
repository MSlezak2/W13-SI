#include "pch.h"
#include "Mat4Test.h"

Mat4Test::Mat4Test() {
	//regularMatrix initialization
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			regularMatrix.insert(j,i,i);
		}
	}

	//identityMatrix initialization
	identityMatrix.insert(0, 0, 1);
	identityMatrix.insert(1, 1, 1);
	identityMatrix.insert(2, 2, 1);
	identityMatrix.insert(3, 3, 1);

	//regularMatrix initialization
	scalingMatrix.insert(0, 0, 5);
	scalingMatrix.insert(1, 1, 3);
	scalingMatrix.insert(2, 2, 1);
	scalingMatrix.insert(3, 3, 1);
}
