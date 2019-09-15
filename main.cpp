#include <iostream>
    using namespace std;
#include "complejo.h"

int main(){

    complejo a;
    complejo b(2, 3);
    complejo c(b);

    std::cout << "a = ";
    a.imprime();
    std::cout << "b = ";
    b.imprime();
    std::cout << "c = ";
    c.imprime();

    a = b + c;
    std::cout << "a = ";
    a.imprime();



    return 0;
}