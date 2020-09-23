#pragma once

#include "Tools.h"

namespace MATH2318::HW4 {
    void question1() {
        std::cout << Tools::points_to_vector(0, 0, 2, 3) << std::endl;
    }

    void question2() {
        std::cout << Tools::points_to_vector(0, 0, 5, -3) << std::endl;
    }

    void question3() {
        Eigen::VectorXf u(2);
        u << 2, -1;

        Eigen::VectorXf v(2);
        v << -1, -3;

        std::cout << u + v << std::endl;
    }

    void question4() {
        Eigen::VectorXf u(2);
        u << -1, 3;

        Eigen::VectorXf w(2);
        w << -3, -1;

        std::cout << u + 2 * w << std::endl;
    }

    void question5() {
        Eigen::VectorXf u(3);
        u << 1, 2, 3;

        Eigen::VectorXf v(3);
        v << 1, -2, 1;

        std::cout << u - v << std::endl;
        std::cout << v - u << std::endl;
    }

    void question6() {
        Eigen::VectorXf u(3);
        u << 1, 2, 3;

        Eigen::VectorXf v(3);
        v << 2, 2, -1;

        Eigen::VectorXf w(3);
        w << 4, 0, -4;

        std::cout << 4 * u << std::endl << "~~~~~~~~" << std::endl;
        std::cout << 5 * v << std::endl << "~~~~~~~~" << std::endl;
        std::cout << -w << std::endl << "~~~~~~~~" << std::endl;
        std::cout << 4 * u + 5 * v - w << std::endl;
    }

    void question7() {
        Eigen::VectorXf v(3);
        v << 2, 0, 1;

        std::cout << -v << std::endl << "~~~~~~~~" << std::endl;
        std::cout << 2 * v << std::endl << "~~~~~~~~" << std::endl;
        std::cout << v / 2.0 << std::endl << "~~~~~~~~" << std::endl;
    }

    void question8() {
        Eigen::VectorXf u(5);
        u << 4, 0, 4, 3, 4;

        Eigen::VectorXf v(5);
        v << 8, -5, 6, -3, 3;

        // (a) u - v
        std::cout << u - v << std::endl << "~~~~~~~~" << std::endl;

        // (b) 2(u + 3v)
        std::cout << 2 * (u + 3 * v) << std::endl << "~~~~~~~~" << std::endl;

        // (c) 2v - u
        std::cout << 2 * v - u << std::endl << "~~~~~~~~" << std::endl;
    }

    void question9() {
        Eigen::VectorXf u(2);
        u << 2, 1;

        Eigen::VectorXf v(2);
        v << 2, -3;

        Eigen::VectorXf r(2);
        r << 4, -2;

        std::cout << Tools::vectorxf_linear_combo_2(u, v, r) << std::endl;
    }

    void question10() {
        Eigen::VectorXf u(2);
        u << 1, 2;

        Eigen::VectorXf v(2);
        v << 1, -1;

        Eigen::VectorXf r(2);
        r << -2, -4;

        std::cout << Tools::vectorxf_linear_combo_2(u, v, r) << std::endl;
    }

    void question11() {
        Eigen::VectorXf u1(3);
        u1 << 3, 1, 7;

        Eigen::VectorXf u2(3);
        u2 << 2, -1, 3;

        Eigen::VectorXf u3(3);
        u3 << -3, 1, -5;

        Eigen::VectorXf v(3);
        v << -1, 7, 2;

        std::cout << Tools::vectorxf_linear_combo_3(u1, u2, u3, v) << std::endl;
    }
}