#pragma once

#include "Tools.h"

namespace MATH2318::PTEST3 {
	void question1() {
		// (x-13)*(x-1) - 4*7 = x^2 - 14x - 15
	}

	void question2() {
		MatrixXf A(3, 3);
		A << 2, 1, -3,
			1, 2, 0,
			-2, 1, 4;

		cout << A.determinant() << endl;
	}

	void question3() {
		VectorXf v(2);
		v << 3, -8;

		VectorXf w(2);
		w << 3, 17;

		VectorXf image(2);
		image << (v(0) + v(1)), (v(0) - v(1));
		cout << image << endl << "~~~~~~~~~~~~~~" << endl;

		VectorXf preImage(2);
		preImage << (w(0) + w(1)), (w(0) - w(1));
		cout << preImage << endl;
	}

	void question4() {
		VectorXf v(3);
		v << 2, 5, 0;

		VectorXf w(3);
		w << -7, 3, 10;

		VectorXf image(3);
		image << (v(1) - v(0)), (v(0) + v(1)), (2 * v(0));
		cout << image << endl << "~~~~~~~~~~~~~~" << endl;

		VectorXf preImage(3); // wrong
		preImage << (w(1) - w(0)), (w(0) + w(1)), (2 * w(0));
		cout << preImage << endl; // last one is t, be sure to simplify!
	}

	// https://www.chegg.com/homework-help/questions-and-answers/let-t-r3-r3-linear-transformation-t-1-0-0-2-4-1-t-0-1-0-3-2-1-t-0-0-1-2-2-0--find-indicate-q25637459
	void question7() {
		
	}

	void question8() {
		// T(x,y) = (x + 8y, 3x - 6y)

		MatrixXf A(2, 2);
		A << 1, 8,
			3, -6;

		cout << A << endl;
	}

	void question9() {
		// T(x, y, z) = (5x - 8z, 8y - z)

		MatrixXf A(2, 3);
		A << 5, 0, -8,
			0, 8, -1;

		cout << A << endl;
	}

	void question11() {
		MatrixXf A(3, 3);
		A << -1, -1, 1,
			-2, 0, -2,
			3, -3, 1;

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
	}

	void question12() {
		MatrixXf A(2, 2);
		A << 8, 2,
			2, 5;

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
		
		// divide by -1 or 2 or whatever!
	}

	void question13() {
		MatrixXf A(2, 2);
		A << 12, -3,
			-4, 1;


	}

	void question16() {

	}

	void question18() {
		MatrixXf A(2, 2);
		A << 3, 3,
			3, 3;
		
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/eigenvectors%20%5Cbegin%7Bpmatrix%7D2%262%5C%5C%202%262%5Cend%7Bpmatrix%7D
		VectorXf V1(2);
		V1 << 1, 1;

		VectorXf V2(2);
		V2 << -1, 1;


	}

	void question19() {
		MatrixXf A(3, 3);
		A << 6, 0, -12,
			0, -6, 12,
			-12, 12, 0;

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
		VectorXf V1(3);
		V1 << 2, 2, 1;
		std::cout << "sqrt(" << V1.squaredNorm() << ");" << std::endl;
		V1 = V1 / V1.norm();

		VectorXf V2(3);
		V2 << 1, -2, 2;
		std::cout << "sqrt(" << V2.squaredNorm() << ");" << std::endl;
		V2 = V2 / V2.norm();

		VectorXf V3(3);
		V3 << -2, 1, 2;
		std::cout << "sqrt(" << V3.squaredNorm() << ");" << std::endl;
		V3 = V3 / V3.norm();

		MatrixXf P(3, 3);
		P.row(0) = V1;
		P.row(1) = V2;
		P.row(2) = V3;

		std::cout << P << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << P.transpose() * A * P << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}

	void question21() {
		MatrixXf A(2, 3);
		A << 3, -5, 4,
			2, -1, 3;

		cout << A.transpose() * A << endl << "~~~~~~~~~~~~~" << endl;

		cout << A * A.transpose() << endl << "~~~~~~~~~~~~~" << endl;

	}

	// https://www.chegg.com/homework-help/questions-and-answers/solve-system-first-order-linear-differential-equations-use-c1-c2-constants-y1-y1-2y2-y2-2y-q15302645
	void question22() {

	}

	// https://www.chegg.com/homework-help/questions-and-answers/solve-system-first-order-lineardiffeential-equations-use-c-c2-constants-y15y1-2-q32760912
	void question23() {

	}
}