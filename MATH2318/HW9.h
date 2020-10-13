#pragma once

#include "Tools.h"

namespace MATH2318::HW9 {
	void question1() {
		Eigen::VectorXf a(2);
		a << 2, 4;

		Eigen::VectorXf b(2);
		b << 4, -2;

		std::cout << Tools::is_orthogonal(a, b) << std::endl;
	}
}