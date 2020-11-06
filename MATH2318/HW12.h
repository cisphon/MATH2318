#include "Tools.h"

namespace MATH2318::HW12 {
	void question1() {
		MatrixXf A(1, 1);
		A << 10;

		std::cout << A.determinant() << std::endl;
	}

	void question2() {
		MatrixXf A(2, 2);
		A << 2, 1,
			4, 5;

		std::cout << A.determinant() << std::endl;
	}

	void question3() {
		MatrixXf A(2, 2);
		A << -3, 6,
		1 / 2.0f, 7;

		std::cout << A.determinant() << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-minors-cofactors-matrix-3-1-2-6-5-4-1-2-3-find-minors-matrixm11-m12-m13-m21-m22-m23-m-q15038779
	void question5() {
		MatrixXf A(3, 3);
		A << -3, 2, 1,
			5, 6, 4,
			2, -1, 3;

		/*
		std::vector<float> M11 = Tools::minor_of_matrix(A, 1, 1);
		for (int i = 0; i < M11.size(); ++i)
			std::cout << M11[i] << std::endl; 
		*/

		MatrixXf M11(2, 2);
		M11 << 6, 4,
			-1, 3;

		MatrixXf M12(2, 2);
		M12 << 5, 4,
			2, 3;

		MatrixXf M13(2, 2);
		M13 << 5, 6,
			2, -1;

		MatrixXf M21(2, 2);
		M21 << 2, 1,
			-1, 3;

		MatrixXf M22(2, 2);
		M22 << -3, 1,
			2, 3;

		MatrixXf M23(2, 2);
		M23 << -3, 2,
			2, -1;

		MatrixXf M31(2, 2);
		M31 << 2, 1,
			6, 4;

		MatrixXf M32(2, 2);
		M32 << -3, 1,
			5, 4;

		MatrixXf M33(2, 2);
		M33 << -3, 2,
			5, 6;

		std::cout << M11.determinant() << std::endl;
		std::cout << M12.determinant() << std::endl;
		std::cout << M13.determinant() << std::endl;
		std::cout << M21.determinant() << std::endl;
		std::cout << M22.determinant() << std::endl;
		std::cout << M23.determinant() << std::endl;
		std::cout << M31.determinant() << std::endl;
		std::cout << M32.determinant() << std::endl;
		std::cout << M33.determinant() << std::endl;

		std::cout << pow(-1, 1 + 1) * M11.determinant() << std::endl;
		std::cout << pow(-1, 1 + 2) * M12.determinant() << std::endl;
		std::cout << pow(-1, 1 + 3) * M13.determinant() << std::endl;
		std::cout << pow(-1, 2 + 1) * M21.determinant() << std::endl;
		std::cout << pow(-1, 2 + 2) * M22.determinant() << std::endl;
		std::cout << pow(-1, 2 + 3) * M23.determinant() << std::endl;
		std::cout << pow(-1, 3 + 1) * M31.determinant() << std::endl;
		std::cout << pow(-1, 3 + 2) * M32.determinant() << std::endl;
		std::cout << pow(-1, 3 + 3) * M33.determinant() << std::endl;
	}

	void question6() {
		MatrixXf A(3, 3);
		A << 4, 3, -1,
			2, 1, 3,
			-4, 2, 3;

		std::cout << A.determinant() << std::endl;
	}

	void question7() {
		MatrixXf A(3, 3);
		A << -3, 0, 0,
			9, 5, 0,
			-3, 6, -2;

		std::cout << A.determinant() << std::endl;
	}

	void question8() {
		MatrixXf A(2, 2);
		A << 0, 11,
			2, 0;

		for (int x = -100; x <= 100; ++x)
		{
			A(0) = x - 10;
			A(3) = x - 1;
			if (A.determinant() == 0)
				std::cout << x << ' ';
		}
		std::cout << std::endl;
	}

	void question9() {
		MatrixXf A(3, 3);
		A << 0, 8, 0,
			0, 0, 1,
			0, 1, 0;

		for (int x = -100; x <= 100; ++x)
		{
			A(0) = x;
			A(4) = x;
			A(8) = x;

			if (A.determinant() == 0)
				std::cout << x << ' ';
		}

		std::cout << std::endl;
	}

	// AB - CD
	void question10() {
		MatrixXf A(2, 2);
		A << -2, 1,
			4, -2;

		MatrixXf B(2, 2);
		B << 1, 1,
			0, -1;

		std::cout << A.determinant() << std::endl;
		std::cout << B.determinant() << std::endl;

		std::cout << A * B << std::endl;

		std::cout << (A * B).determinant() << std::endl;
	}

	void question11() {
		MatrixXf A(3, 3);
		A << -1, 3, 1,
			1, 0, 1,
			0, 1, 0;

		MatrixXf B(3, 3);
		B << -1, 0, 0,
			0, 3, 0,
			0, 0, 5;

		std::cout << A.determinant() << std::endl;

		std::cout << B.determinant() << std::endl;

		std::cout << A * B << std::endl;

		std::cout << A.determinant() * B.determinant() << std::endl;
		std::cout << (A * B).determinant() << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/use-fact-ca-c-n-evaluate-determinant-n-x-n-matrix-25-20-10-5-factor-greatest-common-diviso-q9848847
	void question12() {
		MatrixXf A(2, 2);
		A << 8, 12,
			16, -4;

		int a[] = { 8, 12, 16, -4};
		float gcd = static_cast<float>(Tools::findGCD(a, sizeof(a) / sizeof(a[0])));
		std::cout << gcd << std::endl;

		MatrixXf step1 = A / gcd;
		std::cout << step1 << std::endl;

		std::cout << step1.determinant() << std::endl;
		std::cout << A.determinant() << std::endl;
	}

	void question13() {
		MatrixXf A(2, 2);
		A << 6, 4,
			12, 8;

		if (Tools::is_singular(A))
			std::cout << "Singular" << std::endl;
		else
			std::cout << "Nonsingular" << std::endl;
	}

	void question14() {
		MatrixXf A(3, 3);
		A << 1 / 2.0f, 1 / 2.0f, 3,
			4 / 3.0f, -5 / 3.0f, 0,
			1, 1, 1;

		if (Tools::is_singular(A))
			std::cout << "Singular" << std::endl;
		else
			std::cout << "Nonsingular" << std::endl;
	}

	void question15() {
		MatrixXf A(2, 2);
		A << 2, 7,
			4, 6;

		std::cout << A.inverse().determinant() << std::endl;
	}

	void question16() {
		MatrixXf A(3, 3);
		A << 1, -1, 1,
			5, -1, 1,
			2, -3, 3;

		if (A.determinant() == 0)
			std::cout << "The system does not have a unique solution because the determinant of the coefficient matrix is zero." << std::endl;
	}

	void question17() {
		MatrixXf A(2, 2);
		A << 6, -8,
			5, 4;
	
		std::cout << A.transpose().determinant() << std::endl;
		std::cout << (A*A).determinant() << std::endl;
		std::cout << (A * A.transpose()).determinant() << std::endl;
		std::cout << (2 * A).determinant() << std::endl;
		std::cout << (A.inverse()).determinant() << std::endl;
	}
}