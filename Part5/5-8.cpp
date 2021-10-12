Complex2 Complex2::operator+(const Complex2& c) const 
{
    return Complex2(rPart + c.rPart, iPart + c.iPart);
}