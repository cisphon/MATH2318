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

		std::cout << uv << "/(" << "sqrt(" << u.squaredNorm() << ") * sqrt(" << v.squaredNorm() << ");";

		std::cout << acos(uv / (u.norm() * v.norm())) << std::endl;
	}

	void question4() {
		std::cout << acos(0) << std::endl;
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
		Eigen::VectorXf a(3);
		a << sqrt(6) / 3.0, sqrt(6) / 6.0, -sqrt(6) / 6.0;

		Eigen::VectorXf b(3);
		b << sqrt(3) / 3.0, - sqrt(3) / 3.0, sqrt(3) / 3.0;

		Eigen::VectorXf c(3);
		c << sqrt(2) / 2.0, sqrt(2) / 2.0, sqrt(2) / 2.0;

		std::cout << (Tools::is_orthogonal(a, b) && Tools::is_orthogonal(b, c)) << std::endl;
	}

	void question9() {
		Eigen::VectorXf v1(3);
		v1 << 0, 15, -8;

		Eigen::VectorXf v2(3);
		v2 << 0, 4, 1;

		Eigen::VectorXf v3(3);
		v3 << 3, 0, 0;

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


		std::cout << u3 << "/" << "sqrt(" << u3.squaredNorm() << ");" << std::endl << "~~~~~~~~~~~" << std::endl;

		/*
		std::cout << u1 << std::endl; /// u1.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		std::cout << "sqrt(" << u1.squaredNorm() << ");" << std::endl;


		std::cout << u2 << std::endl; /// u2.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		std::cout << u3 << std::endl; /// u3.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		*/
	}
}