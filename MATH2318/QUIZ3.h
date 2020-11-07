#pragma once

#include "Tools.h"

namespace MATH2318::QUIZ3 {
    void question1() {
        VectorXf vec = Tools::points_to_vector(0, 0, -3, 5);

        cout << vec << endl;
    }

    void question2() {
        VectorXf u(3);
        u << 1, 2, 3;

        VectorXf v(3);
        v << 2, -1, 2;

        cout << "~~~~~~~~~~~~~~~~~~~" << endl;
        cout << u - v << endl;

        cout << "~~~~~~~~~~~~~~~~~~~" << endl;
        cout << v - u << endl;
    }

    void question3() {
        VectorXf u(5);
        u << 3, 4, 4, 4, 0;

        VectorXf v(5);
        v << -5, -3, 3, 8, 6;

        cout << "~~~~~~~~~~~~~~~~~~~" << endl;
        cout << u - v << endl;

        cout << "~~~~~~~~~~~~~~~~~~~" << endl;
        cout << 2 * (u + 3 * v) << endl;

        cout << "~~~~~~~~~~~~~~~~~~~" << endl;
        cout << 2 * v - u << endl;
    }
}