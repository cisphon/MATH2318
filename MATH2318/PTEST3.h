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
		int a = 2, b = 1, c = -4;

		VectorXf x(3);
		x << 4, -1, 2;

		VectorXf y(3);
		y << 1, -2, 3;

		VectorXf z(3);
		z << 0, 2, -2;

		VectorXf R(3);
		R << (x(0)*a + y(0)*b + z(0)*c), (x(1) * a + y(1) * b + z(1) * c), (x(2)*a + y(2)*b + z(2)*c);

		cout << R << endl;
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

	// https://www.chegg.com/homework-help/questions-and-answers/consider-following-t-reflection-origin-r2-t-x-y-x-y-v-2-5--find-standard-matrix-linear-tra-q13874755
	void question10() {
		MatrixXf A(2, 2);
		A << -1, 0,
			0, -1;
		
		VectorXf v(2);
		v << 3, 4;

		VectorXf image = A * v;

		cout << image << endl;
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

	// https://www.chegg.com/homework-help/questions-and-answers/find-characteristic-equation-eigenvalues-corresponding-eigenvectors-matrix-2-2-3-2-0-0-1-2-q38413105
	void question13() {
		MatrixXf A(2, 2);
		A << 6, -2,
			-3, 1;

		cout << "(" << A(0) << " - L)(" << A(3) << " - L) + " << - A(1) * A(2) << " = 0" <<endl;

		// NOT BASED ON LOCKED CONTENT.
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator		
	}

	// https://www.chegg.com/homework-help/questions-and-answers/consider-following-1-12-1-6-p-3-4-1-1-verify-diagonalizable-computing-p-1ap-p-1ap-incorrec-q33563397
	void question14() {
		MatrixXf A(3, 3);
		A << -5, 1, 0,
			0, -1, 0,
			2, 0, -2;

		MatrixXf P(3, 3);
		P << 0, 1, -3,
			0, 4, 0,
			1, 2, 2;

		MatrixXf R = P.inverse() * A * P;

		cout << R << endl;

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		cout << R.eigenvalues() << endl;
	}

	void question15() {
		MatrixXf A(2, 2);
		A << -1, -3 / 2.0,
			1 / 2.0, 1;

		// based upon the eigen vectors...
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(2, 2);
		P << -3, -1, // first num from each vector
			1, 1;

		cout << P << endl << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

		cout << P.inverse() * A * P << endl;
	}

	void question16() {
		MatrixXf A(3, 3);
		A << 2, -2, 5,
			0, 3, -2,
			0, -1, 2;

		// based upon the eigen vectors...
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(3, 3);
		P << -3, 1, 9,
			1, 0, -4,
			1, 0, 2;

		cout << P << endl << "~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

		cout << P.inverse() * A * P << endl;
	}

	void question18() {
		MatrixXf A(2, 2);
		A << 1, 1,
			1, 1;
		
		// BASED ON LOCKEDDDDDD!!!!!!!!!!!!!!!!!
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
		VectorXf V1(2);
		V1 << 1, 1;
		std::cout << "sqrt(" << V1.squaredNorm() << ");" << std::endl;
		V1 = V1 / V1.norm();

		VectorXf V2(2);
		V2 << -1, 1;
		std::cout << "sqrt(" << V2.squaredNorm() << ");" << std::endl;
		V2 = V2 / V2.norm();

		MatrixXf P(2, 2);
		P.row(0) = V1;
		P.row(1) = V2;

		std::cout << P << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << P.transpose() * A * P << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}

	void question19() {
		MatrixXf A(3, 3);
		A << 0, 10, 10,
			10, 5, 0,
			10, 0, -5;
		
		// BASED ON LOCKEDDDDDD!!!!!!!!!!!!!!!!!
		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
		VectorXf V1(3);
		V1 << 1, -2, 2;
		std::cout << "sqrt(" << V1.squaredNorm() << ");" << std::endl;
		V1 = V1 / V1.norm();

		VectorXf V2(3);
		V2 << -2, 1, 2;
		std::cout << "sqrt(" << V2.squaredNorm() << ");" << std::endl;
		V2 = V2 / V2.norm();

		VectorXf V3(3);
		V3 << 2, 2, 1;
		std::cout << "sqrt(" << V3.squaredNorm() << ");" << std::endl;
		V3 = V3 / V3.norm();

		MatrixXf P(3, 3);
		P.row(0) = V1;
		P.row(1) = V2;
		P.row(2) = V3;

		std::cout << P << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << P.transpose() * A * P << std::endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/provide-answers-b-c--keep-mind-b-c-may-choose-multiple-answers-type-clearly-choice-s-q30528479
	void question20() {
		MatrixXf A(3, 3);
		A << -3, 2, -5,
			2, 4, 3,
			-5, 3, 9;

		cout << Tools::is_symmetric(A) << endl;

		// y1
		// y1
		// y1
		// y1
		// n
		// y2
		// y3
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