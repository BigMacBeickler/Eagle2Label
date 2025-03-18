//
// Created by bigma on 29.01.2023.
//
#include "parts.hpp"
#include "alltheheaders.hpp"


#ifndef EAGLE2LABEL_FILEHANDLER_H
#define EAGLE2LABEL_FILEHANDLER_H

struct parts;


class filehandler {
public:
    std::string filename;

    filehandler(const std::string file_name);
    bool writefile();
    bool readfile();
    bool createpartslist(std::vector<std::string>* content);
    ~filehandler();

private:
    std::fstream file;
    bool b_isOpen = false;
    std::vector<std::string> sFilecontent;
    //std::string inhalt;
    std::vector<parts*> partlist;
};


#endif //EAGLE2LABEL_FILEHANDLER_H
