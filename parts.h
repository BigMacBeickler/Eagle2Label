//
// Created by bei on 23.02.2023.
//

#ifndef EAGLE2LABEL_PARTS_H
#define EAGLE2LABEL_PARTS_H

#include "alltheheaders.h"

struct parts {

    std::string sName;
    std::string sGroup;
    std::string sModel;
    bool bNamefield;

    parts();
};

struct relais : protected parts{

    std::string sPackage;
    int iPinnumber;
};

struct dil : protected parts{

    int iPinnumber;
};

struct connector : protected parts{

    int iPinnumber;
};

//plug like a coax plug

struct plug : protected parts{

};

//like resistor, condensator etc.
struct discrete : protected parts{

};
#endif //EAGLE2LABEL_PARTS_H
