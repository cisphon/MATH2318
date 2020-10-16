#pragma once

#include "Tools.h"

namespace MATH2318::HW9 {
	void question1() {
		Eigen::VectorXf a(2);
		a << 2, 4;

		Eigen::VectorXf b(2);
		b << 4, -2;

		std::cout << Tools::is_orthogonal(a, b) << std::endl;
		// std::cout << Tools::is_orthonormal(a, b) << std::endl;
		
		// check if linearly independent.
	}

	void question2() {
		Eigen::VectorXf a(3);
		a << -17, -1, -4;

		Eigen::VectorXf b(3);
		b << -1, 1, 4;

		Eigen::VectorXf c(3);
		c << 0, 4, -1;

	}
}