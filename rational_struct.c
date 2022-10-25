/*
 * Lucas Piñeiro Añón
 * Jacobo Estévez Rouco
 * Práctica 0
 * 02/02/2022
 * Grupo 3.2
 */

#include "rational_struct.h"

// Operation to create a rational number
Rational createRational(int n, int d) {
    Rational temp;
    temp.num= n;
    temp.den= d;
    return temp;
}

// Operation that returns the numerator of a rational number
int numerator(Rational r)
{
    return r.num;
}

// Operation that returns the denominator of a rational number
int denominator(Rational r)
{
    return r.den;
}

// Operation that returns the sum of two rationals
Rational sum(Rational r1, Rational r2)
{
    Rational s;
    s.num= r1.num * r2.den + r2.num * r1.den;
    s.den= r1.den * r2.den;
    return s;
}
