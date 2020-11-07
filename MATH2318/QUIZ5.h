#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ5 {
	void question6() {
		VectorXf u(4);
		u << -2, -1, 0, 1;

		VectorXf v(4);
		v << 1, 3, 0, 1;

		cout << "sqrt(" << u.squaredNorm() << ")" << endl;
		cout << "sqrt(" << v.squaredNorm() << ")" << endl;
		cout << (u + v).norm() << endl;
	}

	void question4() {

	}

	void question8() {
		VectorXf u(4);
		u << -2, -1, 1, 2;

		VectorXf v(4);
		v << -2, -1, 1, 2;

		Tools::distance(u, v);
	}

	void question9() {
		VectorXf u(2);
		u << -2, -3;

		VectorXf v(2);
		v << 4, 1;

		cout << Tools::angle_between_two_vectors_radians(u, v) << endl;
	}

	void question10() {
		VectorXf u(2);
		u << 6, -5;

		VectorXf v(2);
		v << 1 / 2.0f, - 3 / 5.0f;

		Tools::orthogonal_parallel_or_neither(u, v);
	}
}