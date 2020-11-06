#pragma once

#include "Tools.h"

namespace MATH2318::HW2 {
    void question2() {
        MatrixXf A(3, 2);
        A << 2, -1,
             4, 6,
            -5, 3;

        MatrixXf B(3, 2);
        B << 1, 4,
            -1, 5,
            1, 10;

        // (a) A + B
        std::cout << A + B << std::endl << "~~~~~~~~" << std::endl;

        // (b) A - B
        std::cout << A - B << std::endl << "~~~~~~~~" << std::endl;

        // (c) 2A
        std::cout << 2 * A << std::endl << "~~~~~~~~" << std::endl;

        // (d) 2A - B
        std::cout << (2 * A) - B << std::endl << "~~~~~~~~" << std::endl;

        // (e) B + 1/2A
        std::cout << B + ((1 / 2.0) * A) << std::endl << "~~~~~~~~" << std::endl;
    }

    void question3() {
        MatrixXf A(2, 3);
        A << 3, 0, 0,
            -4, -1, 6;

        // (c) 2A
        std::cout << 2 * A << std::endl;
    }

    void question4() {
        MatrixXf A(2, 3);
        A << 4, 2, 2,
            -5, 3, 1;

        MatrixXf B(2, 3);
        B << 1, 2, -7,
            0, -5, 1;

        MatrixXf C = 2 * A - 3 * B;

        // c13
        int row = 1, col = 3;
        std::cout << C(row - 1, col - 1) << std::endl;

        // c21
        row = 2, col = 1;
        std::cout << C(row - 1, col - 1) << std::endl;
    }

    void question5() {

    }

    void question6() {
        MatrixXf A(2, 2);
        A << 2, 1,
            5, 1;

        MatrixXf B(2, 2);
        B << 1, -2,
            -2, 6;

        // (a) AB
        std::cout << A * B << std::endl << "~~~~~~~~" << std::endl;

        // (b) BA
        std::cout << B * A << std::endl;
    }

    void question7() {
        MatrixXf A(3, 3);
        A << 2, 5, 3,
            -1, 2, 1,
            3, 2, -2;

        MatrixXf B(3, 3);
        B << 3, 2, 0,
            -2, -4, 1,
            -1, 1, -4;

        // (a) AB
        std::cout << A * B << std::endl << "~~~~~~~" << std::endl;

        // (b) BA
        std::cout << B * A << std::endl;
    }

    void question8() {
        MatrixXf A(4, 1);
        A << -1,
            1,
            2,
            -2;

        MatrixXf B(1, 4);
        B << 3, 1, 2, 2;

        // (a) AB
        std::cout << A * B << std::endl << "~~~~~~~" << std::endl;

        // (b) BA
        std::cout << B * A << std::endl;
    }

    void question10() {
        MatrixXf A(2, 3);
        A << 4, -1, -1,
            1, -4, 4;

        VectorXf V(2);
        V << 0, 0;

        std::cout << A.colPivHouseholderQr().solve(V) << std::endl;
    }

    void question14() {
        MatrixXf A(2, 2);
        A << 6, 8,
            -1, 0;

        MatrixXf B(2, 2);
        B << 0, 4,
            -4, -2;

        MatrixXf C(2, 2);
        C << -11, -7,
            3, -2;

        std::cout << A + B + C << std::endl;
    }

    void question15() {
        int a = 4, b = -3;

        MatrixXf A(2, 2);
        A << 2, 4,
            3, 1;

        MatrixXf B(2, 2);
        B << 2, -1,
            1, 0;

        std::cout << a * A + b * B << std::endl;
    }

    void question16() {
        int a = 3, b = -4;

        MatrixXf A(2, 2);
        A << 1, 2,
            3, 4;

        MatrixXf B(2, 2);
        B << 0, -1,
            2, 1;

        std::cout << (a - b) * (A - B) << std::endl;
    }

    void question17() {
        MatrixXf A(3, 2);
        A << -4, 0,
            2, -5,
            1, -3;

        MatrixXf B(3, 2);
        B << 2, 4,
            1, 4,
            1, -2;

        // (a) 3X + 2A = B -> (B - 2A) / 3 = X
        std::cout << (B - 2 * A) / 3.0 << std::endl << "~~~~~~~~~" << std::endl;

        // (b) 2A - 5B = 3X -> (2A - 5B) / 3 = X
        std::cout << (2 * A - 5 * B) / 3.0 << std::endl << "~~~~~~~~~" << std::endl;

        // (c) X - 3A + 2B = 0 -> X = 3A - 2B 
        std::cout << 3 * A - 2 * B << std::endl << "~~~~~~~~~" << std::endl;

        // (d) 6X - 4A - 3B = 0 -> X = (4A + 3B) / 6.0
        std::cout << (4 * A + 3 * B) / 6.0 << std::endl;
    }

    void question18() {
        MatrixXf A(2, 3);
        A << 1, 1, 0,
            2, 3, -1;

        MatrixXf B(2, 2);
        B << -1, 1,
            2, 3;

        MatrixXf C(2, 2);
        C << 0, -1,
            1, 0;

        std::cout << B * (C * A) << std::endl;
    }

    void question19() {
        MatrixXf A(2, 2);
        A << -1, 2,
            0, 1;

        MatrixXf I = MatrixXf::Identity(A.rows(), A.cols());

        std::cout << A * (I + A) << std::endl;
    }

    void question20() {
        MatrixXf A(3, 2);
        A << 2, 0,
            1, 1,
            1, -2;

        MatrixXf B(2, 3);
        B << 3, -1, 2,
            1, 0, 4;

        std::cout << (A * B).transpose() << std::endl << "~~~~~~~~" << std::endl;

        std::cout << B.transpose() * A.transpose() << std::endl;
    }

    void question21() {
        MatrixXf A(2, 3);

        A << 0, 2, 2,
            4, -1, 1;

        MatrixXf B = A.transpose() * A;
        std::cout << B << std::endl;

        if (Tools::is_symmetric(B))
            std::cout << "Symmetric" << std::endl << "~~~~~~~~~" << std::endl;

        MatrixXf C = A * A.transpose();

        std::cout << C << std::endl;
        if (Tools::is_symmetric(C))
            std::cout << "Symmetric" << std::endl << "~~~~~~~~~" << std::endl;
    }

    void question22() {
        MatrixXf A(3, 3);
        A << 1, 0, 0,
            0, 1, 0,
            0, 0, -1;

        std::cout << A * A * A * A * A * A * A * A * A * A * A << std::endl;
    }

    void question23() {
        MatrixXf B(2, 2);

        int n = 2;
    }

    void question24() {
        MatrixXf A(2, 2);

        A << 3, 2,
            2, -2;

        if (Tools::is_symmetric(A))
            std::cout << "Symmetric" << std::endl;
        else if (Tools::is_skew_symmetric(A))
            std::cout << "Skew-symmetric" << std::endl;
        else
            std::cout << "Neither" << std::endl;
    }

    void question25() {
        MatrixXf A(3, 3);

        A << 0, 2, 1,
            2, 0, 3,
            1, 3, 0;

        if (Tools::is_symmetric(A))
            std::cout << "Symmetric" << std::endl;
        else if (Tools::is_skew_symmetric(A))
            std::cout << "Skew-symmetric" << std::endl;
        else
            std::cout << "Neither" << std::endl;
    }
}