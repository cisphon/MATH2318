#pragma once

#include "Tools.h"

namespace MATH2318::HW10 {
	void question1() {
		Eigen::VectorXf s1(4);
		s1 << 1, 1, 1, 1;

		Eigen::VectorXf s2one(4);
		s2one << 1, 1, -1, -1;

		Eigen::VectorXf s2two(4);
		s2two << 0, 0, 5, -5;

		if (Tools::is_orthogonal(s1, s2one) && Tools::is_orthogonal(s1, s2two))
			std::cout << "Orthogonal" << std::endl;
		else
			std::cout << "Not Orthogonal" << std::endl;
	}

	void question2() {

	}
}