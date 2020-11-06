#pragma once

#include "Tools.h"

namespace MATH2318::HW7 {

	void question9() {
		float c, d;
		c = d = 1;

		float b = c - 2 * d;
		float a = 2 * c - 4 * b;

		std::cout << a << " " << b << " " << c << " " << d << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-basis-dimension-solution-space-homogeneous-system-linear-equations-x-y-z-0-3x-y-0-0-3-q11848773
	void question10() {

	}

    // https://www.chegg.com/homework-help/questions-and-answers/use-fact-matrices-b-row-equivalent-2-5-8-0-17-1-3-5-1-5-1-1-1-3-19-1-7-13-5-3-b-1-0-1-0-1--q15440329
	void question11() {

	}

	// https://www.homeworklib.com/questions/1494996/consider-the-system-of-equations-shown-below-2x
	void question12() {

	}

	void question13() {
		VectorXf v(4);
		v << 2, 0, -5, -3;

		std::cout << "sqrt(" << v.squaredNorm() << ")" << std::endl;
	}

	void question14() {
		VectorXf u(2);
		u << -2, 1 / 4.0f;

		VectorXf v(2);
		v << 3, -1 / 2.0f;

		std::cout << "sqrt(" << u.squaredNorm() << ")" << std::endl;
		std::cout << "sqrt(" << v.squaredNorm() << ")" << std::endl;
		std::cout << "sqrt(" << (u + v).squaredNorm() << ")" << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/find-vector-v-given-length-direction-u-v-3-u-1-2-0-1-q8729877
	void question15() {
		VectorXf u(4);
		u << 1, -2, 0, -1;

		std::cout << u.squaredNorm() << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/values-c-c-1-4-2-1-c-enter-answers-comma-separated-list-q9152653
	void question16() {
		VectorXf u(3);
		u << 1, 4, 2;

		std::cout << 1 << "/" << "sqrt(" << u.squaredNorm() << ")" << std::endl;
	}

	void question17() {
		VectorXf u(2);
		u << -1, 1;

		VectorXf v(2);
		v << 1, -1;

		std::cout << "sqrt(";
		std::cout << Tools::distance(u, v) * Tools::distance(u, v); 
		std::cout << ")";
		std::cout << std::endl;
	}

	void question18() {
		VectorXf u(2);
		u << 4, -3;

		VectorXf v(2);
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
		VectorXf u(2);
		u << 1, 3;

		VectorXf v(2);
		v << 2, -4;

		std::cout << Tools::angle_between_two_vectors_radians(u, v) << std::endl;
	}

	// fuck you
	void question21() {
		VectorXf u(3);
		u << 5, 2, 4;

		VectorXf v(3);
		v << -2, 5, 0;

		std::cout << Tools::angle_between_two_vectors_radians(u, v) << std::endl;
	}

	void question22() {
		VectorXf u(2);
		u << 8, -5;

		VectorXf v(2);
		v << 1 / 2.0, -4 / 5;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question23() {
		VectorXf u(3);
		u << 0, 0, 2;

		VectorXf v(3);
		v << 2, -4, 0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question24() {
		VectorXf u(4);
		u << -8, 3 / 2.0, -5, 7 / 2.0;

		VectorXf v(4);
		v << 4, -3 / 4.0, 5 / 2.0, -7 / 4.0;

		Tools::orthogonal_parallel_or_neither(u, v);
	}

	void question25() {
		VectorXf u(2);
		u << 2, 2;

		VectorXf v(2);
		v << 0, -2;

		if (Tools::holds_triangle_inequality(u, v))
			std::cout << "Holds inequality" << std::endl;
		else
			std::cout << "Doesn't hold inequality" << std::endl;
	}

	void question26() {
		VectorXf u(3);
		u << -1, 1, 4;

		VectorXf v(3);
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

	// https://www.chegg.com/homework-help/questions-and-answers/let-v-v1-v2-vector-r2-show-v2-v1-orthogonal-v-use-fact-find-two-unit-vectors-orthogonal-gi-q9152569
	void question27() {
		VectorXf v(2);
		v << 3, 4;

		VectorXf vb(2);
		vb << v(1), -v(0);


		VectorXf va(2);
		va << -vb(0), vb(1);


		std::cout << "~~~~~~~~~" << std::endl;
		std::cout << vb / vb.norm() << std::endl;
		std::cout << "~~~~~~~~~" << std::endl;


		std::cout << "~~~~~~~~~" << std::endl;
		std::cout << va / va.norm() << std::endl;
		std::cout << "~~~~~~~~~" << std::endl;
	}

	void question28() {
		VectorXf v(5);
		v << 2, -3, 5, -1, 3;

		std::cout << "sqrt(" << v.squaredNorm() << ")" << std::endl;
	} 
}