//
// Created by Andreys on 22.09.2023.
//

#include "date.h"

void date::setDate(std::istream &ist)
{
    ist >> year >> month >> day;
}
void date::printDate() const
{
    std::cout << year << " " << month << " " << day << " ";
}
