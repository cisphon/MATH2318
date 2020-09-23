#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ3 {
    void question1() {
        Eigen::VectorXf vec = Tools::points_to_vector(0, 0, -3, 5);

        std::cout << vec << std::endl;
    }

    void question2() {
        Eigen::VectorXf u(3);
        u << 1, 2, 3;

        Eigen::VectorXf v(3);
        v << 2, -1, 2;

        std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << u - v << std::endl;

        std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << v - u << std::endl;
    }

    void question3() {
        Eigen::VectorXf u(5);
        u << 3, 4, 4, 4, 0;

        Eigen::VectorXf v(5);
        v << -5, -3, 3, 8, 6;

        std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << u - v << std::endl;

        std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << 2 * (u + 3 * v) << std::endl;

        std::cout << "~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << 2 * v - u << std::endl;
    }
}