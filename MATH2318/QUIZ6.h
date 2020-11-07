#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ6 {
	void question1() {
		VectorXf u(2);
		u << 15, -8;

		VectorXf v(2);
		v << 5, -12;

		cout << u.dot(v) << endl;
		cout << "sqrt(" << u.squaredNorm() << ");" << endl;
		cout << "sqrt(" << v.squaredNorm() << ");" << endl;
		cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << endl;
	}

	void question2() {
		VectorXf u(3);
		u << 3, 1, 0;

		VectorXf v(3);
		v << 0, 3, 1;

		cout << u.dot(v) << endl;
		cout << "sqrt(" << u.squaredNorm() << ");" << endl;
		cout << "sqrt(" << v.squaredNorm() << ");" << endl;
		cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << endl;
	}

	void question3() {
		VectorXf u(2);
		u << -5, 0;

		VectorXf v(2);
		v << 3, 4;

		float uv = u(0)*v(0) + 2*u(1)*v(1);

		cout << uv << "/(" << "sqrt(" << u.squaredNorm() << ") * sqrt(" << v.squaredNorm() << ");";

		cout << acos(uv / (u.norm() * v.norm())) << endl;
	}

	void question4() {
		cout << acos(0) << endl;
	}

	void question6() {
		VectorXf u(3);
		u << 1, -1, 2;

		VectorXf v(3);
		v << -1, -1, 2;

		cout << Tools::proj_a_on_b(u, v) << endl;
		cout << "~~~~~~~~~~~~~~~~~" << endl;
		cout << Tools::proj_a_on_b(v, u) << endl;
	}

	void question7() {
		VectorXf a(3);
		a << -17, -4, -1;

		VectorXf b(3);
		b << -1, 4, 1;

		VectorXf c(3);
		c << 0, -1, 4;

		cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << endl;
		cout << (Tools::is_orthonormal(a, b) && Tools::is_orthonormal(b, c)) << endl;
	}

	void question8() {
		VectorXf a(3);
		a << sqrt(6) / 3.0, sqrt(6) / 6.0, -sqrt(6) / 6.0;

		VectorXf b(3);
		b << sqrt(3) / 3.0, - sqrt(3) / 3.0, sqrt(3) / 3.0;

		VectorXf c(3);
		c << sqrt(2) / 2.0, sqrt(2) / 2.0, sqrt(2) / 2.0;

		cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << endl;
	}

	void question9() {
		VectorXf v1(3);
		v1 << 0, 15, -8;

		VectorXf v2(3);
		v2 << 0, 4, 1;

		VectorXf v3(3);
		v3 << 3, 0, 0;

		VectorXf u1 = v1;

		float v2u1 = v2.dot(u1);
		float u1u1 = u1.dot(u1);

		VectorXf u2 = v2 - (v2u1 / u1u1) * u1;

		//cout << u1 << "/" << "sqrt(" << u1.squaredNorm() << ");" << endl;

		/*
		cout << v2 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v2u1 << "/" << u1u1 << "~~~~~~~~~~~~~~~~" << endl;
		cout << u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		*/

		//cout << u2 << "/" << "sqrt(" << u2.squaredNorm() << ");" << endl << "~~~~~~~~~~~" << endl;

		float v3u1 = v3.dot(u1);
		u1u1 = u1.dot(u1);

		float v3u2 = v3.dot(u2);
		float u2u2 = u2.dot(u2);

		VectorXf u3 = v3 - (v3u1 / u1u1) * u1 - (v3u2 / u2u2) * u2;


		cout << u3 << "/" << "sqrt(" << u3.squaredNorm() << ");" << endl << "~~~~~~~~~~~" << endl;

		/*
		cout << u1 << endl; /// u1.norm() << endl << "~~~~~~~~~~~" << endl;
		cout << "sqrt(" << u1.squaredNorm() << ");" << endl;


		cout << u2 << endl; /// u2.norm() << endl << "~~~~~~~~~~~" << endl;
		cout << u3 << endl; /// u3.norm() << endl << "~~~~~~~~~~~" << endl;
		*/
	}
}