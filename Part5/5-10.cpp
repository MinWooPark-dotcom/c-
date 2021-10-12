Complex2 operator+(double r, const Complex2& c)
{
    return Complex2(r + c.rPart, c.iPart); // c의 private 멤버를 사용할 수 없다.
}