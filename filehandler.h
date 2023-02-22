//
// Created by bigma on 29.01.2023.
//
#include "alltheheaders.h"

#ifndef EAGLE2LABEL_FILEHANDLER_H
#define EAGLE2LABEL_FILEHANDLER_H



class filehandler {
public:
    std::string filename;

    filehandler(const std::string file_name);
    bool writefile();
    bool readfile(const dataset* );
    virtual ~filehandler();

private:
    std::fstream file;
    bool b_isOpen = false;
    std::string inhalt;
};


#endif //EAGLE2LABEL_FILEHANDLER_H
