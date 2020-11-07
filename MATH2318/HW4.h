#pragma once

#include "Tools.h"

namespace MATH2318::HW4 {
    void question1() {
        cout << Tools::points_to_vector(0, 0, 2, 3) << endl;
    }

    void question2() {
        cout << Tools::points_to_vector(0, 0, 5, -3) << endl;
    }

    void question3() {
        VectorXf u(2);
        u << 2, -1;

        VectorXf v(2);
        v << -1, -3;

        cout << u + v << endl;
    }

    void question4() {
        VectorXf u(2);
        u << -1, 3;

        VectorXf w(2);
        w << -3, -1;

        cout << u + 2 * w << endl;
    }

    void question5() {
        VectorXf u(3);
        u << 1, 2, 3;

        VectorXf v(3);
        v << 1, -2, 1;

        cout << u - v << endl;
        cout << v - u << endl;
    }

    void question6() {
        VectorXf u(3);
        u << 1, 2, 3;

        VectorXf v(3);
        v << 2, 2, -1;

        VectorXf w(3);
        w << 4, 0, -4;

        cout << 4 * u << endl << "~~~~~~~~" << endl;
        cout << 5 * v << endl << "~~~~~~~~" << endl;
        cout << -w << endl << "~~~~~~~~" << endl;
        cout << 4 * u + 5 * v - w << endl;
    }

    void question7() {
        VectorXf v(3);
        v << 2, 0, 1;

        cout << -v << endl << "~~~~~~~~" << endl;
        cout << 2 * v << endl << "~~~~~~~~" << endl;
        cout << v / 2.0 << endl << "~~~~~~~~" << endl;
    }

    void question8() {
        VectorXf u(5);
        u << 4, 0, 4, 3, 4;

        VectorXf v(5);
        v << 8, -5, 6, -3, 3;

        // (a) u - v
        cout << u - v << endl << "~~~~~~~~" << endl;

        // (b) 2(u + 3v)
        cout << 2 * (u + 3 * v) << endl << "~~~~~~~~" << endl;

        // (c) 2v - u
        cout << 2 * v - u << endl << "~~~~~~~~" << endl;
    }

    void question9() {
        VectorXf u(2);
        u << 2, 1;

        VectorXf v(2);
        v << 2, -3;

        VectorXf r(2);
        r << 4, -2;

        cout << Tools::vectorxf_linear_combo_2(u, v, r) << endl;
    }

    void question10() {
        VectorXf u(2);
        u << 1, 2;

        VectorXf v(2);
        v << 1, -1;

        VectorXf r(2);
        r << -2, -4;

        cout << Tools::vectorxf_linear_combo_2(u, v, r) << endl;
    }

    void question11() {
        VectorXf u1(3);
        u1 << 3, 1, 7;

        VectorXf u2(3);
        u2 << 2, -1, 3;

        VectorXf u3(3);
        u3 << -3, 1, -5;

        VectorXf v(3);
        v << -1, 7, 2;

        cout << Tools::vectorxf_linear_combo_3(u1, u2, u3, v) << endl;
    }
}