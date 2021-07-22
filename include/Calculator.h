/**
 * @file Calculator.h
 * @brief Calculator class interface. 
 * 
 */

#ifndef CALC
#define CALC
#include <string>
class Calculator {
private:
    int priority(char operation);
public:
    /**
     * @brief 
     * 
     * @param x is left operand
     * @param oper is operator
     * @param y is right operand
     * @return result = x oper y
     */
    double Calculate(std::string &phrase);

};
#endif