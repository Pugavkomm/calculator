/**
 * @file Calculator.cpp
 * @brief Implementing Calculator
 */
#include "Calculator.h"
#include <stack>
    
double Calculator::Calculate(std::string &phrase){
    std::stack<double> values; 
    std::stack<char> tmp; 
    std::string prn;
    for (size_t i = 0; i < phrase.size(); ++i){
        if (isdigit(phrase[i]))
            prn.push_back(phrase[i]);
        else{
            prn.push_back(' ');
            while(!tmp.empty() && priority(phrase[i]) <= priority(tmp.top())){
                prn.push_back(tmp.top());
                tmp.top();
            }
            tmp.push(phrase[i]);
        }
    }
    while(!tmp.empty()){
        prn.push_back(tmp.top());
        tmp.pop();
    }
    for (int i = 0; i < prn.size(); ++i){
        if(isdigit(prn[i])){
            double num = double(prn[i] - '0');
            for (++i; isdigit(prn[i]) && i < prn.size(); ++i){
                num *= 10;
                num += double(prn[i] - '0');
            }
            values.push(num);
            if(prn[i] != ' ')
                i--;
        } else{
            double r = values.top();
            values.pop();
            double l = values.top();
            values.pop();
            switch (prn[i])
            {
            case '+':
                values.push(l + r);
                break;
            case '-':
                values.push(l - r);
                break;
            case '*':
                values.push(l * r);
                break;
            case '/':
                values.push(l / r);
                break;
            default:
                break;
            }
        }
    }
    return values.top(); 
}

int Calculator::priority(char operation){
    if (operation == '+' || operation == '-')
        return 1;
    if (operation == '*' || operation == '/')
        return 2; 
    
}