#pragma once

#include "Tools.h"

namespace MATH2318::HW1 {
    void question8() {
        MatrixXd m(3, 4);

        m << -1, -2, 3, -2,
            3, -4, 2, -5,
            5, 5, -6, 4;

        MatrixXd m2(m);

        // Add 3 times Row 1 to Row 2
        m2.row(1) += m.row(0) * 3;

        // Add 5 times Row 1 to Row 3
        m2.row(2) += m.row(0) * 5;

        cout << "Original Matrix" << endl;
        cout << m << endl << endl;

        cout << "New Row-Equivalent Matrix" << endl;
        cout << m2 << endl;
    }

    void question9() {
        MatrixXf m(3, 3);
        m << 2, 1, -1,
            1, -1, 1,
            0, 1, 2;
        VectorXf v(m.rows());
        v << 3, 0, 1;

        cout << m.colPivHouseholderQr().solve(v) << endl;
    }

    void question13() {
        MatrixXf m(3, 2);

        m << -3, 5,
            3, 4,
            4, -8;

        VectorXf v(m.rows());
        v << -31, -14, 48;

        cout << m.colPivHouseholderQr().solve(v) << endl;
    }

    void question14() {
        MatrixXf m(3, 3);

        m << 1, 0, -3,
            3, 1, -2,
            2, 2, 1;

        VectorXf v(m.rows());
        v << -7, -5, -3;

        cout << m.colPivHouseholderQr().solve(v) << endl;
    }

    void question15() {
        MatrixXf m(2, 4);

        m << 4, 12, -7, -20,
            3, 9, -5, -28;

        VectorXf v(m.rows());
        v << 28, 38;

        cout << m.colPivHouseholderQr().solve(v) << endl;
    }
}