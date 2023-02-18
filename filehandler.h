//
// Created by bigma on 29.01.2023.
//

#ifndef EAGLE2LABEL_FILEHANDLER_H
#define EAGLE2LABEL_FILEHANDLER_H

#include <fstream>

void test();

class filehandler {
public:
    std::string filename;

    filehandler(std::string file_name);
    bool writefile();
    bool readfile();
    virtual ~filehandler();

private:
    std::fstream file;
    bool b_isOpen = false;
    char inhalt[];
};


#endif //EAGLE2LABEL_FILEHANDLER_H
