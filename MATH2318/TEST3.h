#pragma once

namespace MATH2318::TEST3 {
	void question1() {
		VectorXf v(3);
		v << 2, 3, 0;

		VectorXf w(3);
		w << -11, 3, 14;

		VectorXf image(3);
		image << (v(1) - v(0)), (v(0) + v(1)), 2*v(0);

		cout << image << endl;

		VectorXf preImage(3);
		
		preImage << (w(1) - w(0)), (w(0) + w(1)), 2 * w(0);
		
		cout << preImage << endl;
	}

	void question2() {

	}

	void question3() {
		int a = 1, b = 2, c = -4;

		VectorXf x(3);
		x << -1, 4, 2;

		VectorXf y(3);
		y << 1, -2, 3;

		VectorXf z(3);
		z << 0, -2, 2;

		VectorXf R(3);
		R << (x(0) * a + y(0) * b + z(0) * c), (x(1) * a + y(1) * b + z(1) * c), (x(2) * a + y(2) * b + z(2) * c);

		cout << R << endl;
	}

	void question4() {

	}

	void question5() {
		VectorXf v(2);
		v << 6, -6;

		VectorXf T(4);
		T << v(0) + v(1), v(0) - v(1), 3 * v(0), 3 * v(1);

		cout << T << endl;
	}

	void question6() {

	}

	void question7() {
		MatrixXf A(3, 3);
		A << 2, -2, 7,
			0, 3, -2,
			0, -1, 2;

		// based upon the eigen vectors...
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(3, 3);
		P << -5, 1, 11,
			1, 0, -4,
			1, 0, 2;

		cout << P << endl << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

		cout << P.inverse() * A * P << endl;
	}

	void question8() {
		MatrixXf A(3, 3);
		A << 6, 12, 0,
			12, 0, 12,
			0, 12, -6;

		// based upon the eigen vectors...
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(3, 3);
		P << -2, 1, 2,
			1, -2, 2,
			2, 2, 1;

		cout << P << endl << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

		cout << P.transpose() * A * P << endl;
	}

	void question9() {
		MatrixXf A(2, 3);
		A << 5, -3, 6,
			4, -2, 5;

		cout << A.transpose() * A << endl;

		cout << A * A.transpose() << endl;
	}

	void question10() {

	}
}