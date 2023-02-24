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
        //new data(&inhalt);
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
    std::string inhalt;
    while(std::getline(file, inhalt)){
#ifdef DEBUG
        std::cout << std::endl;
        std::cout << inhalt << std::endl;
        std::cout << std::endl;
#endif
    sFilecontent.push_back(inhalt);

/*#ifdef DEBUG
        std::cout << std::endl;
        int i = sFilecontent.size();
        std::cout << sFilecontent[i-1] << std::endl;
        std::cout << std::endl;
#endif*/
    }
    createpartslist(&sFilecontent);
    return true;
}

bool filehandler::createpartslist(std::vector<std::string>* content){
    std::cout << "Magic happened" << std::endl;
    return 0;
}