// 헤더 파일: 클래스의 선언
#ifndef __POINT_H_
#define __POINT_H_

class Point
{
    private:
        int x;
        int y;

    public:
        bool InitMembers(int xpos, int ypos);
        int GetX() const;
        int GetY() const;
        int SetX(int xpos) const;
        int SetY(int ypos) const;
};
#endif