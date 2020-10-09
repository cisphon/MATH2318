#pragma once

#include "Tools.h"

namespace MATH2318::HW8 {
	void question1() {
		Eigen::VectorXf u(2);
		u << 3, -4;

		Eigen::VectorXf v(2);
		v << -8, -15;

		std::cout << u.dot(v) << std::endl;
		std::cout << "sqrt(" << u.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << v.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-u-v-llull-11v11-d-u-v-given-inner-product-defined-rn-u-v-3u1v1-u2v2-u-4-0-u-v-v-5-2-c-q25787715
	void question2() {
		Eigen::VectorXf u(3);
		u << 1, 1, 1;

		Eigen::VectorXf v(3);
		v << 5, 2, 5;

		// (u1 * v1) + 3(u2 * v2) + (u3 * v3)

		std::cout << "sqrt(" << u(0) * u(0) + 3 * u(1) * u(1) * u(2) * u(2) << ");" << std::endl;
		std::cout << "sqrt(" << v(0) * v(0) + 3 * v(1) * v(1) * v(2) * v(2) << ");" << std::endl;
		std::cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << std::endl;
	}

	void question3() {
		Eigen::VectorXf u(4);
		u << -1, 1, 2, 0;

		Eigen::VectorXf v(4);
		v << 1, 0, -1, 2;

		std::cout << u.dot(v) << std::endl;
		std::cout << "sqrt(" << u.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << v.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << std::endl;
	}

	void question4() {

	}

	void question5() {
		Eigen::VectorXf u(3);
		u << 1, 1, 1;

		Eigen::VectorXf v(3);
		v << 5, -4, 3;



	}
}