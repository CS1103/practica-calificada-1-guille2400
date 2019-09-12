//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"
using  namespace std;

int Polynomial::degree() {
    auto it = arreglo->end()-1;
    cout<< *it;
}

auto Polynomial::multiplicarPolinomioConsigoMismo(vector<double>* array1)
{
    auto first = array1->begin();
    auto last = array1->end();
    float temp = 0;

    for(auto i = first; i != last ; i++)
    {

    }
}

auto Polynomial::sumarPolinomios(vector<double>* array1,vector<double>* array2) {
    auto first = array1->begin();
    auto last = array1->end();
    auto first1 = array2->begin();
    auto last1 = array2->end();
    float temp = 0;
    int a=1;
    int sum=0;
    while (a%2!=0)
    {
        for (auto i = first; i != last; i++)
        {
            for (auto k = first1; i!=last; i++)
            {
                sum=*i+*k;
            }
        }
        a++;
    }
}
auto Polynomial::multiplicarPorConstante(vector<double>* array1,double constante)
{
    auto it = array1->begin();
    cout<< (*it)*constante;
}
auto Polynomial::sumaPolinomioConConstante(vector<double>* array1,double constante)
{
    auto it = array1->begin();
    cout<< (*it)+constante;
}
