#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ1 {
    void question1() {
        Eigen::MatrixXf m(3, 3);

        m << -1, 1, -1,
            0, 3, 1,
            0, 0, 1 / static_cast<float> (5.0);

        Eigen::VectorXf v(m.rows());
        v << 0, 5, 0;

        std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
    }

    void question2() {
        for (int x = -3; x <= 5; ++x)
            std::cout << "(" << x << ", " << -5 * x - 3 << ") ";
        std::cout << std::endl << "~~~~~~~~~~~~" << std::endl;
        for (int x = -3; x <= 5; ++x)
            std::cout << "(" << x << ", " << 1 / 2.0 - 5 * x << ") ";
    }

    void question3() {
        Eigen::MatrixXf m(2, 3);

        m << 1, -3, 5,
            4, -12, 20;

        Eigen::VectorXf v(m.rows());
        v << 13, 13;

        std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
    }

    void question8() {
        Eigen::MatrixXf m(5, 5);

        m << 1, -1, 2, 2, 6,
            3, -2, 4, 4, 12,
            0, 1, -1, -1, -3,
            2, -2, 4, 5, 15,
            2, -2, 4, 4, 13;

        Eigen::VectorXf v(m.rows());
        v << 9, 20, -5, 16, 19;

        std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
    }

}