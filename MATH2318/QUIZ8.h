#include "Tools.h"

namespace MATH2318::QUIZ8 {
	void question1() {
		MatrixXf A(2, 2);
		A << 3, 4,
			-7, 5;

		std::cout << A.determinant() << std::endl;
	}

	void question2() {
		// AB-CD
	}

	void question3() {
		MatrixXf A(3, 3);
		A << 2, 3, -4,
			0, 3, 2,
			-1, 4, 3;

		std::cout << A.determinant() << std::endl;
	}

	void question4() {
		MatrixXf A(3, 3);
		A << 6, 3, 7,
			0, 5, 5,
			0, 0, -4;

		std::cout << A.determinant() << std::endl;
	}

	void question5() {
		MatrixXf A(3, 3);
		A << -2, 0, 0,
			6, 5, 0,
			-7, 2, -2;

		std::cout << A.determinant() << std::endl;
	}

	void question6() {
		MatrixXf A(3, 3);
		A << 0, 4, 0,
			0, 11, 4,
			0, 3, 0;

		for (int x = -100; x <= 100; ++x)
		{
			A(0) = x;
			A(4) = x + 11;
			A(8) = x;

			if (A.determinant() == 0)
				std::cout << x << ' ';
		}
		std::cout << std::endl;
	}

	void question7() {
		MatrixXf A(2, 2);
		A << 2, 5,
			1, 3;

		std::cout << A.inverse().determinant() << std::endl;
	}

	void question8() {
		MatrixXf A(3, 3);
		A << 1, -1, 1,
			2, -1, 1,
			3, -7, 7;

		if (A.determinant() == 0)
			std::cout << "The system does not have a unique solution because the determinant of the coefficient matrix is zero." << std::endl;
	}

	void question9() {
		MatrixXf A(3, 3);
		A << 3 / 2.0f, 3 / 2.0f, 5,
			2 / 3.0f, -4 / 3.0f, 0,
			1, 1, 1;

		if (Tools::is_singular(A))
			std::cout << "Singular" << std::endl;
		else
			std::cout << "Nonsingular" << std::endl;
	}
}