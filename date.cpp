//
// Created by Andreys on 22.09.2023.
//

#include "date.h"

void date::set_Date(std::istream &ist)
{
    read_file(ist);
    check_file(ist);
}
void date::print_Date() const
{
    std::cout << year << " " << month << " " << day << " ";
}

void date::read_file(std::istream &ist)
{
    char dot;
    ist >> year;
    dot = ist.get();
    if (dot != '.') {throw std::runtime_error("Ожидалась точка");}
    ist>> month;
    dot = ist.get();
    if (dot != '.') {throw std::runtime_error("Ожидалась точка");}
    ist >> day;
    if (!ist.good()) {throw std::runtime_error("Строка не считана");}
}

void date::check_file(std::istream &ist)
{
    static const std::vector<int>days_of_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    static const std::vector<int>days_of_month_v = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(check_year(year))
    {
        if (days_of_month_v[month] <= day) {throw std::runtime_error("Неправильный день");}
    }
    else
    {
        if (days_of_month[month] <= day) {throw std::runtime_error("Неправильный день");}
    }
}

bool date::check_year(int year)
{
    if(year % 4 == 0)
    {
        return true;
    }
    return false;
}


