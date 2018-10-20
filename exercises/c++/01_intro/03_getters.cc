/*
    Reads an integer and a double from stdin
    
    @author Francesco Martinuzzi
    @version 2018/10/20
 */

#include <iostream>
#include <string>

int get_int() 
{
  int i;
  while(!(std::cin >> i)) {
    std::cin.clear();
    std::cin.ignore(); 
  }
  return i;
}

double get_double() {
  double i;
  while(!(std::cin >> i)) {
    std::cin.clear();
    std::cin.ignore(); 
  }
  return i;
}

int main() {
    std::cout << "Type an integer"<< std::endl;
    int j = get_int();
    std::cout << "Type a double"<< std::endl;
    double k = get_double();
    std::cout << "You typed an integer:"<< j << std::endl;
    std::cout << "and a double:"<< k << std::endl;

return 0;
}
