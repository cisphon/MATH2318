#include "Tools.h"

namespace MATH2318::HW13 {
	void question1() {
		MatrixXf A(2,2);
		A << 7, 0,
			0, -7;

		VectorXf x1(2);
		x1 << 1, 0;

		VectorXf x2(2);
		x2 << 0, 1;

		cout << A * x1 << endl;
		cout << A * x2 << endl;
	}

	void question2() {
		MatrixXf A(3, 3);
		A << -1, 4, -6,
			4, 5, -12,
			-2, -4, 3;

		VectorXf x1(3);
		x1 << 1, 2, -1;

		VectorXf x2(3);
		x2 << -2, 1, 0;

		VectorXf x3(3);
		x3 << 3, 0, 1;

		cout << A * x1 << endl;
		cout << A * x2 << endl;
		cout << A * x3 << endl;
	}
}