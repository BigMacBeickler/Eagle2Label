//
// Created by bigma on 29.01.2023.
//
#include "filehandler.h"
#include <iostream>


void test(){
        std::cout << "xxxxxxxxxxxxx";
};

filehandler::filehandler(std::string file_name) {
    this->filename = file_name;
    file.open(file_name, std::ios::in | std::ios::out);
}

filehandler::~filehandler() {
    file.close();

}

bool filehandler::writefile() {
    return false;
}

bool filehandler::readfile() {
    return false;
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



