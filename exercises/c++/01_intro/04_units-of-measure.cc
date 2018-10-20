/*
    Conversione from meters to inches and viceversa.
    1 inch = 0.0254 m
    
    @author Francesco Martinuzzi
    @version 2018/20/10
*/

#include <iostream>
#include <regex>

std::string converter(double value, std::string unit)
{
    std::ostringstream new_value;
    if (unit == "m")
    {
        new_value << value*(1/0.0254) << " inch" << std::endl;
    }
    else if (unit == "inch")
    {
        new_value << value*0.0254 << " m" << std::endl; 
    }
    else
    {
       new_value << "Unit of measure not found. Please use 'm' for meters and 'inch' for inches" << std::endl;
    }
    return new_value.str();
}

int main()
{
    double value;
    std::string unit;
    std::cout << "Enter a value with the unit of measure for the conversion" << std::endl;
    std::cin >> value;
    std::cin >> unit;
    std::cout << converter(value, unit) << std::endl;
    return 0;
    
}