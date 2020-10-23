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

	void question29() {
		Eigen::VectorXf u(2);
		u << -3, 3;

		Eigen::VectorXf v(2);
		v << 3, -3;

		std::cout << Tools::distance(u, v) << std::endl;
	
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
		u << -1, 3;

		Eigen::VectorXf v(2);
		v << 2, 2;

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
}