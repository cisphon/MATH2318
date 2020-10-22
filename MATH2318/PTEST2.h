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

	void question3() {

	}

	void question36() {

	}
}