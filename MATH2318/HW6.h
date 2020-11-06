#pragma once

#include "Tools.h"

namespace MATH2318::HW6 {
    void question1() {
        VectorXf a(4);
        a << 6, -7, 8, 6;

        VectorXf b(4);
        b << 4, 6, -4, 1;

        VectorXf u(4);
        u << -62, 115, -120, -74;
        std::cout << Tools::vectorxf_linear_combo_2(a, b, u) << std::endl;

        VectorXf v(4);
        v << 49 / 2.0f, 99 / 4.0f, -14, 19.0 / 2.0f;
        std::cout << Tools::vectorxf_linear_combo_2_with_fractions(a, b, v) << std::endl;

        VectorXf w(4);
        w << -6, -17, 23 / 8.0f, 57 / 8.0f;
        std::cout << Tools::vectorxf_linear_combo_2_with_fractions(a, b, w) << std::endl;

        VectorXf z(4);
        z << 14, -3, 7, 41 / 4.0f;
        std::cout << Tools::vectorxf_linear_combo_2_with_fractions(a, b, z) << std::endl;
    }

    void question2() {
        MatrixXf A(2, 2);
        A << -3, 2,
            1, 4;

        MatrixXf B(2, 2);
        B << 0, 1,
            -2, 5;

        MatrixXf M(2, 2);
        M << -9, 4,
            7, 2;

        std::cout << Tools::matrixxf_linear_combo_2(A, B, M) << std::endl;
    }

    void question3() {
        VectorXf s1(2);
        s1 << 5, 4;

        VectorXf s2(2);
        s1 << -1, 1;

        VectorXf s3(2);
        s1 << 2, 0;

        VectorXf r(2);
        r << 0, 0;

        std::cout << Tools::vectorxf_linear_combo_3(s1, s2, s3, r) << std::endl;
    }
}