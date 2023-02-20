//
// Created by bigma on 29.01.2023.
//
#include "alltheheaders.h"

filehandler::filehandler(const std::string file_name) {
    this->filename = "../" + file_name;
    //filename = "../" + filename;
    file.open(filename,std::ios::in);
    if(!file.is_open()) {
        std::cerr << "opening the file failed \n";
    }else{
        new data(&inhalt);
    }
    file.close();
}

filehandler::~filehandler() {
    file.close();
    std::cout << "i'm deeeeeeeeeeeeeeeeeeeeeaaaaaaaaaaaaaad \n";
}

bool filehandler::writefile() {
    return false;
}

bool filehandler::readfile() {
    file.open(filename, std::ios::in);
    if (file.fail()) {
        std::cout << "reading failed \n";
        return false;
    }

    while(std::getline(file, inhalt)){

#ifdef DEBUG
        std::cout << std::endl;
        std::cout << inhalt << std::endl;
        std::cout << std::endl;
#endif
    }

    return true;
}