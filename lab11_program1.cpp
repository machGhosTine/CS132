// **********************************************
// CS132 LAB #11
// Justin Middagh - 5/6/21
// PROGRAM-NAME: Lab11_Program1
// This program will conduct the rational number operations,
// to perform ‘addition’, ‘subtraction’, ‘multiplication’,
// and ‘division’ operations on two fractions.
//**********************************************

#include <iostream>
using namespace std;

class RationalNumber
{
    int numerator;
    int denominator;

public:
    RationalNumber(int num, int den);
    RationalNumber(int num);

    void add(RationalNumber rn);
    void subtract(RationalNumber rn);
    void multiply(RationalNumber rn);
    void divide(RationalNumber rn);
    void printNumber();

    int getNum();
    void setNum(int numerator);
    int getDen();
    void setDen(int denominator);
};

RationalNumber::RationalNumber(int num, int den)
{
    this->numerator = num;
    this->denominator = den;
}

RationalNumber::RationalNumber(int num)
{
    this->numerator = num;
    this->denominator = 1;
}

void RationalNumber::setNum(int numerator)
{
    this->numerator = numerator;
}
int RationalNumber::getNum()
{
    return numerator;
}
void RationalNumber::setDen(int denominator)
{
    this->denominator = denominator;
}
int RationalNumber::getDen()
{
    return denominator;
}

void RationalNumber::add(RationalNumber rn)
{
    int a, b, c, d;
    a = getNum();
    b = getDen();
    c = rn.getNum();
    d = rn.getDen();
    int sumnumer = (a * d + b * c);
    int sumdenom = (b * d);
    cout << sumnumer << "/" << sumdenom;
}

void RationalNumber::subtract(RationalNumber rn)
{
    int a, b, c, d;
    a = getNum();
    b = getDen();
    c = rn.getNum();
    d = rn.getDen();
    int subnumer = (a * d - b * c);
    int subdenom = (b * d);
    cout << subnumer << "/" << subdenom;
}

void RationalNumber::multiply(RationalNumber rn)
{
    int a, b, c, d;
    a = getNum();
    b = getDen();
    c = rn.getNum();
    d = rn.getDen();
    int mulnumer = (a * c);
    int muldenom = (b * d);
    cout << mulnumer << "/" << muldenom;
}

void RationalNumber::divide(RationalNumber rn)
{
    int a, b, c, d;
    a = getNum();
    b = getDen();
    c = rn.getNum();
    d = rn.getDen();
    int divnumer = (a * d);
    int divdenom = (c * b);
    cout << divnumer << "/" << divdenom;
}

void RationalNumber::printNumber()
{
    cout << getNum() << "/" << getDen();
}

int main()
{
    RationalNumber rn1(1, 6);
    RationalNumber rn2(2);

    cout << "First Number:";
    rn1.printNumber();
    cout << "\nSecond Number:";
    rn2.printNumber();

    cout << "\nAddition :";
    rn1.add(rn2);

    cout << "\nSubtraction :";
    rn1.subtract(rn2);

    cout << "\nMultiplication :";
    rn1.multiply(rn2);

    cout << "\nDivision :";
    rn1.divide(rn2);

    return 0;
}