#include "Tools.h"

namespace MATH2318::HW14 {
	void question1() {
		MatrixXf A(2, 2);
		A << 17, -60,
			5, -18;

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
		MatrixXf P(2, 2);
		P << -3, -4,
			-1, -1;

		MatrixXf D = MatrixXf::Zero(3, 3);
		D = P.inverse() * A * P;

		cout << D << endl;
	}

	void question2() {
		MatrixXf A(2, 2);
		A << 12, -4,
			-3, 1;

		//https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(2, 2);
		P << -4, 1,
			1, 3;

		cout << P << endl;

		MatrixXf D = MatrixXf::Zero(3, 3);
		D = P.inverse() * A * P;

		cout << D << endl;
	}

	// https://www.slader.com/discussion/question/find-if-possible-a-nonsingular-matrix-p-such-that-p-1-a-p-is-diagonal-verify-that-p-1-a-p-is-a-diagonal-matrix-with-the-eigenvalues-on-the-m-21760553/
	void question3() {
		MatrixXf A(3, 3);
		A << 2, -2, 3,
			0, 3, -2,
			0, -1, 2;

		//https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(3, 3);
		P << -1, 1, 7,
			1, 0, -4,
			1, 0, 2;

		cout << P << endl;

		MatrixXf D = MatrixXf::Zero(3, 3);
		D = P.inverse() * A * P;

		cout << D << endl;
	}

	void question4() {
		MatrixXf A(3, 3);
		A << -3, 0, 0,
			-3, 1, -2,
			5, 0, 1;

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(3, 2);
		P << 0, -8,
			1, -1,
			0, 10;

		if (A.cols() != P.cols() || A.rows() != P.rows())
			cout << "IMPOSSIBLE" << endl;
	}

	void question5() {
		MatrixXf A(2, 2);
		A << 5, 3,
			-3, 5;

		cout << Tools::is_symmetric(A) << endl;
	}

	void question6() {
		MatrixXf A(3, 3);
		A << 2, -3, 4,
			1, 4, 3,
			4, 3, 4;

		cout << Tools::is_symmetric(A) << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-eigenvalues-symmetric-matrix-enter-answers-comma-separated-list-enter-answers-smalles-q38413020
	void question8() {

		//https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
	}

	void question9() {
		// dimensions are based on the number of vectors per lambdas
	}

	void question12() {
		// https://www.chegg.com/homework-help/questions-and-answers/find-matrix-p-ptap-orthogonally-diagonalizes--verify-ptap-gives-proper-diagonal-form-enter-q25500598

		MatrixXf A(3, 3);
		A << -4, 0, 8,
			0, 4, -8,
			8, -8, 0;
		//https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(3, 3);
		P << 2, -2, 1,
			2, 1, -2,
			1, 2, 2;

		cout << P << endl;

		cout << P.transpose() * A * P << endl;
	}
}