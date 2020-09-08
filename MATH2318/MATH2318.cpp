#include <iostream>
#include <Eigen/Dense>
#include <boost/integer/common_factor_rt.hpp>

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

        std::string float_to_ratio(float f) {
            // if it can be expressed as an int, don't compute for a ratio.
            if (static_cast<int>(f) == f)
                return std::to_string(static_cast<int>(f));

            for (int n = -100; n <= 100; ++n)
            {
                for (int d = -100; d <= 100; ++d)
                {
                    if (n / static_cast<float> (d) == f)
                    {
                        int gcd = boost::integer::gcd(n, d);
                        return std::to_string(n / gcd) + "/" + std::to_string(d / gcd);
                    }
                }
            }

            return "welp"; // didn't find a ratio!
        }

        void print_matrix_ratios(Eigen::MatrixXf A) {
            for (int r = 0; r < A.rows(); ++r)
            {
                for (int c = 0; c < A.cols(); ++c)
                {
                    std::cout << Tools::float_to_ratio(A(r, c)) << " ";
                }
                std::cout << std::endl;
            }
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
                4, 6,
                -5, 3;

            Eigen::MatrixXf B(3, 2);
            B << 1, 4,
                -1, 5,
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
            std::cout << B + ((1 / 2.0) * A) << std::endl << "~~~~~~~~" << std::endl;
        }

        void question3() {
            Eigen::MatrixXf A(2, 3);
            A << 3, 0, 0,
                -4, -1, 6;

            // (c) 2A
            std::cout << 2 * A << std::endl;
        }

        void question4() {
            Eigen::MatrixXf A(2, 3);
            A << 4, 2, 2,
                -5, 3, 1;

            Eigen::MatrixXf B(2, 3);
            B << 1, 2, -7,
                0, -5, 1;

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
                -2, 6;

            // (a) AB
            std::cout << A * B << std::endl << "~~~~~~~~" << std::endl;

            // (b) BA
            std::cout << B * A << std::endl;
        }

        void question7() {
            Eigen::MatrixXf A(3, 3);
            A << 2, 5, 3,
                -1, 2, 1,
                3, 2, -2;

            Eigen::MatrixXf B(3, 3);
            B << 3, 2, 0,
                -2, -4, 1,
                -1, 1, -4;

            // (a) AB
            std::cout << A * B << std::endl << "~~~~~~~" << std::endl;

            // (b) BA
            std::cout << B * A << std::endl;
        }

        void question8() {
            Eigen::MatrixXf A(4, 1);
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
                1, -4, 4;

            Eigen::VectorXf V(2);
            V << 0, 0;

            std::cout << A.colPivHouseholderQr().solve(V) << std::endl;
        }

        void question14() {
            Eigen::MatrixXf A(2,2);
            A << 6, 8,
                -1, 0;

            Eigen::MatrixXf B(2, 2);
            B << 0, 4,
                -4, -2;

            Eigen::MatrixXf C(2, 2);
            C << -11, -7,
                  3,  -2;

            std::cout << A + B + C << std::endl;
        }

        void question15() {
            int a = 4, b = -3;

            Eigen::MatrixXf A(2, 2);
            A << 2, 4,
                3, 1;

            Eigen::MatrixXf B(2, 2);
            B << 2, -1,
                1, 0;

            std::cout << a * A + b * B << std::endl;
        }

        void question16() {
            int a = 3, b = -4;

            Eigen::MatrixXf A(2, 2);
            A << 1, 2,
                 3, 4;

            Eigen::MatrixXf B(2, 2);
            B << 0, -1,
                 2,  1;

            std::cout << (a - b) * (A - B) << std::endl;
        }

        void question17() {
            Eigen::MatrixXf A(3, 2);
            A << -4, 0,
                2, -5,
                1, -3;

            Eigen::MatrixXf B(3, 2);
            B << 2, 4,
                1, 4,
                1, -2;

            // (a) 3X + 2A = B -> (B - 2A) / 3 = X
            std::cout << (B - 2 * A) / 3.0 << std::endl << "~~~~~~~~~" << std::endl;

            // (b) 2A - 5B = 3X -> (2A - 5B) / 3 = X
            std::cout << (2 * A - 5 * B) / 3.0 << std::endl << "~~~~~~~~~" << std::endl;

            // (c) X - 3A + 2B = 0 -> X = 3A - 2B 
            std::cout << 3 * A - 2 * B << std::endl << "~~~~~~~~~" << std::endl;

            // (d) 6X - 4A - 3B = 0 -> X = (4A + 3B) / 6.0
            std::cout << (4 * A + 3 * B) / 6.0 << std::endl;
        }

        void question18() {
            Eigen::MatrixXf A(2, 3);
            A << 1, 1, 0,
                2, 3, -1;

            Eigen::MatrixXf B(2, 2);
            B << -1, 1,
                2, 3;

            Eigen::MatrixXf C(2, 2);
            C << 0, -1,
                1, 0;
           
            std::cout << B * (C * A) << std::endl;
        }

        void question19() {
            Eigen::MatrixXf A(2, 2);
            A << -1, 2,
                0, 1;

            Eigen::MatrixXf I = Eigen::MatrixXf::Identity(A.rows(), A.cols());

            std::cout << A * (I + A) << std::endl;
        }

        void question20() {
            Eigen::MatrixXf A(3, 2);
            A << 2, 0,
                1, 1,
                1, -2;

            Eigen::MatrixXf B(2, 3);
            B << 3, -1, 2,
                1, 0, 4;

            std::cout << (A * B).transpose() << std::endl << "~~~~~~~~" << std::endl;

            std::cout << B.transpose() * A.transpose() << std::endl;
        }

        void question21() {
            Eigen::MatrixXf A(2, 3);

            A << 0, 2, 2,
                4, -1, 1;

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
                0, 0, -1;

            std::cout << A * A * A * A * A * A * A * A * A * A * A << std::endl;
        }

        void question23() {
            Eigen::MatrixXf B(2, 2);

            int n = 2;
        }

        void question24() {
            Eigen::MatrixXf A(2, 2);

            A << 3, 2,
                2, -2;

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

    namespace HW3 {
        void question1() {
            Eigen::MatrixXf A(2,2);
            A << -1, 1,
                -1, 2;
            Eigen::MatrixXf B(2,2);
            B << -2, 1,
                -1, 1;

            std::cout << A * B << std::endl;
            std::cout << B * A << std::endl;
        }

        void question3() {
            Eigen::MatrixXf A(2,2);
           
            A << 1, 2,
                3, 5;

            std::cout << A.inverse() << std::endl;
        }

        void question4() {
            Eigen::MatrixXf A(3, 3);

            A << -2, -3, 3,
                1, 1, -1,
                -1, -1, 2;

            std::cout << A.inverse() << std::endl;
        }

        void question5() {
            Eigen::MatrixXf A(3, 3);

            A << -1, 1, 2,
                3, -10, 5,
                5, -19, 16;

            std::cout << A.inverse() << std::endl; // DNE
        }

        void question6() {
            Eigen::MatrixXf A(4, 4);

            A << 20, 0, 0, 0,
                0, -4, 0, 0,
                0, 0, 0, 0,
                0, 0, 0, -3;

            std::cout << A.inverse() << std::endl; // DNE
        }

        void question7() {
            Eigen::MatrixXf A(2, 2);

            A << 1, -4,
                -7, 4;

            Eigen::MatrixXf AI = A.inverse();
           
            Tools::print_matrix_ratios(AI);
        }

        void question8() {
            Eigen::MatrixXf A(2, 2);

            A << 6, -2,
                -9, 3;

            Eigen::MatrixXf AI = A.inverse();

            Tools::print_matrix_ratios(AI);
        }

        void question9() {
            Eigen::MatrixXf A(2, 2);
            A << 1, 2,
                -2, -3;
            A = A.inverse();

            Eigen::MatrixXf B(2, 2);
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
            Eigen::MatrixXf M(2, 2);
            M << 1, 2,
                1, -2;
            Eigen::VectorXf A_V(M.rows());
            A_V << 1, -3;

            Eigen::VectorXf B_V(M.rows());
            A_V << 10, -2;


            // (a) 
            std::cout << M.colPivHouseholderQr().solve(A_V) << std::endl << "~~~~~~" << std::endl;

            // (b) 
            std::cout << M.colPivHouseholderQr().solve(B_V);
        }

        // doesn't solve system of equations properly.
        void question11() {
            Eigen::MatrixXf A_M(3, 3);
            A_M << 1, 2, 1,
                1, 2, -1,
                1, -2, 1;
            Eigen::VectorXf A_V(A_M.rows());
            A_V << 0, 2, -4;


            Eigen::MatrixXf B_M(3, 3);
            A_M << 1, 2, 1,
                1, 2, -1,
                1, -2, 1;
            Eigen::VectorXf B_V(B_M.rows());
            A_V << -1, -3, 3;

            // (a) 
            std::cout << A_M.colPivHouseholderQr().solve(A_V) << std::endl << "~~~~~~" << std::endl;

            // (b) 
            std::cout << B_M.colPivHouseholderQr().solve(B_V);
        }

        //https://www.slader.com/discussion/question/find-x-such-that-the-matrix-is-singular-a-4-x-2-3/
        void question12() {
            int a = 4, b = -6, c = -3;

            float d = (a * b) / c;

            std::cout << d << std::endl;
        }

        // https://www.symbolab.com/solver/matrix-inverse-calculator/
        void question13() {

        }

        void question15() {
            Eigen::MatrixXf A(2, 2);

            A << 0, 1,
                1, 0;

            std::cout << A.inverse() << std::endl;
        }

        void question16() {
            Eigen::MatrixXf A(2, 2);

            A << 5, 0,
                0, 1;

            std::cout << A.inverse() << std::endl;
        }

        void question17() {
            Eigen::MatrixXf A(3, 3);

            A << 1, 0, 0,
                0, 0, 1,
                0, 1, 0;

            std::cout << A.inverse() << std::endl;
        }
    }

    namespace QUIZ1 {
        void question1() {
            Eigen::MatrixXf m(3, 3);

            m << -1, 1, -1,
                0, 3, 1,
                0, 0, 1 / static_cast<float> (5.0);

            Eigen::VectorXf v(m.rows());
            v << 0, 5, 0;

            std::cout << m.colPivHouseholderQr().solve(v) << std::endl;
        }

        void question2() {
            for (int x = -3; x <= 5; ++x)
                std::cout << "(" << x << ", " << -5 * x - 3 << ") ";
            std::cout << std::endl << "~~~~~~~~~~~~" << std::endl;
            for (int x = -3; x <= 5; ++x)
                std::cout << "(" << x << ", " << 1 / 2.0 - 5 * x << ") ";
        }

        void question3() {
            Eigen::MatrixXf m(2, 3);

            m << 1, -3, 5,
                4, -12, 20;

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

    namespace QUIZ2 {
        void question1() {
            Eigen::MatrixXf A(2, 3);
            A << 0, 0, -1,
                3, -4, 6;

            Eigen::MatrixXf B(2, 2);
            B << 4, -3,
                -1, 8;

            std::cout << 2 * A << std::endl;
        }

        void question2() {
            Eigen::MatrixXf A(3, 2);
            A << 2, 1,
                -4, 4,
                1, 6;

            Eigen::MatrixXf B(3, 3);
            B << 0, -1, 0,
                4, 0, 1,
                8, -1, 7;

            // (a) AB
            //std::cout << A * B << std::endl;

            // (b) BA
            std::cout << B * A << std::endl;
        }

        void question3() {
            
        }
    }
}

int main() {
    MATH2318::HW3::question12();
}