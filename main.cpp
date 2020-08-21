#include <iostream>
#include <eigen3/Eigen/Dense>

#define DEBUG false

namespace MATH2318 {
  namespace HW1 {
    void question8() {
      Eigen::MatrixXd m(3, 4);

      m << -1, -2, 3, -2,
            3, -4, 2, -5,
            5, 5, -6, 4;

      Eigen::MatrixXd m2(m);

      // Add 3 times Row 1 to Row 2
      m2.row(1) += m.row(0) * 3;

      // Add 5 times Row 1 to Row 3
      m2.row(2) += m.row(0) * 5;

      std::cout << "Original Matrix" << std::endl;
      std::cout << m << std::endl << std::endl;

      std::cout << "New Row-Equivalent Matrix" << std::endl;
      std::cout << m2 << std::endl;
    }

    void question9(bool cheat) {
      if (cheat) {
        Eigen::MatrixXf m(3, 3);
        m << 2, 1, -1,
                1, -1, 1,
                0, 1, 2;
        Eigen::VectorXf v(m.rows());
        v << 3, 0, 1;

        std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
      }
      else {
        Eigen::MatrixXf m(3, 4);
        m << 2, 1, -1, 3,
             1, -1, 1, 0,
             0, 1, 2, 1;

        Eigen::MatrixXf m2(m);

        m2.row(0) += m2.row(1); // add row 2 to row 1
        m2.row(1) += m2.row(2); // add row 3 to row 2

        std::cout << m2 << std::endl; // Use this to solve for x, y, z.
      }
    }

    void question13(bool cheat) {
      if (cheat) {
        Eigen::MatrixXf m(3, 2);

        m << -3, 5,
              3, 4,
              4, -8;

        Eigen::VectorXf v(m.rows());
        v << -31, -14, 48;

        std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
      }
      else {
        Eigen::MatrixXf m(3, 2);

        m << -3, 5,
              3, 4,
              4, -8;
      }
    }

  }

  namespace QUIZ1 {

  }
}

int main() {
#if DEBUG

#else
  MATH2318::HW1::question9(true);
  MATH2318::HW1::question9(false);
#endif
}