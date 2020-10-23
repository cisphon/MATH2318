#pragma once

#include "Tools.h"

namespace MATH2318::PTEST2 {
	void question1() {
		Eigen::VectorXf u(2);
		u << 1, 3;

		Eigen::VectorXf w(2);
		w << 1, -2;

		Eigen::VectorXf v(2);
		v << 2, 1;

		std::cout << Tools::vectorxf_linear_combo_2(u, w, v) << std::endl;
	}

	void question2() {
		Eigen::VectorXf u(5);
		u << 4, 4, 3, 4, 0;

		Eigen::VectorXf v(5);
		v << -3, -5, 6, 3, 8;

		std::cout << u - v << std::endl << "~~~~~~~~~" << std::endl;

		std::cout << 2*(u + 3*v) << std::endl << "~~~~~~~~~" << std::endl;

		std::cout << 2 * v - u << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/determine-whether-set-together-indicated-operations-vector-space-identify-one-ten-vector-s-q7153923
	void question3() {

	}

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

	void question29() {
		Eigen::VectorXf u(2);
		u << -3, 3;

		Eigen::VectorXf v(2);
		v << 3, -3;

		std::cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-angle-vectors-round-answer-three-decimal-places-u-4-2-v-1-3-q11708077
	void question30() {

	}

	void question33() {
		Eigen::VectorXf u(4);
		u << -8, 3 / 2.0, -7, 1 / 2.0;

		Eigen::VectorXf v(4);
		v << 4, -3 / 4.0, 7 / 2.0, -1 / 4.0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question34() {

	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-projvu-find-projuv-sketch-graph-projvu-projuv-use-euclidean-inner-product-u-1-3-2-2-f-q7742971
	void question35() {
		Eigen::VectorXf u(2);
		u << -1, 2;

		Eigen::VectorXf v(2);
		v << 4, 4;

		std::cout << Tools::proj_a_on_b(u, v) << std::endl << "~~~~~~" << std::endl;
		std::cout << Tools::proj_a_on_b(v, u) << std::endl << "~~~~~~" << std::endl;
	}

	void question36() {
		Eigen::VectorXf u(3);
		u << -1, 1, 2;

		Eigen::VectorXf v(3);
		v << -1, -1, 2;

		std::cout << Tools::proj_a_on_b(u, v) << std::endl << "~~~~~~" << std::endl;
		std::cout << Tools::proj_a_on_b(v, u) << std::endl << "~~~~~~" << std::endl;
	}

	void question38() {
		Eigen::VectorXf v1(3);
		v1 << 3, 1, 0;

		Eigen::VectorXf v2(3);
		v2 << 0, 0, 3;

		Eigen::VectorXf v3(3);
		v3 << 1, 1, 1;

		Eigen::VectorXf u1 = v1;

		float v2u1 = v2.dot(u1);
		float u1u1 = u1.dot(u1);

		Eigen::VectorXf u2 = v2 - (v2u1 / u1u1) * u1;

		//std::cout << u1 << "/" << "sqrt(" << u1.squaredNorm() << ");" << std::endl;

		/*
		std::cout << v2 << std::endl << "~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << v2u1 << "/" << u1u1 << "~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << u1 << std::endl << "~~~~~~~~~~~~~~~~" << std::endl;
		*/

		//std::cout << u2 << "/" << "sqrt(" << u2.squaredNorm() << ");" << std::endl << "~~~~~~~~~~~" << std::endl;

		float v3u1 = v3.dot(u1);
		u1u1 = u1.dot(u1);

		float v3u2 = v3.dot(u2);
		float u2u2 = u2.dot(u2);

		Eigen::VectorXf u3 = v3 - (v3u1 / u1u1) * u1 - (v3u2 / u2u2) * u2;


		//std::cout << u3 << "/" << "sqrt(" << u3.squaredNorm() << ");" << std::endl << "~~~~~~~~~~~" << std::endl;

		/*
		std::cout << u1 << std::endl; /// u1.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		std::cout << "sqrt(" << u1.squaredNorm() << ");" << std::endl;


		std::cout << u2 << std::endl; /// u2.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		std::cout << u3 << std::endl; /// u3.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		*/
	}
}