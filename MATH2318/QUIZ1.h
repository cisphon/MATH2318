#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ1 {
    void question1() {
        MatrixXf m(3, 3);

        m << -1, 1, -1,
            0, 3, 1,
            0, 0, 1 / static_cast<float> (5.0);

        VectorXf v(m.rows());
        v << 0, 5, 0;

        cout << m.colPivHouseholderQr().solve(v) << endl;
    }

    void question2() {
        for (int x = -3; x <= 5; ++x)
            cout << "(" << x << ", " << -5 * x - 3 << ") ";
        cout << endl << "~~~~~~~~~~~~" << endl;
        for (int x = -3; x <= 5; ++x)
            cout << "(" << x << ", " << 1 / 2.0 - 5 * x << ") ";
    }

    void question3() {
        MatrixXf m(2, 3);

        m << 1, -3, 5,
            4, -12, 20;

        VectorXf v(m.rows());
        v << 13, 13;

        cout << m.colPivHouseholderQr().solve(v) << endl;
    }

    void question8() {
        MatrixXf m(5, 5);

        m << 1, -1, 2, 2, 6,
            3, -2, 4, 4, 12,
            0, 1, -1, -1, -3,
            2, -2, 4, 5, 15,
            2, -2, 4, 4, 13;

        VectorXf v(m.rows());
        v << 9, 20, -5, 16, 19;

        cout << m.colPivHouseholderQr().solve(v) << endl;
    }

}