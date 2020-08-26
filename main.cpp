#include <iostream>
#include <eigen3/Eigen/Dense>



namespace MATH2318 {
  namespace Tools {
    bool isSymmetric(Eigen::MatrixXf A) {
      if (A.transpose() == A)
        return true;
      return false;
    }

    bool isSkewSymmetric(Eigen::MatrixXf A) {
      if (A.transpose() == -A)
        return true;
      return false;
    }
  }

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

    void question14(bool cheat) {
      if (cheat) {
        Eigen::MatrixXf m(3, 3);

        m << 1, 0, -3,
             3, 1, -2,
             2, 2, 1;

        Eigen::VectorXf v(m.rows());
        v << -7, -5, -3;

        std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
      }
      else {

      }
    }

    void question15(bool cheat) {
      if (cheat) {
        Eigen::MatrixXf m(2, 4);

        m << 4, 12, -7, -20,
             3, 9, -5, -28;

        Eigen::VectorXf v(m.rows());
        v << 28, 38;

        std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
      }
      else {

      }
    }
  }

  namespace HW2 {
    void question2() {
        Eigen::MatrixXf A(3, 2);
        A << 2, -1,
             4,  6,
            -5,  3;

        Eigen::MatrixXf B(3, 2);
        B << 1,  4,
            -1,  5,
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
        std::cout << B + ((1/2.0) * A) << std::endl << "~~~~~~~~" << std::endl;
    }

    void question3() {
      Eigen::MatrixXf A(2, 3);
      A << 3,  0, 0,
          -4, -1, 6;

      // (c) 2A
      std::cout << 2 * A << std::endl;
    }

    void question4() {
      Eigen::MatrixXf A(2, 3);
      A << 4, 2, 2,
          -5, 3, 1;

      Eigen::MatrixXf B(2, 3);
      B << 1,  2, -7,
           0, -5,  1;

      Eigen::MatrixXf C = 2 * A - 3 * B;

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
      Eigen::MatrixXf A(2, 2);
      A << 2, 1,
           5, 1;

      Eigen::MatrixXf B(2, 2);
      B << 1, -2,
          -2,  6;

      // (a) AB
      std::cout << A * B << std::endl << "~~~~~~~~" << std::endl;

      // (b) BA
      std::cout << B * A << std::endl;
    }

    void question7() {
      Eigen::MatrixXf A(3, 3);
      A << 2, 5, 3,
          -1, 2, 1,
           3, 2,-2;

      Eigen::MatrixXf B(3, 3);
      B << 3, 2, 0,
          -2,-4, 1,
          -1, 1,-4;

      // (a) AB
      std::cout << A * B << std::endl << "~~~~~~~" << std::endl;

      // (b) BA
      std::cout << B * A << std::endl;
    }

    void question8() {
      Eigen::MatrixXf A(4,1);
      A << -1,
            1,
            2,
           -2;

      Eigen::MatrixXf B(1, 4);
      B << 3, 1, 2, 2;

      // (a) AB
      std::cout << A * B << std::endl << "~~~~~~~" << std::endl;

      // (b) BA
      std::cout << B * A << std::endl;
    }

    void question10() {
      Eigen::MatrixXf A(2, 3);
      A << 4, -1, -1,
           1, -4,  4;

      Eigen::VectorXf V(2);
      V << 0, 0;

      std::cout << A.colPivHouseholderQr().solve(V) << std::endl;
    }

    void question20() {
      
    }

    void question21() {
      Eigen::MatrixXf A(2, 3);

      A << 0, 2, 2,
           4,-1, 1;

      Eigen::MatrixXf B = A.transpose() * A;
      std::cout << B << std::endl;

      if (Tools::isSymmetric(B))
        std::cout << "Symmetric" << std::endl << "~~~~~~~~~" << std::endl;

      Eigen::MatrixXf C = A * A.transpose();

      std::cout << C << std::endl;
      if (Tools::isSymmetric(C))
        std::cout << "Symmetric" << std::endl << "~~~~~~~~~" << std::endl;
    }

    void question22() {
      Eigen::MatrixXf A(3, 3);

      A << 1, 0, 0,
           0, 1, 0,
           0, 0,-1;


    }

    void question23() {
      Eigen::MatrixXf B(2, 2);

      int n = 2;
    }

    void question24() {
      Eigen::MatrixXf A(2, 2);

      A << 3, 2,
           2,-2;

      if (Tools::isSymmetric(A))
        std::cout << "Symmetric" << std::endl;
      else if (Tools::isSkewSymmetric(A))
        std::cout << "Skew-symmetric" << std::endl;
      else
        std::cout << "Neither" << std::endl;
    }

    void question25() {
      Eigen::MatrixXf A(3, 3);

      A << 0, 2, 1,
           2, 0, 3,
           1, 3, 0;

      if (Tools::isSymmetric(A))
        std::cout << "Symmetric" << std::endl;
      else if (Tools::isSkewSymmetric(A))
        std::cout << "Skew-symmetric" << std::endl;
      else
        std::cout << "Neither" << std::endl;
    }
  }

  namespace QUIZ1 {
    void question1() {
      Eigen::MatrixXf m(3, 3);

      m << -1, 1, -1,
              0, 3, 1,
              0, 0, 1 / 5.0;

      Eigen::VectorXf v(m.rows());
      v << 0, 5, 0;

      std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
    }

    void question2() {
      for (int x = -3; x <= 5; ++x)
        std::cout << "(" << x << ", " << -5 * x - 3  << ") ";
      std::cout << std::endl << "~~~~~~~~~~~~" << std::endl;
      for (int x = -3; x <= 5; ++x)
        std::cout << "(" << x << ", " << 1/2.0 - 5 * x << ") ";
    }

    void question3() {
      Eigen::MatrixXf m(2, 3);

      m << 1, -3, 5,
           4,-12, 20;

      Eigen::VectorXf v(m.rows());
      v << 13, 13;

      std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
    }

    void question8() {
      Eigen::MatrixXf m(5, 5);

      m << 1, -1, 2, 2, 6,
           3, -2, 4, 4, 12,
           0, 1, -1, -1, -3,
           2, -2, 4, 5, 15,
           2, -2, 4, 4, 13;

      Eigen::VectorXf v(m.rows());
      v << 9, 20, -5, 16, 19;

      std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
    }
  }
}

int main() {
  MATH2318::HW2::question21();
}