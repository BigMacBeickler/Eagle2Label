/*
use
#ifdef DEBUG

#endif
for debugging
*/

#include "alltheheaders.h"

bool bWhichfile;
std::string sName;
std::vector<data> dataset;
std::vector<filehandler> filestohandle;


int main()
{
    std::cerr << "Hello World \n";
    std::cout << "press 1 to use test.brd or 0 for another file" << "\n";
    std::cin >> bWhichfile;
    switch (bWhichfile) {
        case true:
            sName = "test.brd";
            break;
        default:
            std::cout << "Enter filename to open \n ";
            std::cin >> sName;
            break;
    }

    filehandler *test = new filehandler(sName);
    test->readfile();
    return 0;
}
