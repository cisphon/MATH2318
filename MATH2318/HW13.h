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
	
	// https://www.chegg.com/homework-help/questions-and-answers/find-characteristic-equation-eigenvalues-corresponding-eigenvectors-matrix-0-3-9-4-4-18-0--q16339129
	void question3() {
		MatrixXf A(2, 2);
		A << 8, -4,
			-2, 1;

		//MatrixXf LI = MatrixXf::Identity(A.rows(), A.cols());

	    //https://www.wolframalpha.com/input/?i=determinant+of+%7B%7B0-x%2C-3%2C3%7D%2C%7B-4%2C4-x%2C-6%7D%2C%7B0%2C0%2C4-x%7D%7D
		//https://www.symbolab.com/solver/matrix-eigenvectors-calculator
	}
}