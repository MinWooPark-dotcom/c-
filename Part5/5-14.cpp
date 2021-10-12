ostream &operator<<(ostream &os, const Complex2 &c)
{
    os << "(" << c.rPart; // 실수부 출력
    if(c.iPart > 0) // 허수부 출력
        os << "+j" << c.iPart;
    else if (c.iPart < 0)
        os << "-j" << -c.iPart;
    cout << ")" 
    return os;
}