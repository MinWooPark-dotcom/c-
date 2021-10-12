Complex2& Complex2::operator+=(const Complex2&c)
{
    rPart += c.rPart;
    iPart += c.iPart;
    return *this;
}