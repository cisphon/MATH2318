#pragma once

#include "Tools.h"

namespace  MATH2318::HW3 {
    void question1() {
        MatrixXf A(2, 2);
        A << -1, 1,
            -1, 2;
        MatrixXf B(2, 2);
        B << -2, 1,
            -1, 1;

        std::cout << A * B << std::endl;
        std::cout << B * A << std::endl;
    }

    void question3() {
        MatrixXf A(2, 2);

        A << 1, 2,
            3, 5;

        std::cout << A.inverse() << std::endl;
    }

    void question4() {
        MatrixXf A(3, 3);

        A << -2, -3, 3,
            1, 1, -1,
            -1, -1, 2;

        std::cout << A.inverse() << std::endl;
    }

    void question5() {
        MatrixXf A(3, 3);

        A << -1, 1, 2,
            3, -10, 5,
            5, -19, 16;

        std::cout << A.inverse() << std::endl; // DNE
    }

    void question6() {
        MatrixXf A(4, 4);

        A << 20, 0, 0, 0,
            0, -4, 0, 0,
            0, 0, 0, 0,
            0, 0, 0, -3;

        std::cout << A.inverse() << std::endl; // DNE
    }

    void question7() {
        MatrixXf A(2, 2);

        A << 1, -4,
            -7, 4;

        MatrixXf AI = A.inverse();

        Tools::print_matrix_ratios(AI);
    }

    void question8() {
        MatrixXf A(2, 2);

        A << 6, -2,
            -9, 3;

        MatrixXf AI = A.inverse();

        Tools::print_matrix_ratios(AI);
    }

    void question9() {
        MatrixXf A(2, 2);
        A << 1, 2,
            -2, -3;
        A = A.inverse();

        MatrixXf B(2, 2);
        B << 1, 1,
            -1, 0;
        B = B.inverse();

        // (a) (AB)^-1
        std::cout << (A * B).inverse() << std::endl << "~~~~~~~~" << std::endl;

        // (b) (A^T)^-1
        std::cout << (A.transpose()).inverse() << std::endl << "~~~~~~~~" << std::endl;

        // (c) (2A)^-1
        std::cout << (2 * A).inverse() << std::endl;
    }

    // doesn't solve system of equations properly.
    void question10() {
        MatrixXf M(2, 2);
        M << 1, 2,
            1, -2;
        VectorXf A_V(M.rows());
        A_V << 1, -3;

        VectorXf B_V(M.rows());
        A_V << 10, -2;


        // (a) 
        std::cout << M.colPivHouseholderQr().solve(A_V) << std::endl << "~~~~~~" << std::endl;

        // (b) 
        std::cout << M.colPivHouseholderQr().solve(B_V);
    }

    // doesn't solve system of equations properly.
    void question11() {
        MatrixXf A_M(3, 3);
        A_M << 1, 2, 1,
            1, 2, -1,
            1, -2, 1;
        VectorXf A_V(A_M.rows());
        A_V << 0, 2, -4;


        MatrixXf B_M(3, 3);
        A_M << 1, 2, 1,
            1, 2, -1,
            1, -2, 1;
        VectorXf B_V(B_M.rows());
        A_V << -1, -3, 3;

        // (a) 
        std::cout << A_M.colPivHouseholderQr().solve(A_V) << std::endl << "~~~~~~" << std::endl;

        // (b) 
        std::cout << B_M.colPivHouseholderQr().solve(B_V);
    }

    //https://www.slader.com/discussion/question/find-x-such-that-the-matrix-is-singular-a-4-x-2-3/
    void question12() {
        float a = 4, b = -6, c = -3;

        float d = (a * b) / c;

        std::cout << d << std::endl;
    }

    // https://www.symbolab.com/solver/matrix-inverse-calculator/
    void question13() {

    }

    void question15() {
        MatrixXf A(2, 2);

        A << 0, 1,
            1, 0;

        std::cout << A.inverse() << std::endl;
    }

    void question16() {
        MatrixXf A(2, 2);

        A << 5, 0,
            0, 1;

        std::cout << A.inverse() << std::endl;
    }

    void question17() {
        MatrixXf A(3, 3);

        A << 1, 0, 0,
            0, 0, 1,
            0, 1, 0;

        std::cout << A.inverse() << std::endl;
    }
}