#include <iostream>

class Fraction
{
private:
    int chisl_;
    int znam_;

public:
    Fraction(int chisl, int znam)
    {
        chisl_ = chisl;
        znam_ = znam;
    }

    bool operator==(const Fraction& other) const
    {
        return chisl_ * other.znam_ == znam_ * other.chisl_;
    }

    bool operator!=(const Fraction& other) const
    {
        return !(*this == other);
    }

    bool operator<(const Fraction& other) const
    {
        return chisl_ * other.znam_ < znam_* other.chisl_;
    }

    bool operator>(const Fraction& other) const
    {
        return other < *this;
    }

    bool operator<=(const Fraction& other) const
    {
        return !(other < *this);
    }

    bool operator>=(const Fraction& other) const
    {
        return !(*this < other);
    }
};

int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}