//
// Created by Andreys on 22.09.2023.
//

#include "date.h"

void Date::setDate(std::istream &ist)
{
    std::string buff;
    ist >> buff;
    year = std::stoi(buff.substr(0, 4));
    month = std::stoi(buff.substr(5, 2));
    day = std::stoi(buff.substr(8, 2));
}
void Date::printDate(std::ostream &ost) const
{
    ost << year << ":" << month << ":" << day << " ";
}
