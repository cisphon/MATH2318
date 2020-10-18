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

		// b 
		// 1 / sqrt(a(0)^2 + a(1)^2 + a(2)^2)
	}

	void question6() {
		Eigen::VectorXf v1(2);
		v1 << 20, 21;
		//v1 << 0, 1;

		Eigen::VectorXf v2(2);
		v2 << 0, 1;
		//v2 << 2, 5;

		Eigen::VectorXf w1 = v1;

		Eigen::VectorXf w2 = v2 - (v2.dot(w1)) / (w1.dot(w1)) * w1;

		std::cout << v2.dot(w1) << std::endl;
		std::cout << w1.dot(w1) << std::endl;

		//std::cout << w1 << std::endl;
		//std::cout << w2 << std::endl;

		Eigen::VectorXf u1 = w1 / w1.norm();
		Eigen::VectorXf u2 = w2 / w2.norm();

		//std::cout << u1 << std::endl;
		//std::cout << u2 << std::endl;
	}

	// https://www.chegg.com/homework-help/questions-and-answers/apply-gram-schmidt-orthonormalization-process-transform-given-basis-rn-orthonormal-basis-u-q16919411
	void question7() {
		Eigen::VectorXf v1(3);
		//v1 << 8, -6, 0;
		v1 << -15, 8, 0;

		Eigen::VectorXf v2(3);
		//v2 << 5, 1, 0;
		v2 << 1, 4, 0;

		Eigen::VectorXf v3(3);
		//v3 << 0, 0, 2;
		v3 << 0, 0, 3;

		Eigen::VectorXf u1 = v1;


		float v2u1 = v2.dot(u1);
		float u1u1 = u1.dot(u1);

		Eigen::VectorXf u2 = v2 - (v2u1 / u1u1) * u1;

		/*

		std::cout << v2 << std::endl << "~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << v2u1 << "/" << u1u1 << "~~~~~~~~~~~~~~~~" << std::endl;
		std::cout << u1 << std::endl << "~~~~~~~~~~~~~~~~" << std::endl;

		*/

		std::cout << u2 << "/" << u2.norm() << std::endl << "~~~~~~~~~~~" << std::endl;

		float v3u1 = v3.dot(u1);
		u1u1 = u1.dot(u1);

		float v3u2 = v3.dot(u2);
		float u2u2 = u2.dot(u2);

		Eigen::VectorXf u3 = v3 - (v3u1 / u1u1) * u1 - (v3u2 / u2u2) * u2;

		//std::cout << u3 << std::endl;
		/*
		std::cout << u1 << std::endl; /// u1.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		std::cout << "sqrt(" << u1.squaredNorm() << ");" << std::endl;


		std::cout << u2 << std::endl; /// u2.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		std::cout << u3 << std::endl; /// u3.norm() << std::endl << "~~~~~~~~~~~" << std::endl;
		*/
	}

	// https://www.chegg.com/homework-help/questions-and-answers/apply-gram-schmidt-orthonormalization-process-transform-given-basis-rn-orthonormal-basis-u-q16919411
	void question8() {
		Eigen::VectorXf v1(3);
		v1 << 1, 0, 3;

		Eigen::VectorXf v2(3);
		v2 << 0, 3, 0;

		Eigen::VectorXf v3(3);
		v3 << 1, 1, 1;

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