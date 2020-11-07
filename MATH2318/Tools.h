#pragma once

#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <Eigen/Dense>

#define PI atan(1) * 4

#define DEBUGGING false

using namespace Eigen;
using namespace std;

namespace MATH2318::Tools {

    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    int findGCD(int arr[], int n)
    {
        int result = arr[0];
        for (int i = 1; i < n; i++)
        {
            result = gcd(arr[i], result);

            if (result == 1)
            {
                return 1;
            }
        }
        return result;
    }

    vector<float> minor_of_matrix(MatrixXf A, int r, int c) {
        vector<float> v;

        for (int row = 0; row < A.rows(); row++)
        {
            for (int col = 0; col < A.cols(); col++)
            {
                // if not in that row or col
                if (!(row == r - 1) || (col == c - 1)) 
                {  
                    v.push_back(A(row, col));
                }
            }
        }
        return v;
    }

    bool is_singular(MatrixXf a)
    {
        return a.determinant() == 0;
    }

    VectorXf proj_a_on_b(VectorXf a, VectorXf b) {
#if DEBUGGING
        cout << "~~~~~~~~~~~~~~DEBUGGING~~~~~~~~~~~~~~" << endl;
        cout << a.dot(b) << endl;
        cout << a.squaredNorm() << endl;
        cout << a << endl;
        cout << "~~~~~~~~~~~~~~DEBUGGING~~~~~~~~~~~~~~" << endl;
#endif

        return (a.dot(b) / a.squaredNorm()) * b;
    }

    float distance(VectorXf u, VectorXf v)
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

    float distanceSquared(VectorXf u, VectorXf v)
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

    float angle_between_two_vectors_radians(VectorXf u, VectorXf v) {
        float a = u.norm();
        float b = v.norm();
        float d = u.dot(v);

        float rads = acos(d / (a * b));

#if DEBUGGING
        cout << u.squaredNorm() << endl;
        cout << v.squaredNorm() << endl;
        cout << u.dot(v) << endl;
#endif

        return rads;
    }

    float angle_between_vectors_degrees(VectorXf u, VectorXf v) {
        return radians_to_degrees(angle_between_two_vectors_radians(u,v));
    }

    bool holds_triangle_inequality(VectorXf u, VectorXf v) {
        return (u + v).norm() <= u.norm() + v.norm();
    }

    bool is_parallel(VectorXf u, VectorXf v)
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

    bool is_orthogonal(VectorXf u, VectorXf v)
    {
        return u.dot(v) == 0 ? true : false;
    }

    bool is_orthonormal(VectorXf u, VectorXf v)
    {
        return (u.norm() == v.norm() == 1);
    }

    void orthogonal_parallel_or_neither(VectorXf u, VectorXf v) {
        bool orthogonal = is_orthogonal(u, v);
        bool parallel = is_parallel(u, v);

        if (orthogonal || parallel) {
            if (orthogonal)
                cout << "Orthogonal" << endl;
            if (parallel)
                cout << "Parallel" << endl;
        }
        else {
            cout << "Neither" << endl;
        }
    }

    bool is_symmetric(MatrixXf A) {
        return A.transpose() == A;
    }

    bool is_skew_symmetric(MatrixXf A) {
        return A.transpose() == -A;
    }
    
    string float_to_ratio(float f) {
        // if it can be expressed as an int, don't compute for a ratio.
        if (static_cast<int>(f) == f)
            return to_string(static_cast<int>(f));

        for (int n = -100; n <= 100; ++n)
        {
            for (int d = -100; d <= 100; ++d)
            {
                if (n / static_cast<float> (d) == f)
                {
                    int gcd = std::gcd(n, d);
                    return to_string(n / gcd) + "/" + to_string(d / gcd);
                }
            }
        }

        return "welp"; // didn't find a ratio!
    }

    void print_matrix_ratios(MatrixXf A) {
        for (int r = 0; r < A.rows(); ++r)
        {
            for (int c = 0; c < A.cols(); ++c)
            {
                cout << float_to_ratio(A(r, c)) << " ";
            }
            cout << endl;
        }
    }

    MatrixXf pow_of_matrix(MatrixXf A, float n) {
        for (int r = 0; r < A.rows(); ++r)
            for (int c = 0; c < A.cols(); ++c)
                A(r, c) = pow(A(r, c), n);
        return A;
    }

    VectorXf points_to_vector(float x1, float y1, float x2, float y2) {
        VectorXf vec(2);
        vec << (x2 - x1), (y2 - y1);
        return vec;
    }

    string vectorxf_linear_combo_2(VectorXf u, VectorXf v, VectorXf r) {
        // shitty iterative solution to find linear combo
        for (float a = -100; a <= 100; ++a) {
            for (float b = -100; b <= 100; ++b) {
                if (a * u + b * v == r) {
                    return to_string(a) + " " + to_string(b);
                    break;
                }
            }
        }

        return "IMPOSSIBLE";
    }

    string vectorxf_linear_combo_2_with_fractions(VectorXf u, VectorXf v, VectorXf r) {
        float width = 100;
        // shitty iterative solution to find linear combo
        for (float a = -width; a <= width; ++a) {
            for (float b = -width; b <= width; ++b) {
                if (a * u + b * v == r) {
                    return to_string(a) + " " + to_string(b);
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
                            return to_string(n1) + '/' + to_string(d1) + ' '
                                + to_string(n2) + '/' + to_string(d2);
                        }
                        else if ((a * u) + (-b * v) == r) {
                            return to_string(n1) + '/' + to_string(d1) + ' ' + '-'
                                + to_string(n2) + '/' + to_string(d2);
                        }
                        else if ((-a * u) + (b * v) == r) {
                            return '-' + to_string(n1) + '/' + to_string(d1) + ' '
                                + to_string(n2) + '/' + to_string(d2);
                        }

                        else if ((-a * u) + (-b * v) == r) {
                            return '-' + to_string(n1) + '/' + to_string(d1) + ' ' + '-'
                                + to_string(n2) + '/' + to_string(d2);
                        }
                    }
                }
            }
        }

        return "IMPOSSIBLE";
    }

    string vectorxf_linear_combo_3(VectorXf u1, VectorXf u2,
        VectorXf u3, VectorXf v) {
        float width = 50;
        // shitty iterative solution to find linear combo
        for (float a = -width; a <= width; ++a) {
            for (float b = -width; b <= width; ++b) {
                for (float c = -width; c <= width; ++c) {
                    if (a * u1 + b * u2 + c * u3 == v) {
                        return to_string(a) + " " + to_string(b) + " " + to_string(c);
                    }
                }
            }
        }

        return "IMPOSSIBLE";
    }

    string matrixxf_linear_combo_2(MatrixXf A, MatrixXf B, MatrixXf M) {
        int width = 100;
        for (int a = -width; a <= width; ++a)
        {
            for (int b = -width; b <= width; ++b)
            {
                if (a * A + b * B == M)
                {
                    return to_string(a) + ' ' + to_string(b);
                }
            }
        }
        return "IMPOSSIBLE";
    }
}