#pragma once

#include "Tools.h"

namespace MATH2318::TEST1 {
    void question3() {
        MatrixXf A(4, 3);
        A << 3, 3, 12,
            1, 1, 4,
            2, 5, 20,
            -1, 2, 8;

        VectorXf V(A.rows());
        V << 6, 2, 10, 4;

        std::cout << A.fullPivHouseholderQr().solve(V);
    }

    void question6() {
        MatrixXf A(3, 2);
        A << 2, 1,
            -4, 3,
            1, 6;

        MatrixXf B(3, 3);
        B << 0, -1, 0,
            3, 0, 1,
            8, -1, 6;

        //std::cout << A * B << std::endl;


        std::cout << B * A << std::endl;
    }

    void question8() {
        MatrixXf A(2, 3);
        A << 2, 1, 1,
            -1, 3, 0;

        MatrixXf B(2, 2);
        B << 3, 2,
            -1, 1;

        MatrixXf C(2, 2);
        C << 1, 0,
            0, -1;

        std::cout << (B + C) * A << std::endl;
    }

    void question9() {
        MatrixXf A(2, 3);
        A << 2, -1, 2,
            1, 4, 0;

        MatrixXf a = A.transpose() * A;
        std::cout << a << std::endl << "~~~~~~~~~~" << std::endl;

        MatrixXf b = A * A.transpose();
        std::cout << b << std::endl << "~~~~~~~~~~" << std::endl;

        std::cout << Tools::is_symmetric(a) << std::endl;
        std::cout << Tools::is_symmetric(b) << std::endl;
    }

    void question11() {
        MatrixXf A(4, 4);

        A << -18, 0, 0, 0,
            0, 14, 0, 0,
            0, 0, 0, 0,
            0, 0, 0, 17;

        std::cout << A.inverse() << std::endl;
    }

    void question14() {
        MatrixXf L(3, 3);
        L << 1, 0, 0,
            0, 1, 0,
            -1, 2, 1;

        VectorXf y(3);
        y << 4, 8, -8;

        std::cout << L * y << std::endl;
    }
}