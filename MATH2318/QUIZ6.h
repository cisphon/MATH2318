#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ6 {
	void question1() {
		Eigen::VectorXf u(2);
		u << 15, -8;

		Eigen::VectorXf v(2);
		v << 5, -12;

		std::cout << u.dot(v) << std::endl;
		std::cout << "sqrt(" << u.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << v.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << std::endl;
	}

	void question2() {
		Eigen::VectorXf u(3);
		u << 3, 1, 0;

		Eigen::VectorXf v(3);
		v << 0, 3, 1;

		std::cout << u.dot(v) << std::endl;
		std::cout << "sqrt(" << u.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << v.squaredNorm() << ");" << std::endl;
		std::cout << "sqrt(" << Tools::distanceSquared(u, v) << ");" << std::endl;
	}

	void question3() {
		Eigen::VectorXf u(2);
		u << -5, 0;

		Eigen::VectorXf v(2);
		v << 3, 4;

		float uv = u(0)*v(0) + 2*u(1)*v(1);

		std::cout << acos(uv / (u.norm() * v.norm())) << std::endl;
	}

	void question6() {
		Eigen::VectorXf u(3);
		u << 1, -1, 2;

		Eigen::VectorXf v(3);
		v << -1, -1, 2;

		std::cout << Tools::proj_a_on_b(u, v) << std::endl;
		std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << Tools::proj_a_on_b(v, u) << std::endl;
	}

	void question7() {
		Eigen::VectorXf a(3);
		a << -17, -4, -1;

		Eigen::VectorXf b(3);
		b << -1, 4, 1;

		Eigen::VectorXf c(3);
		c << 0, -1, 4;

		std::cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << std::endl;
		std::cout << (Tools::is_orthonormal(a, b) && Tools::is_orthonormal(b, c)) << std::endl;
	}

	void question8() {

	}
}