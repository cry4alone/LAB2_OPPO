//
// Created by Andreys on 22.09.2023.
//

#ifndef UNTITLED_ZAN_H
#define UNTITLED_ZAN_H

#include <iostream>
#include <string>
#include <fstream>
#include "date.h"


class zan  {
private:
    std::string name;
    date CurrDate;
    std::string time;
public:
    void load_txt(std::istream &ist);
    void print_txt();
};

#endif //UNTITLED_ZAN_H
