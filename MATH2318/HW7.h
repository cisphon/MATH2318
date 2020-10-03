#pragma once

#include "Tools.h"

namespace MATH2318::HW7 {

	void question13() {
		Eigen::VectorXf v(4);
		v << 2, 0, -5, -3;

		std::cout << "sqrt(" << v.squaredNorm() << ")" << std::endl;
	}

	void question14() {
		Eigen::VectorXf u(2);
		u << -2, 1 / 4.0f;

		Eigen::VectorXf v(2);
		v << 3, -1 / 2.0f;

		std::cout << "sqrt(" << u.squaredNorm() << ")" << std::endl;
		std::cout << "sqrt(" << v.squaredNorm() << ")" << std::endl;
		std::cout << "sqrt(" << (u + v).squaredNorm() << ")" << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-vector-v-given-length-direction-u-v-3-u-1-2-0-1-q8729877
	void question15() {
		Eigen::VectorXf u(4);
		u << 1, -2, 0, -1;

		std::cout << u.squaredNorm() << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/values-c-c-1-4-2-1-c-enter-answers-comma-separated-list-q9152653
	void question16() {
		Eigen::VectorXf u(3);
		u << 1, 4, 2;

		std::cout << 1 << "/" << "sqrt(" << u.squaredNorm() << ")" << std::endl;
	}

	void question17() {
		Eigen::VectorXf u(2);
		u << -1, 1;

		Eigen::VectorXf v(2);
		v << 1, -1;

		std::cout << "sqrt(";
		std::cout << Tools::distance(u, v) * Tools::distance(u, v); 
		std::cout << ")";
		std::cout << std::endl;
	}

	void question18() {
		Eigen::VectorXf u(2);
		u << 4, -3;

		Eigen::VectorXf v(2);
		v << 3, 2;

		std::cout << u.dot(v) << std::endl;
		std::cout << v.dot(v) << std::endl;
		std::cout << u.norm() * u.norm() << std::endl;
		
		std::cout << "~~~~~~~~~~~" << std::endl;
		std::cout << u.dot(v) * v << std::endl;
		std::cout << "~~~~~~~~~~~" << std::endl;

		std::cout << "~~~~~~~~~~~" << std::endl;
		std::cout << u.dot(5 * v) << std::endl;
		std::cout << "~~~~~~~~~~~" << std::endl;

	}

	void question20() {
		Eigen::VectorXf u(2);
		u << 1, 3;

		Eigen::VectorXf u(2);
		u << 2, -4;

	}

	// fuck you
	void question21() {
		Eigen::VectorXf u(3);
		u << 2, 5, 0;

		Eigen::VectorXf v(3);
		v << -5, 2, 1;

		double angle = Tools::angle_between_vectors(u, v);

		std::cout << Tools::degrees_to_radians(angle) << std::endl;
	}

	void question22() {
		Eigen::VectorXf u(2);
		u << 8, -5;

		Eigen::VectorXf v(2);
		v << 1 / 2.0, -4 / 5;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question23() {
		Eigen::VectorXf u(3);
		u << 0, 0, 2;

		Eigen::VectorXf v(3);
		v << 2, -4, 0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question24() {
		Eigen::VectorXf u(4);
		u << -8, 3 / 2.0, -5, 7 / 2.0;

		Eigen::VectorXf v(4);
		v << 4, -3 / 4.0, 5 / 2.0, -7 / 4.0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question25() {
		Eigen::VectorXf u(2);
		u << 2, 2;

		Eigen::VectorXf v(2);
		v << 0, -2;

		if (Tools::holds_triangle_inequality(u, v))
			std::cout << "Holds inequality" << std::endl;
		else
			std::cout << "Doesn't hold inequality" << std::endl;
	}

	void question26() {
		Eigen::VectorXf u(3);
		u << -1, 1, 4;

		Eigen::VectorXf v(3);
		v << 4, 0, 1;

		if (Tools::is_orthogonal(u, v))
			std::cout << "Is orthogonal" << std::endl;
		else
			std::cout << "Isn't orthogonal" << std::endl;

		std::cout << u.squaredNorm() << std::endl;
		std::cout << v.squaredNorm() << std::endl;

		std::cout << "~~~~~~~~~" << std::endl;
		std::cout << u + v << std::endl << "~~~~~~~~~" << std::endl;
		std::cout << (u + v).squaredNorm() << std::endl;

		if ((u + v).squaredNorm() == u.squaredNorm() + v.squaredNorm())
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	}

	void question28() {
		Eigen::VectorXf v(5);
		v << 2, -3, 5, -1, 3;

		std::cout << "sqrt(" << v.squaredNorm() << ")" << std::endl;
	} 
}