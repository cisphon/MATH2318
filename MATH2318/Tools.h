#pragma once

#include <iostream>
#include <math.h>
#include <numeric>
#include <Eigen/Dense>

#define PI atan(1) * 4

#define DEBUGGING false

namespace MATH2318::Tools {

    Eigen::VectorXf proj_a_on_b(Eigen::VectorXf a, Eigen::VectorXf b) {
#if DEBUGGING
        std::cout << "~~~~~~~~~~~~~~DEBUGGING~~~~~~~~~~~~~~" << std::endl;
        std::cout << a.dot(b) << std::endl;
        std::cout << a.squaredNorm() << std::endl;
        std::cout << a << std::endl;
        std::cout << "~~~~~~~~~~~~~~DEBUGGING~~~~~~~~~~~~~~" << std::endl;
#endif

        return (a.dot(b) / a.squaredNorm()) * b;
    }

    float distance(Eigen::VectorXf u, Eigen::VectorXf v)
    {
        float sum = 0.0f;
        if (u.size() == v.size())
        {
            for (int i = 0; i < u.size(); ++i)
            {
                sum += ((v(i) - u(i)) * (v(i) - u(i)));
            }

            return sqrt(sum);
        }

        return -1; // does not exist
    }

    float distanceSquared(Eigen::VectorXf u, Eigen::VectorXf v)
    {
        float sum = 0.0f;
        if (u.size() == v.size())
        {
            for (int i = 0; i < u.size(); ++i)
            {
                sum += ((v(i) - u(i)) * (v(i) - u(i)));
            }

            return sum;
        }

        return -1; // does not exist
    }

    double radians_to_degrees(double radian) {
        return (radian * (180.0 / PI));
    }

    double degrees_to_radians(double degrees) {
        return (degrees * (PI / 180.0));
    }

    float angle_between_two_vectors_radians(Eigen::VectorXf u, Eigen::VectorXf v) {
        float a = u.norm();
        float b = v.norm();
        float d = u.dot(v);

        float rads = acos(d / (a * b));

#if DEBUGGING
        std::cout << u.squaredNorm() << std::endl;
        std::cout << v.squaredNorm() << std::endl;
        std::cout << u.dot(v) << std::endl;
#endif

        return rads;
    }

    float angle_between_vectors_degrees(Eigen::VectorXf u, Eigen::VectorXf v) {
        return radians_to_degrees(angle_between_two_vectors_radians(u,v));
    }

    bool holds_triangle_inequality(Eigen::VectorXf u, Eigen::VectorXf v) {
        return (u + v).norm() <= u.norm() + v.norm();
    }

    bool is_parallel(Eigen::VectorXf u, Eigen::VectorXf v)
    {
        if (!u.isZero() && !v.isZero())
        {
            for (float num = 1; num <= 100; ++num)
            {
                for (float den = 1; den <= 100; ++den)
                {
                    float c = num / den;
                    if ((u * c == v) || (u == c * v) || (u * -c == v) || (u == -c * v))
                        return true;
                }
            }
        }
        return false;
    }

    bool is_orthogonal(Eigen::VectorXf u, Eigen::VectorXf v)
    {
        return u.dot(v) == 0 ? true : false;
    }

    bool is_orthonormal(Eigen::VectorXf u, Eigen::VectorXf v)
    {
        return false;
    }

    void orthogonal_parallel_or_neither(Eigen::VectorXf u, Eigen::VectorXf v) {
        bool orthogonal = is_orthogonal(u, v);
        bool parallel = is_parallel(u, v);

        if (orthogonal || parallel) {
            if (orthogonal)
                std::cout << "Orthogonal" << std::endl;
            if (parallel)
                std::cout << "Parallel" << std::endl;
        }
        else {
            std::cout << "Neither" << std::endl;
        }
    }

    bool is_symmetric(Eigen::MatrixXf A) {
        return A.transpose() == A;
    }

    bool is_skew_symmetric(Eigen::MatrixXf A) {
        return A.transpose() == -A;
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
                    int gcd = std::gcd(n, d);
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
                std::cout << float_to_ratio(A(r, c)) << " ";
            }
            std::cout << std::endl;
        }
    }

    Eigen::MatrixXf pow_of_matrix(Eigen::MatrixXf A, float n) {
        for (int r = 0; r < A.rows(); ++r)
            for (int c = 0; c < A.cols(); ++c)
                A(r, c) = std::pow(A(r, c), n);
        return A;
    }

    Eigen::VectorXf points_to_vector(float x1, float y1, float x2, float y2) {
        Eigen::VectorXf vec(2);
        vec << (x2 - x1), (y2 - y1);
        return vec;
    }

    std::string vectorxf_linear_combo_2(Eigen::VectorXf u, Eigen::VectorXf v, Eigen::VectorXf r) {
        // shitty iterative solution to find linear combo
        for (float a = -100; a <= 100; ++a) {
            for (float b = -100; b <= 100; ++b) {
                if (a * u + b * v == r) {
                    return std::to_string(a) + " " + std::to_string(b);
                    break;
                }
            }
        }

        return "IMPOSSIBLE";
    }

    std::string vectorxf_linear_combo_2_with_fractions(Eigen::VectorXf u, Eigen::VectorXf v, Eigen::VectorXf r) {
        float width = 100;
        // shitty iterative solution to find linear combo
        for (float a = -width; a <= width; ++a) {
            for (float b = -width; b <= width; ++b) {
                if (a * u + b * v == r) {
                    return std::to_string(a) + " " + std::to_string(b);
                    break;
                }
            }
        }


        width = 10;
        for (float n1 = 1; n1 <= width; ++n1)
        {
            for (float d1 = 1; d1 <= width; ++d1)
            {
                float a = n1 / d1;
                for (float n2 = 1; n2 <= width; ++n2)
                {
                    for (float d2 = 1; d2 <= width; ++d2)
                    {
                        float b = n2 / d2;

                        if ((a * u) + (b * v) == r) {
                            return std::to_string(n1) + '/' + std::to_string(d1) + ' '
                                + std::to_string(n2) + '/' + std::to_string(d2);
                        }
                        else if ((a * u) + (-b * v) == r) {
                            return std::to_string(n1) + '/' + std::to_string(d1) + ' ' + '-'
                                + std::to_string(n2) + '/' + std::to_string(d2);
                        }
                        else if ((-a * u) + (b * v) == r) {
                            return '-' + std::to_string(n1) + '/' + std::to_string(d1) + ' '
                                + std::to_string(n2) + '/' + std::to_string(d2);
                        }

                        else if ((-a * u) + (-b * v) == r) {
                            return '-' + std::to_string(n1) + '/' + std::to_string(d1) + ' ' + '-'
                                + std::to_string(n2) + '/' + std::to_string(d2);
                        }
                    }
                }
            }
        }

        return "IMPOSSIBLE";
    }

    std::string vectorxf_linear_combo_3(Eigen::VectorXf u1, Eigen::VectorXf u2,
        Eigen::VectorXf u3, Eigen::VectorXf v) {
        float width = 100;
        // shitty iterative solution to find linear combo
        for (float a = -width; a <= width; ++a) {
            for (float b = -width; b <= width; ++b) {
                for (float c = -width; c <= width; ++c) {
                    if (a * u1 + b * u2 + c * u3 == v) {
                        return std::to_string(a) + " " + std::to_string(b) + " " + std::to_string(c);
                    }
                }
            }
        }

        return "IMPOSSIBLE";
    }

    std::string matrixxf_linear_combo_2(Eigen::MatrixXf A, Eigen::MatrixXf B, Eigen::MatrixXf M) {
        int width = 100;
        for (int a = -width; a <= width; ++a)
        {
            for (int b = -width; b <= width; ++b)
            {
                if (a * A + b * B == M)
                {
                    return std::to_string(a) + ' ' + std::to_string(b);
                }
            }
        }
        return "IMPOSSIBLE";
    }
}