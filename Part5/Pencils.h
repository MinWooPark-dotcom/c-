#ifndef PENCILS_H_INCLUDED
#define PENCILS_H_INCLUDED
class Pencils {
    int dozens;
    int np;
public:
    Pencils() : dozens(0), np(0){}; // 0으로 초기화하는 디폴트 생성자
    Pencils(int n)
        {
            dozens = n / 12;
            np = n % 12;
        }
    Pencils(int d, int n): dozens(d), np(n) {}
    Pencils &operator++();
    Pencils operator++(int);
    void display() const;
};
#endif