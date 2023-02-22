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


int main(int argc, char *argv[])
{
    //check argc if any commands had been passed. first is always the filename, so commands had been passed when argc > 1
    if(argc < 2){
        std::cout << " " << argv[0] << " " << std::endl;
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
    }else{
        sName = argv[1];
    }
    filehandler *test = new filehandler(sName);
    test->readfile();
    delete test;
    return 0;
}
