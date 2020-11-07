#pragma once

namespace MATH2318::TEST2 {
	void question1() {
		VectorXf u(5);
		u << 4, 4, 3, 4, 0;

		VectorXf v(5);
		v << 8, -5, 3, 6, -3;

		cout << u - v << endl << "~~~~~~~~~" << endl;
		cout << 2*(u + 3*v) << endl << "~~~~~~~~~" << endl;
		cout << 2*v - u << endl << "~~~~~~~~~" << endl;
	}

	void question12() {
		VectorXf u(4);
		u << 1, 0, -1, -2;

		VectorXf v(4);
		v << 2, 0, 3, 1;

		cout << "sqrt(" << u.squaredNorm() << ");" << endl;
		cout << "sqrt(" << v.squaredNorm() << ");" << endl;
		cout << "sqrt(" << (u + v).squaredNorm() << ");" << endl;
	}

	void question7() {
		VectorXf a(3);
		a << 5, 4, 3;

		VectorXf b(3);
		b << 0, 4, 3;

		VectorXf c(3);
		c << 0, 0, 3;

		VectorXf u(3);
		u << 15, 8, 15;

		cout << Tools::vectorxf_linear_combo_3(a, b, c, u) << endl;
	}

	void question13() {
		VectorXf u(4);
		u << 0, 0, 1, 1;

		VectorXf v(4);
		v << 4, 4, 4, 4;

		cout << Tools::angle_between_two_vectors_radians(u, v) << endl;
	}

	void question15() {
		VectorXf u(3);
		u << 1, 1, 1;

		VectorXf v(3);
		v << 8, -7, 6;

		float uv = u(0)*v(0) + 2*u(1)*v(1) + u(2)*v(2);

		cout << acos(uv / (u.norm() * v.norm())) << endl;
	}

	void question16() {
		VectorXf v1(3);
		v1 << 0, 5, -12;

		VectorXf v2(3);
		v2 << 0, 4, 1;

		VectorXf v3(3);
		v3 << 5, 0, 0;

		VectorXf u1 = v1;

		cout << u1 << "/" << "sqrt(" << u1.squaredNorm() << ");" << endl;

		float v2u1 = v2.dot(u1);
		float u1u1 = u1.dot(u1);


		VectorXf u2 = v2 - (v2u1 / u1u1) * u1;

		/*
		cout << v2 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v2u1 << "/" << u1u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		*/

		//cout << u2 << "/" << "sqrt(" << u2.squaredNorm() << ");" << endl << "~~~~~~~~~~~" << endl;

		float v3u1 = v3.dot(u1);
		u1u1 = u1.dot(u1);

		float v3u2 = v3.dot(u2);
		float u2u2 = u2.dot(u2);


		VectorXf u3 = v3 - (v3u1 / u1u1) * u1 - (v3u2 / u2u2) * u2;

		
		/*
		cout << v3 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v3u1 << "/" << u1u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v3u2 << "/" << u2u2 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << u2 << endl << "~~~~~~~~~~~~~~~~" << endl;
		*/


		//cout << u3 << "/" << "sqrt(" << u3.squaredNorm() << ");" << endl << "~~~~~~~~~~~" << endl;

	}
}