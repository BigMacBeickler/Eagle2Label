//
// Created by bigma on 20.02.2023.
//

#ifndef EAGLE2LABEL_DATA_H
#define EAGLE2LABEL_DATA_H

#include "alltheheaders.hpp"


class data {
public:
    data(std::string* datatohandle);

private:
    std::vector<std::string> readdata;
};


#endif //EAGLE2LABEL_DATA_H