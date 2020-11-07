#pragma once

#include "Tools.h"

namespace MATH2318::HW7 {

	void question9() {
		float c, d;
		c = d = 1;

		float b = c - 2 * d;
		float a = 2 * c - 4 * b;

		cout << a << " " << b << " " << c << " " << d << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-basis-dimension-solution-space-homogeneous-system-linear-equations-x-y-z-0-3x-y-0-0-3-q11848773
	void question10() {

	}

    // https://www.chegg.com/homework-help/questions-and-answers/use-fact-matrices-b-row-equivalent-2-5-8-0-17-1-3-5-1-5-1-1-1-3-19-1-7-13-5-3-b-1-0-1-0-1--q15440329
	void question11() {

	}

	// https://www.homeworklib.com/questions/1494996/consider-the-system-of-equations-shown-below-2x
	void question12() {

	}

	void question13() {
		VectorXf v(4);
		v << 2, 0, -5, -3;

		cout << "sqrt(" << v.squaredNorm() << ")" << endl;
	}

	void question14() {
		VectorXf u(2);
		u << -2, 1 / 4.0f;

		VectorXf v(2);
		v << 3, -1 / 2.0f;

		cout << "sqrt(" << u.squaredNorm() << ")" << endl;
		cout << "sqrt(" << v.squaredNorm() << ")" << endl;
		cout << "sqrt(" << (u + v).squaredNorm() << ")" << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-vector-v-given-length-direction-u-v-3-u-1-2-0-1-q8729877
	void question15() {
		VectorXf u(4);
		u << 1, -2, 0, -1;

		cout << u.squaredNorm() << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/values-c-c-1-4-2-1-c-enter-answers-comma-separated-list-q9152653
	void question16() {
		VectorXf u(3);
		u << 1, 4, 2;

		cout << 1 << "/" << "sqrt(" << u.squaredNorm() << ")" << endl;
	}

	void question17() {
		VectorXf u(2);
		u << -1, 1;

		VectorXf v(2);
		v << 1, -1;

		cout << "sqrt(";
		cout << Tools::distance(u, v) * Tools::distance(u, v); 
		cout << ")";
		cout << endl;
	}

	void question18() {
		VectorXf u(2);
		u << 4, -3;

		VectorXf v(2);
		v << 3, 2;

		cout << u.dot(v) << endl;
		cout << v.dot(v) << endl;
		cout << u.norm() * u.norm() << endl;
		
		cout << "~~~~~~~~~~~" << endl;
		cout << u.dot(v) * v << endl;
		cout << "~~~~~~~~~~~" << endl;

		cout << "~~~~~~~~~~~" << endl;
		cout << u.dot(5 * v) << endl;
		cout << "~~~~~~~~~~~" << endl;

	}

	void question20() {
		VectorXf u(2);
		u << 1, 3;

		VectorXf v(2);
		v << 2, -4;

		cout << Tools::angle_between_two_vectors_radians(u, v) << endl;
	}

	// fuck you
	void question21() {
		VectorXf u(3);
		u << 5, 2, 4;

		VectorXf v(3);
		v << -2, 5, 0;

		cout << Tools::angle_between_two_vectors_radians(u, v) << endl;
	}

	void question22() {
		VectorXf u(2);
		u << 8, -5;

		VectorXf v(2);
		v << 1 / 2.0, -4 / 5;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question23() {
		VectorXf u(3);
		u << 0, 0, 2;

		VectorXf v(3);
		v << 2, -4, 0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question24() {
		VectorXf u(4);
		u << -8, 3 / 2.0, -5, 7 / 2.0;

		VectorXf v(4);
		v << 4, -3 / 4.0, 5 / 2.0, -7 / 4.0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question25() {
		VectorXf u(2);
		u << 2, 2;

		VectorXf v(2);
		v << 0, -2;

		if (Tools::holds_triangle_inequality(u, v))
			cout << "Holds inequality" << endl;
		else
			cout << "Doesn't hold inequality" << endl;
	}

	void question26() {
		VectorXf u(3);
		u << -1, 1, 4;

		VectorXf v(3);
		v << 4, 0, 1;

		if (Tools::is_orthogonal(u, v))
			cout << "Is orthogonal" << endl;
		else
			cout << "Isn't orthogonal" << endl;

		cout << u.squaredNorm() << endl;
		cout << v.squaredNorm() << endl;

		cout << "~~~~~~~~~" << endl;
		cout << u + v << endl << "~~~~~~~~~" << endl;
		cout << (u + v).squaredNorm() << endl;

		if ((u + v).squaredNorm() == u.squaredNorm() + v.squaredNorm())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/let-v-v1-v2-vector-r2-show-v2-v1-orthogonal-v-use-fact-find-two-unit-vectors-orthogonal-gi-q9152569
	void question27() {
		VectorXf v(2);
		v << 3, 4;

		VectorXf vb(2);
		vb << v(1), -v(0);


		VectorXf va(2);
		va << -vb(0), vb(1);


		cout << "~~~~~~~~~" << endl;
		cout << vb / vb.norm() << endl;
		cout << "~~~~~~~~~" << endl;


		cout << "~~~~~~~~~" << endl;
		cout << va / va.norm() << endl;
		cout << "~~~~~~~~~" << endl;
	}

	void question28() {
		VectorXf v(5);
		v << 2, -3, 5, -1, 3;

		cout << "sqrt(" << v.squaredNorm() << ")" << endl;
	} 
}