#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

struct Complex{
    double real;
    double imag;

    void init(double r, double i){
        real =r;
        imag =i;
    }

    double abscomplex(){
        return sqrt(real*real + imag*imag);
    }

};

int main(){
    Complex A;

    A.init(1.1, 2.2);
    cout << A.abscomplex() << endl;
    return 0;
}