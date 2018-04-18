#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::cout << "What is your name? " << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << ". " << "And what is yours? " << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;

    return 0;
}
