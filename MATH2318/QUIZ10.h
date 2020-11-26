#include "Tools.h"

namespace MATH2318::QUIZ10 {
	void question1() {

	}

	void question2() {

	}

	void question3() {
		MatrixXf A(3, 3);
		
		A << 0, 12, 12,
			12, 6, 0,
			12, 0, -6;

		/*
		A << 0, -4, 0,
			-4, 0, 3,
			0, 3, 0;
		*/

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
		VectorXf V1(3);
		V1 << 3, 0, 4;
		//std::cout << "sqrt(" << V1.squaredNorm() << ");" << std::endl;
		V1 = V1 / V1.norm();

		VectorXf V2(3);
		V2 << -4, -5, 3;
		//std::cout << "sqrt(" << V2.squaredNorm() << ");" << std::endl;
		V2 = V2 / V2.norm();

		VectorXf V3(3);
		V3 << -4, 5, 3;
		//std::cout << "sqrt(" << V3.squaredNorm() << ");" << std::endl;
		V3 = V3 / V3.norm();

		MatrixXf P(3, 3);
		P.row(0) = V1;
		P.row(1) = V2;
		P.row(2) = V3;

		//std::cout << P << std::endl;
		std::cout << P.transpose() * A * P << std::endl;
	}

	void question4() {
	
	}

	void question5() {

	}
}