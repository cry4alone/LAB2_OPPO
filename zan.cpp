//
// Created by Andreys on 22.09.2023.
//
#include "zan.h"

void zan::load_txt(std::istream &ist)
{
    CurrDate.set_Date(ist);
    ist >> time;
    ist >> name;
}

void zan::print_txt()
{
    CurrDate.print_Date();
    std::cout << time << " ";
    std::cout << name << " ";
}
