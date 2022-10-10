#include "calculator.h"

/// @brief  
/// @param a - first num
/// @param b - second num
/// @return a + b + 0.5
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

/// @brief
/// @param a first number 
/// @param b second number
/// @return a - b
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}


/// @brief  
/// @param a - first num
/// @param b - second num
/// @return a * b + 0.5
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
