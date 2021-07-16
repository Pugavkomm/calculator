/**
 * @file Calculator.h
 * @brief Calculator class interface. 
 * 
 */

#ifndef CALC
#define CALC
class Calculator {
public:
    /**
     * @brief 
     * 
     * @param x is left operand
     * @param oper is operator
     * @param y is right operand
     * @return result = x oper y
     */
    double Calculate(double x, char oper, double y);

};
#endif