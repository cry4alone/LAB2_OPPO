//
// Created by Andreys on 22.09.2023.
//
#include "zan.h"

void Zan::load_txt(std::istream &ist)
{
    currdate.set_Date(ist);
    ist >> time;
    ist >> name;
}

void Zan::print_txt(std::ostream &ost)
{
    currdate.print_Date();
    ost << time << " ";
    ost << name << " ";
}
