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

		std::cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << std::endl;


	}

	void question3() {
		Eigen::VectorXf a(3);
		a << sqrt(3) / 3.0, sqrt(3) / 3.0, -sqrt(3) / 3.0;

		Eigen::VectorXf b(3);
		b << -sqrt(6) / 6.0, sqrt(6) / 3.0, sqrt(6) / 6.0;

		Eigen::VectorXf c(3);
		c << sqrt(2) / 2.0, sqrt(2) / 2.0, sqrt(2) / 2.0;

		std::cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << std::endl;

	}

	void question4() {
		Eigen::VectorXf a(4);
		a << -6, 2, 1, 3;

		Eigen::VectorXf b(4);
		b << 2, 6, 0, 0;

		std::cout << Tools::is_orthogonal(a, b) << std::endl;
	}

    // https://www.chegg.com/homework-help/questions-and-answers/consider-following-show-set-vectors-r-orthogonal-b-normalize-set-produce-orthonormal-set-q25068669
	void question5() {
		Eigen::VectorXf a(3);
		a << sqrt(2), sqrt(2), sqrt(2);

		Eigen::VectorXf b(3);
		b << -sqrt(3), 0, sqrt(3);

		std::cout << a.dot(b) << std::endl;
	}
}