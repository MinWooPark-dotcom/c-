#ifndef COMPLEX2_H_INCLUDED
#define COMPLEX2_H_INCLUDED
#include <ostream>
using namespace std;
class Complex2 {
    double rPart, iPart; // real numbers and imaginary numbers
public:
    // constructor
    Complex2(double r=0, double i=0): rPart(r), iPart(i) {}
    Complex2 conj() const {
        return Complex1(rPart, -iPart);
    }
    Complex2 operator+(const Complex2 &c) const;
    // private 멤버인 rPart, iPart 접근하기 위한 코드
    // 방법1. 클래스에 데이터 멤버의 값을 읽을 수 있는 멤버함수를 정의
    double real() const { return rPart; } // 실수부의 값 반환
    double imag() const { return iPart; } // 허수부의 값 반환
    // 방법2. friend 키워드 사용
    friend Complex2 operator+(double r, const Complex2 &c);
};
#endif