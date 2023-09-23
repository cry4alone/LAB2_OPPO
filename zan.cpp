//
// Created by Andreys on 22.09.2023.
//
#include "zan.h"

void Zan::load_txt(std::istream &ist)
{
    currdate.setDate(ist);
    ist >> time;
    ist >> name;
}

void Zan::print_txt(std::ostream &out)
{
    currdate.printDate(out);
    out << time << " ";
    out << name << " ";
}
