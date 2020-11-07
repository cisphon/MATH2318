#pragma once

#include "Tools.h"

namespace MATH2318::PTEST2 {
	void question1() {
		VectorXf u(2);
		u << 1, 3;

		VectorXf w(2);
		w << 1, -2;

		VectorXf v(2);
		v << 2, 1;

		cout << Tools::vectorxf_linear_combo_2(u, w, v) << endl;
	}

	void question2() {
		VectorXf u(5);
		u << 4, 4, 3, 4, 0;

		VectorXf v(5);
		v << -3, -5, 6, 3, 8;

		cout << u - v << endl << "~~~~~~~~~" << endl;

		cout << 2*(u + 3*v) << endl << "~~~~~~~~~" << endl;

		cout << 2 * v - u << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/determine-whether-set-together-indicated-operations-vector-space-identify-one-ten-vector-s-q7153923
	void question3() {

	}

	// 
	void question4() {

	}

	// https://www.chegg.com/homework-help/questions-and-answers/determine-whether-set-together-indicated-operations-vector-space-identify-one-vector-space-q18441080
	void question5() {
		
	}

	// https://www.chegg.com/homework-help/questions-and-answers/w-subspace-v-state--assume-v-standard-operations-select-apply-w-x1-x2-x3-0-x1-x2-x3-real-n-q7154223
	void question6() {

	}
	
	// https://www.chegg.com/homework-help/questions-and-answers/w-subspace-v-state--assume-v-standard-operations-select-apply-w-set-2-times-2-matrices-for-q14361005
	void question7() {

	}

	// https://www.chegg.com/homework-help/questions-and-answers/determine-whether-subset-c-subspace-c--set-negative-functions-f-x-0-b-set-odd-functions-f--q9192117
	void question8() {
		
	}

	// https://www.chegg.com/homework-help/questions-and-answers/determine-whether-set-s-1-x-2-x-2-4-spans-p2-s-spans-p2-s-span-p2-determine-whether-set-ve-q18899136
	void question13() {

	}

	void question14() {
		
	}

	// https://www.chegg.com/homework-help/questions-and-answers/write-standard-basis-vector-space-p6-enter-answers-comma-separated-list-q7156803
	void question15() {

	}

	// https://www.chegg.com/homework-help/questions-and-answers/use-fact-matrices-b-row-equivalent-2-5-8-0-17-1-3-5-1-5-1-1-1-3-19-1-7-13-5-3-b-1-0-1-0-1--q15440329
	void question28() {
		MatrixXf A(4, 5);

		int rank = 0;

		int nullity = A.cols() - rank;


	}

	void question29() {
		VectorXf u(2);
		u << -3, 3;

		VectorXf v(2);
		v << 3, -3;

		cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-angle-vectors-round-answer-three-decimal-places-u-4-2-v-1-3-q11708077
	void question30() {
		VectorXf u(2);
		u << 4, 2;

		VectorXf v(2);
		v << -1, -3;

		cout << Tools::angle_between_two_vectors_radians(u, v) << endl;
	}

	void question31() {
		VectorXf u(3);
		u << 3, 4, 0;

		VectorXf v(3);
		v << 4, -3, 4;

		cout << Tools::angle_between_two_vectors_radians(u, v) << endl;
	}

	void question32() {
		VectorXf u(4);
		u << 1, 1, 0, 1;

		VectorXf v(4);
		v << 3, 3, 3, 3;

		cout << Tools::angle_between_two_vectors_radians(u, v) << endl;
	}

	void question33() {
		VectorXf u(4);
		u << -8, 3 / 2.0, -7, 1 / 2.0;

		VectorXf v(4);
		v << 4, -3 / 4.0, 7 / 2.0, -1 / 4.0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question34() {
		VectorXf u(2);
		u << 5, -4;

		VectorXf v(2);
		v << 3, 0;

		float uv =  u(0) * v(0) + 2 * u(1) * v(1);

		cout << acos(uv / (u.norm() * v.norm())) << endl << endl;
	}


	// https://www.wolframalpha.com/input/?i=projection+%5B%7B4%2C+4%7D%2C+%7B-1%2C+2%7D%5D
	void question35() {
		VectorXf u(2);
		u << -1, 2;

		VectorXf v(2);
		v << 4, 4;

		cout << Tools::proj_a_on_b(u, v) << endl << "~~~~~~" << endl;
		cout << Tools::proj_a_on_b(v, u) << endl << "~~~~~~" << endl;
	}

	void question36() {
		VectorXf u(3);
		u << -1, 1, 2;

		VectorXf v(3);
		v << -1, -1, 2;

		cout << Tools::proj_a_on_b(u, v) << endl << "~~~~~~" << endl;
		cout << Tools::proj_a_on_b(v, u) << endl << "~~~~~~" << endl;
	}

	void question37() {
		VectorXf a(3);
		a << 4, 1, -1;

		VectorXf b(3);
		b << -1, 4, 0;

		VectorXf c(3);
		c << -4, -1, -17;

		cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << endl;
	}

	// just type the vectors into wolfram alpha and it will normalize it.
	// https://www.wolframalpha.com/
	void question38() {
		VectorXf v1(3);
		v1 << 1, 3, 0;

		VectorXf v2(3);
		v2 << 0, 0, 3;

		VectorXf v3(3);
		v3 << 1, 1, 1;

		VectorXf u1 = v1;  

		//cout << u1 << "/" << "sqrt(" << u1.squaredNorm() << ");" << endl;

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

		//
		cout << v3 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v3u1 << "/" << u1u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v3u2 << "/" << u2u2 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << u2 << endl << "~~~~~~~~~~~~~~~~" << endl;		

		//cout << u3 << "/" << "sqrt(" << u3.squaredNorm() << ");" << endl << "~~~~~~~~~~~" << endl;

	}

	// just type the vectors into wolfram alpha and it will normalize it.
	// https://www.wolframalpha.com/
	void question39() {
		VectorXf v1(2);
		v1 << 5, 12;

		VectorXf v2(2);
		v2 << 0, 1;

		VectorXf u1 = v1;

		float v2u1 = v2.dot(u1);
		float u1u1 = u1.dot(u1);

		VectorXf u2 = v2 - (v2u1 / u1u1) * u1;
		cout << v2 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << v2u1 << "/" << u1u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
		cout << u1 << endl << "~~~~~~~~~~~~~~~~" << endl;
	}
}