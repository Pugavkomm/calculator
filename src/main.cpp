/**
 * @file main.cpp
 * @author Pugavkomm (slavapugavko2@gmail.com)
 * @brief 
 * @version 0.0.1
 * @date 2021-07-16
 * 
 * @copyright Copyright (MIT) 2021
 * 
 */
#include <iostream>
#include <Calculator.h>
using CALC::Calculator;

int main(int argc, char *argv[])
{
	double x, y, result;
	char oper; 
	Calculator calc; 

	while (true)
	{
		std::cin >> x >> oper >> y;
		result = calc.Calculate(x, oper, y);
		std::cout << "Result is: " << result << std::endl;
	}
	return 0;
	
}