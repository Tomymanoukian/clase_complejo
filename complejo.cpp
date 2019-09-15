#include <iostream>
    using namespace std;
#include "complejo.h"

complejo::complejo(){
    x = y = 0;
}

complejo::~complejo(){}

complejo::complejo(double m, double n){
    x = m;
    y = n;
}

complejo::complejo(const complejo &r){
    x = r.x;
    y = r.y;
}

    
complejo complejo::operator+(complejo r){
    x = x + r.x;
    y = y + r.y;
    return *this;
}

complejo complejo::operator=(complejo r){
    x = r.x;
    y = r.y;
    return *this;
}

void complejo::imprime(){
    std::cout << "(" << x << "," << y << ")" << endl;
}