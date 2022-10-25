/*
 * Lucas Piñeiro Añón
 * Jacobo Estévez Rouco
 * Práctica 0
 * 02/02/2022
 * Grupo 3.2
 */

#ifndef UNTITLED20_RATIONAL_STRUCT_H
#define UNTITLED20_RATIONAL_STRUCT_H

typedef struct Data Rational;

struct Data {
    int num;
    int den;
};

Rational createRational(int n, int d);
int numerator(Rational r);
int denominator(Rational r);
Rational sum(Rational r1, Rational r2);

#endif //UNTITLED20_RATIONAL_STRUCT_H
