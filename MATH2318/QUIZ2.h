#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ2 {
    void question1() {
        MatrixXf A(2, 3);
        A << 0, 0, -1,
            3, -4, 6;

        MatrixXf B(2, 2);
        B << 4, -3,
            -1, 8;

        cout << 2 * A << endl;
    }

    void question2() {
        MatrixXf A(3, 2);
        A << 2, 1,
            -4, 4,
            1, 6;

        MatrixXf B(3, 3);
        B << 0, -1, 0,
            4, 0, 1,
            8, -1, 7;

        // (a) AB
        //cout << A * B << endl;

        // (b) BA
        cout << B * A << endl;
    }

    void question4() {
        MatrixXf A_M(3, 3);
        A_M << 1, -5, 2,
            -3, 1, -1,
            0, -2, 5;

        VectorXf A_V(A_M.rows());
        A_V << -15, -2, -11;

        cout << A_M.colPivHouseholderQr().solve(A_V) << endl;
    }

    void question5() {
        MatrixXf A(2, 2);
        A << 0, 3,
            -3, 0;

        cout << Tools::is_symmetric(A) << endl;

        cout << Tools::is_skew_symmetric(A) << endl;
    }

    void question6() {
        MatrixXf A(2, 3);
        A << 1, -4, 0,
            3, 0, 2;

        MatrixXf B(2, 3);
        B << 0, 1, 3,
            -2, 2, -6;

        cout << 4 * (A - B) << endl;
    }

    void question7() {
        MatrixXf A(2, 2);
        A << 1, 2,
            0, -1;

        MatrixXf I = MatrixXf::Identity(A.rows(), A.cols());

        cout << A + I * A << endl;
    }

    void question8() {
        MatrixXf A(2, 3);
        A << 1, 2, -1,
            2, 0, 4;

        MatrixXf a = A.transpose() * A;
        // A^T * A
        cout << a << endl << "~~~~~~~~~~~" << endl;

        MatrixXf b = A * A.transpose();
        // A * A^T
        cout << b << endl;

        cout << Tools::is_symmetric(a) << endl;
        cout << Tools::is_symmetric(b) << endl;
    }

    void question9() {
        MatrixXf A(3, 3);
        A << 1, 0, 0,
            0, 1, 0,
            0, 0, -1;

        float n = 19;

        cout << Tools::pow_of_matrix(A, n) << endl;
    }

    void question10() {
        MatrixXf B(2, 2);
        B << 25, 0,
            0, 9;

        float n = 2;

        cout << Tools::pow_of_matrix(B, 1 / n) << endl;
    }
}