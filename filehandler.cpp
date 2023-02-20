//
// Created by bigma on 29.01.2023.
//
#include "filehandler.h"
#include <iostream>




filehandler::filehandler(std::string file_name) {
    this->filename = "../" + file_name;
    //filename = "../" + filename;
    file.open(filename,std::ios::in);
    if(!file.is_open()) {
        std::cout << "opening the file failed \n";
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
    if(file.fail()){
        std::cout << "reading failed \n";
        return false;
    }
    int n = 0;
    while (!file.eof()) {
        std::cout << "reading line " << n ;
        file.getline(inhalt, 100, '\n');
        std::cout << inhalt;
        n++;
    }
    return true;
}


//
//bool write(std::string text) {
//    std::ofstream file;
//    file.open(file_name, std::ios::app);
//    if (file.is_open()) {
//        file << text << std::endl;
//        file.close();
//        return true;
//    } else {
//        return false;
//    }
//}
//
//std::string read() {
//    std::ifstream file;
//    file.open(file_name);
//    std::string text, line;
//    if (file.is_open()) {
//        while (getline(file, line)) {
//            text += line + "\n";
//        }
//        file.close();
//    }
//    return text;
//}
//



