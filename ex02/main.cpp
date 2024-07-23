#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address of ptr: " << ptr << std::endl;
    std::cout << "Memory address of ref: " << &ref << std::endl;
    std::cout << "              -------" << std::endl;
    std::cout << "Value of the str: '" << str << "'" << std::endl;
    std::cout << "Value pointed to by ptr: '" << *ptr << "'" << std::endl;
    std::cout << "Value pointed to by ref: '" << ref << "'" << std::endl;
    return 0;
}
