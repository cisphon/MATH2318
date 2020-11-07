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
        cout << A + B << endl << "~~~~~~~~" << endl;

        // (b) A - B
        cout << A - B << endl << "~~~~~~~~" << endl;

        // (c) 2A
        cout << 2 * A << endl << "~~~~~~~~" << endl;

        // (d) 2A - B
        cout << (2 * A) - B << endl << "~~~~~~~~" << endl;

        // (e) B + 1/2A
        cout << B + ((1 / 2.0) * A) << endl << "~~~~~~~~" << endl;
    }

    void question3() {
        MatrixXf A(2, 3);
        A << 3, 0, 0,
            -4, -1, 6;

        // (c) 2A
        cout << 2 * A << endl;
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
        cout << C(row - 1, col - 1) << endl;

        // c21
        row = 2, col = 1;
        cout << C(row - 1, col - 1) << endl;
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
        cout << A * B << endl << "~~~~~~~~" << endl;

        // (b) BA
        cout << B * A << endl;
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
        cout << A * B << endl << "~~~~~~~" << endl;

        // (b) BA
        cout << B * A << endl;
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
        cout << A * B << endl << "~~~~~~~" << endl;

        // (b) BA
        cout << B * A << endl;
    }

    void question10() {
        MatrixXf A(2, 3);
        A << 4, -1, -1,
            1, -4, 4;

        VectorXf V(2);
        V << 0, 0;

        cout << A.colPivHouseholderQr().solve(V) << endl;
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

        cout << A + B + C << endl;
    }

    void question15() {
        int a = 4, b = -3;

        MatrixXf A(2, 2);
        A << 2, 4,
            3, 1;

        MatrixXf B(2, 2);
        B << 2, -1,
            1, 0;

        cout << a * A + b * B << endl;
    }

    void question16() {
        int a = 3, b = -4;

        MatrixXf A(2, 2);
        A << 1, 2,
            3, 4;

        MatrixXf B(2, 2);
        B << 0, -1,
            2, 1;

        cout << (a - b) * (A - B) << endl;
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
        cout << (B - 2 * A) / 3.0 << endl << "~~~~~~~~~" << endl;

        // (b) 2A - 5B = 3X -> (2A - 5B) / 3 = X
        cout << (2 * A - 5 * B) / 3.0 << endl << "~~~~~~~~~" << endl;

        // (c) X - 3A + 2B = 0 -> X = 3A - 2B 
        cout << 3 * A - 2 * B << endl << "~~~~~~~~~" << endl;

        // (d) 6X - 4A - 3B = 0 -> X = (4A + 3B) / 6.0
        cout << (4 * A + 3 * B) / 6.0 << endl;
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

        cout << B * (C * A) << endl;
    }

    void question19() {
        MatrixXf A(2, 2);
        A << -1, 2,
            0, 1;

        MatrixXf I = MatrixXf::Identity(A.rows(), A.cols());

        cout << A * (I + A) << endl;
    }

    void question20() {
        MatrixXf A(3, 2);
        A << 2, 0,
            1, 1,
            1, -2;

        MatrixXf B(2, 3);
        B << 3, -1, 2,
            1, 0, 4;

        cout << (A * B).transpose() << endl << "~~~~~~~~" << endl;

        cout << B.transpose() * A.transpose() << endl;
    }

    void question21() {
        MatrixXf A(2, 3);

        A << 0, 2, 2,
            4, -1, 1;

        MatrixXf B = A.transpose() * A;
        cout << B << endl;

        if (Tools::is_symmetric(B))
            cout << "Symmetric" << endl << "~~~~~~~~~" << endl;

        MatrixXf C = A * A.transpose();

        cout << C << endl;
        if (Tools::is_symmetric(C))
            cout << "Symmetric" << endl << "~~~~~~~~~" << endl;
    }

    void question22() {
        MatrixXf A(3, 3);
        A << 1, 0, 0,
            0, 1, 0,
            0, 0, -1;

        cout << A * A * A * A * A * A * A * A * A * A * A << endl;
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
            cout << "Symmetric" << endl;
        else if (Tools::is_skew_symmetric(A))
            cout << "Skew-symmetric" << endl;
        else
            cout << "Neither" << endl;
    }

    void question25() {
        MatrixXf A(3, 3);

        A << 0, 2, 1,
            2, 0, 3,
            1, 3, 0;

        if (Tools::is_symmetric(A))
            cout << "Symmetric" << endl;
        else if (Tools::is_skew_symmetric(A))
            cout << "Skew-symmetric" << endl;
        else
            cout << "Neither" << endl;
    }
}