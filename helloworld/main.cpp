#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    std::string greeting = "Hello, what is your name?";
    std::cout << greeting << std::endl;

    std::string name;
    std:cin >> name;

    std::cout << "Hello " << name << ", pick a number." << std::endl;
    int num { };
    std::cin >> num;
    std::cout << "Your number multiplied by itself is: " << num * num << std::endl;

}