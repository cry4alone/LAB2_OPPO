//
// Created by Andreys on 22.09.2023.
//
#include "zan.h"

void zan::load_txt(std::istream &ist)
{
    CurrDate.setDate(ist);
    ist >> time;
    ist >> name;
}

void zan::print_txt()
{
    CurrDate.printDate();
    std::cout << time << " ";
    std::cout << name << " ";
}
