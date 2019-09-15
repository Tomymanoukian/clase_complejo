#ifndef COMPLEJO__H
#define COMPLEJO__H
#endif


class complejo
{
private:
    double x, y;

public:
    complejo();
    ~complejo();
    complejo(double, double);
    complejo(const complejo &);
    complejo operator+(complejo);
    complejo operator=(complejo);
    void imprime();
    
};