Complex2 operator+(double r, const Complex2& c)
{
    return Complex2(r + c.real(), c.imag());
}