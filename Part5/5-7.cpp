Complex2 Complex2::operator+(const Complex2& c) const 
{
    Complex2 tmp(*this); // 반환할 값을 저장하기 위한 용도
    tmp.rPart += c.rPart;
    tmp.iPart += c.iPart;
    return tmp;
}
