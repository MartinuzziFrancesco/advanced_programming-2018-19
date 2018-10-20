/*
    Advanced Programming 2018-19
    Implementation of uniq -c UNIC command
    
    @author Francesco Martinuzzi
    @version 2018/10/20
*/

#include <iostream>

int main()
{
	std::string line;
    std::string previous_line;
    std::getline(std::cin, previous_line);
    int counter = 1;
    while(std::getline(std::cin, line))
    {
        if(line != previous_line)
        {
            std::cout << counter<< previous_line << std::endl;
            previous_line = line;
            counter = 1;
        }
        else
            counter++;
	}
}