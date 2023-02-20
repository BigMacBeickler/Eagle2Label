#include <iostream>
#include "filehandler.h"
//using namespace std;

std::string name;

int main()
{
    std::cout << "Hello World \n";
    std::cout << "Enter filename to open \n ";
    std::cin >> name;
    filehandler test(name);
    test.readfile();
    return 0;
}
