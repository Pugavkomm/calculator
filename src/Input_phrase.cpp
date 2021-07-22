/**
 * @file Input_phrase.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Input_phrase.h"
#include <iostream>
#include <Calculator.h>

void InputPhrase::listen_phrase(){
    Calculator calc; 
    while (true){
        std::cin >> phrase;
        result = calc.Calculate(phrase);
        print_result();
    }

}

void InputPhrase::print_result(){
    std::cout << "Result: " << result << std::endl; 
}