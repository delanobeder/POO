
#include "Fracao.h"

Fracao::Fracao(long n, long d)
{
    if (d == 0)
    {
        cerr << "Denominator may not be 0." << endl;
        exit(0);
    }
    else if (n == 0)
    {
        numerator = 0;
        denominator = 1;
    }
    else
    {
        int sign = 1;
        if (n < 0)
        {
            sign *= -1;
            n *= -1;
        }
        if (d < 0)
        {
            sign *= -1;
            d *= -1;
        }

        long tmp = mdc(n, d);
        numerator = n / tmp * sign;
        denominator = d / tmp;
    }
}

long Fracao::mdc(long a, long b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

Fracao Fracao::operator+(const Fracao &frac) const
{
    Fracao tmp(this->numerator * frac.denominator + frac.numerator * this->denominator,
               this->denominator * frac.denominator);
    return tmp;
}

Fracao Fracao::operator-(const Fracao &frac) const
{
    Fracao tmp(this->numerator * frac.denominator - frac.numerator * this->denominator,
               this->denominator * frac.denominator);
    return tmp;
}

Fracao Fracao::operator*(const Fracao &frac) const
{
    Fracao tmp(this->numerator * frac.numerator,
               this->denominator * frac.denominator);
    return tmp;
}

Fracao Fracao::operator/(const Fracao &frac) const
{
    Fracao tmp(this->numerator * frac.denominator,
               this->denominator * frac.numerator);
    return tmp;
}

ostream &operator<<(ostream &ost, const Fracao &frac)
{
    if (frac.denominator == 1)
    {
        ost << frac.numerator;
    }
    else
    {
        ost << frac.numerator << "/" << frac.denominator;
    }
    return ost;
}