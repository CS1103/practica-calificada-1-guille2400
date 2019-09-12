//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
#include <ostream>
#include <iostream>
using namespace std;

class Polynomial {
private:
    vector<double>* arreglo;
public:
    Polynomial() {
        arreglo = new vector<double>();
    }
    void add(double elem, int exp )
    {
        arreglo->push_back(elem);
        arreglo->push_back(exp);
    }

    int degree();
    auto multiplicarPolinomioConsigoMismo(vector<double>*);
    auto sumarPolinomios(vector<double>*,vector<double>*);
    auto multiplicarPorConstante(vector<double>*, double);
    auto sumaPolinomioConConstante(vector<double>* array1,double constante);
    auto operator + (const int& xInteger)
    {
    }

};

#endif //POLINOMIO_POLINOMIO_H
