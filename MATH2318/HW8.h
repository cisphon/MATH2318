#pragma once

#include "Tools.h"

namespace MATH2318::HW8 {
	void question1() {
		VectorXf u(2);
		u << 3, -4;

		VectorXf v(2);
		v << -8, -15;

		cout << u.dot(v) << endl;
		cout << "sqrt(" << u.squaredNorm() << ");" << endl;
		cout << "sqrt(" << v.squaredNorm() << ");" << endl;
		cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-u-v-llull-11v11-d-u-v-given-inner-product-defined-rn-u-v-3u1v1-u2v2-u-4-0-u-v-v-5-2-c-q25787715
	void question2() {
		VectorXf u(3);
		u << 1, 1, 1;

		VectorXf v(3);
		v << 5, 2, 5;

		// (u1 * v1) + 3(u2 * v2) + (u3 * v3)

		cout << u(0) * v(0) + 3 * u(1) * v(1) + u(2) * v(2) << endl;
		cout << "sqrt(" << u(0) * u(0) + 3 * u(1) * u(1) + u(2) * u(2) << ");" << endl;
		cout << "sqrt(" << v(0) * v(0) + 3 * v(1) * v(1) + v(2) * v(2) << ");" << endl;

		VectorXf uv(3);
		uv = u - v;
		
		// <u-v, u-v>
		cout << "sqrt(" << uv(0) * uv(0) + 3 * uv(1) * uv(1) + uv(2) * uv(2) << ");" << endl;
	}

	void question3() {
		VectorXf u(4);
		u << -1, 1, 2, 0;

		VectorXf v(4);
		v << 1, 0, -1, 2;

		cout << u.dot(v) << endl;
		cout << "sqrt(" << u.squaredNorm() << ");" << endl;
		cout << "sqrt(" << v.squaredNorm() << ");" << endl;
		cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << endl;
	}

	void question4() {
		// p(x) = 3 - 1x + 4x^2
		// p(x) = 0 + 1x - 1x^2

		// <p,q> = a0 * b0 + a1 * b1 + a2 * b2
		float pq = 3 * 0 + -1 * 1 + 4 * -1;

		cout << pq << endl;
		
		// |p| = sqrt(<p,p>)

		cout << "sqrt(" << (3*3 + -1*-1 + 4*4) << ");" << endl;
		cout << "sqrt(" << (0*0 + 1*1 -1*-1) << ");" << endl;

		// |p-q| = d<p,q>

		cout << "sqrt(" << ((3-0)*(3-0) + (-1-1)*(-1-1) + (4 - -1)*(4 - -1)) << ");" << endl;

	}

	void question5() {
		VectorXf u(3);
		u << 1, 1, 1;

		VectorXf v(3);
		v << 5, -4, 3;

		float uv = u(0)*v(0) + 2*u(1)*v(1) + u(2)*v(2);

		cout << acos(uv / (u.norm() * v.norm())) << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-angle-vectors-x-2x3-g-x-4x2-f-g-f-x-g-x-dx-radians-q32263241
	void question6() {
		float fg = 0; // integral of the functions.
		cout << acos(fg) << endl; // exactly pi / 2 radians
	}

	void question7() {
		// lmao I just guessed

	}

	void question8() {
		VectorXf u(3);
		//u << 1, -1, -2;
		u << -1, -2, 1;

		VectorXf v(3);
		//v << 1, 1, 2;
		v << -1, 2, 1;

		cout << Tools::proj_a_on_b(u, v) << endl;
		cout << "~~~~~~~~~~~~~~~~~" << endl;
		cout << Tools::proj_a_on_b(v, u) << endl;
	}
}