#include "Tools.h"

namespace MATH2318::QUIZ9 {

	void question1() {
		MatrixXf A(2, 2);
		A << 8, 2,
			2, 5;

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
	}

	void question2() {

		// 

		// https://www.symbolab.com/solver/matrix-eigenvectors-calculator/
	}

	void question4() {
		MatrixXf A(2, 2);
		A << -1, -3 / 2.0,
			1 / 2.0, 1;
		
		
		//https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

		MatrixXf P(2, 2);
		P << -1, -3,
			1, 1;
		cout << P << endl;

		cout << P.inverse() * A * P << endl;
	}

	void question5() {
		MatrixXf A(3, 3);
		A << -5, 0, 0,
			1, 4, 2,
			3, 0, 4;

		//https://www.symbolab.com/solver/matrix-eigenvectors-calculator/

	}
}