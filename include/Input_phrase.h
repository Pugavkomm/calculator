/**
 * @file Input_phrase.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef INP
#define INP
#include <string> 
class InputPhrase{
private:
    std::string phrase; 
    double result;
    void print_result();
public:
    void listen_phrase(); 
};
#endif