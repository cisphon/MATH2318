#pragma once

#include "Tools.h"

namespace MATH2318::HW9 {
	void question1() {
		VectorXf a(2);
		a << 2, 4;

		VectorXf b(2);
		b << 4, -2;

		cout << Tools::is_orthogonal(a, b) << endl;
		// cout << Tools::is_orthonormal(a, b) << endl;
		
		// check if linearly independent.
	}

	void question2() {
		VectorXf a(3);
		a << -17, -1, -4;

		VectorXf b(3);
		b << -1, 1, 4;

		VectorXf c(3);
		c << 0, 4, -1;

		cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << endl;


	}

	void question3() {
		VectorXf a(3);
		a << sqrt(3) / 3.0, sqrt(3) / 3.0, -sqrt(3) / 3.0;

		VectorXf b(3);
		b << -sqrt(6) / 6.0, sqrt(6) / 3.0, sqrt(6) / 6.0;

		VectorXf c(3);
		c << sqrt(2) / 2.0, sqrt(2) / 2.0, sqrt(2) / 2.0;

		cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << endl;

	}

	void question4() {
		VectorXf a(4);
		a << -6, 2, 1, 3;

		VectorXf b(4);
		b << 2, 6, 0, 0;

		cout << Tools::is_orthogonal(a, b) << endl;
	}

    // https://www.chegg.com/homework-help/questions-and-answers/consider-following-show-set-vectors-r-orthogonal-b-normalize-set-produce-orthonormal-set-q25068669
	void question5() {
		VectorXf a(3);
		a << sqrt(2), sqrt(2), sqrt(2);

		VectorXf b(3);
		b << -sqrt(3), 0, sqrt(3);

		cout << a.dot(b) << endl;

		// b 
		// 1 / sqrt(a(0)^2 + a(1)^2 + a(2)^2)
	}

	void question6() {
		VectorXf v1(2);
		v1 << 20, 21;
		//v1 << 0, 1;

		VectorXf v2(2);
		v2 << 0, 1;
		//v2 << 2, 5;

		VectorXf w1 = v1;

		//cout << w1.squaredNorm() << endl;

		VectorXf w2 = v2 - (v2.dot(w1)) / (w1.dot(w1)) * w1;

		//cout << v2.dot(w1) << "/" << w1.dot(w1) << endl;

		//cout << w2 << endl;

		//cout << v2.dot(w1) << endl;
		//cout << w1.dot(w1) << endl;

		//cout << w1 << endl;
		//cout << w2 << endl;

		cout << v1.norm() << endl;
		cout << "1/" << "sqrt(" << v1(0)*v1(0) << " + " << v1(1)*v1(1) << ");" << endl;

		cout << w2.norm() << endl;
		cout << "1/" << "sqrt(" << w2(0)*w2(0) << " + " << w2(1)*w2(1) << ");" << endl;

		VectorXf u1 = w1 / w1.norm();
		VectorXf u2 = w2 / w2.norm();

		//cout << u1 << endl;
		//cout << u2 << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/apply-gram-schmidt-orthonormalization-process-transform-given-basis-rn-orthonormal-basis-u-q16919411
	void question7() {
		VectorXf v1(3);
		//v1 << 8, -6, 0;
		v1 << -15, 8, 0;

		VectorXf v2(3);
		//v2 << 5, 1, 0;
		v2 << 1, 4, 0;

		VectorXf v3(3);
		//v3 << 0, 0, 2;
		v3 << 0, 0, 3;

		VectorXf u1 = v1;


		float v2u1 = v2.dot(u1);
		float u1u1 = u1.dot(u1);

		VectorXf u2 = v2 - (v2u1 / u1u1) * u1;

		/*

		cout << v2 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v2u1 << "/" << u1u1 << "~~~~~~~~~~~~~~~~" << endl;
		cout << u1 << endl << "~~~~~~~~~~~~~~~~" << endl;

		*/

		cout << u2 << "/" << u2.norm() << endl << "~~~~~~~~~~~" << endl;

		float v3u1 = v3.dot(u1);
		u1u1 = u1.dot(u1);

		float v3u2 = v3.dot(u2);
		float u2u2 = u2.dot(u2);

		VectorXf u3 = v3 - (v3u1 / u1u1) * u1 - (v3u2 / u2u2) * u2;

		//cout << u3 << endl;
		/*
		cout << u1 << endl; /// u1.norm() << endl << "~~~~~~~~~~~" << endl;
		cout << "sqrt(" << u1.squaredNorm() << ");" << endl;


		cout << u2 << endl; /// u2.norm() << endl << "~~~~~~~~~~~" << endl;
		cout << u3 << endl; /// u3.norm() << endl << "~~~~~~~~~~~" << endl;
		*/
	}

	// https://www.chegg.com/homework-help/questions-and-answers/apply-gram-schmidt-orthonormalization-process-transform-given-basis-rn-orthonormal-basis-u-q16919411
	void question8() {
		VectorXf v1(3);
		v1 << 1, 0, 3;

		VectorXf v2(3);
		v2 << 0, 3, 0;

		VectorXf v3(3);
		v3 << 1, 1, 1;

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