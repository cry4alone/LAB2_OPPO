//
// Created by Andreys on 22.09.2023.
//

#include "date.h"

void Date::setDate(std::istream &ist)
{
    ist >> year >> month >> day;
}
void Date::printDate(std::ostream &ost) const
{
    ost << year << " " << month << " " << day << " ";
}
