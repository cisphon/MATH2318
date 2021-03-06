
#pragma once

#include "Tools.h"
#include <sstream>

namespace MATH2318::HW10 {
	void question1() {
		VectorXf s1(4);
		s1 << 1, 1, 1, 1;

		VectorXf s2one(4);
		s2one << 1, 1, -1, -1;

		VectorXf s2two(4);
		s2two << 0, 0, 5, -5;

		if (Tools::is_orthogonal(s1, s2one) && Tools::is_orthogonal(s1, s2two))
			cout << "Orthogonal" << endl;
		else
			cout << "Not Orthogonal" << endl;
	}

	// second problem on this \/
	// https://www.chegg.com/homework-help/questions-and-answers/find-bases-four-fundamental-subspaces-matrix-basis-n-n-basis-r-r--q1227712
	void question2() {
		MatrixXf A(2, 3);
		A << 1, 7, 1,
			0, 8, 0;

		cout << A.transpose() << endl;
	}

	// http://www.math.odu.edu/~bogacki/cgi-bin/lat.cgi
	void question3() {
		MatrixXf A(4, 4);
		A << 1, 0, 0, 2,
			0, 1, 1, 2,
			1, 1, 1, 4,
			1, 3, 3, 8;

		cout << A.transpose() << endl;
	}

	// https://www.slader.com/discussion/question/find-a-least-squares-solution-of-3/
	// https://www.wolframalpha.com/input/?i=system+of+equations
	void question4() {
		MatrixXf A(3, 2);
		A << 1, 2,
			 1, 1,
			 2, 1;

		MatrixXf b(3, 1);
		b << 0,
			-3,
			2;

		cout << A.transpose() * A << endl << "~~~~~~~~~~~~" << endl;
		cout << A.transpose() * b << endl << "~~~~~~~~~~~~" << endl;
	}

	//  x1 y1    x2 y2    x3 y3
	// (-1, 1), (1, -2), (3, -3)
	void question5() {
		VectorXf x(3);
		x << -1, 1, 3;
		//x << -1, 1, 3;

		VectorXf y(3);
		y << 1, -2, -3;
		//y << 0, -1, -3;

		float sumY = y.sum();
		float sumX2 = x(0)*x(0) + x(1)*x(1) + x(2)*x(2);
		float sumX = x.sum();
		float sumXY = x(0) * y(0) + x(1) * y(1) + x(2) * y(2);
		float n = x.size(); // we have 3 data points!

		ostringstream ss;
		ss << "y = ";

		float a_numerator = sumY * sumX2 - sumX * sumXY;
		float a_denominator = n * sumX2 - (sumX) * (sumX);
		ss << a_numerator << '/' << a_denominator << " + ";

		float b_numerator = n * sumXY - sumX * sumY;
		float b_denominator = n * sumX2 - (sumX) * (sumX);
		ss << b_numerator << '/' << b_denominator << 'x';

		cout << ss.str() << endl;
	}
}