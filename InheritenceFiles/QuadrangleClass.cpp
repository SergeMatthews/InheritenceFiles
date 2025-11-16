#include "QuadrangleClass.h"

Quadrangle::Quadrangle(int length_a, int length_b, int length_c, int length_d,
    int angle_A, int angle_B, int angle_C, int angle_D) : Figure("Четырёхугольник", 4),
    length_a(length_a), length_b(length_b), length_c(length_c), length_d(length_d),
    angle_A(angle_A), angle_B(angle_B), angle_C(angle_C), angle_D(angle_D)
{}
int Quadrangle::GetLength_a() {
    return length_a;
}
int Quadrangle::GetLength_b() {
    return length_b;
}
int Quadrangle::GetLength_c() {
    return length_c;
}
int Quadrangle::GetLength_d() {
    return length_d;
}
int Quadrangle::GetAngle_A() {
    return angle_A;
}
int Quadrangle::GetAngle_B() {
    return angle_B;
}
int Quadrangle::GetAngle_C() {
    return angle_C;
}
int Quadrangle::GetAngle_D() {
    return angle_D;
}
