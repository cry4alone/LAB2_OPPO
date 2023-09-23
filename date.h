//
// Created by Andreys on 22.09.2023.
//

#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H
#include <fstream>
#include <iostream>
class Date{
private:
    int day;
    int month;
    int year;
public:
    void setDate(std::istream &ist);
    void printDate(std::ostream &ost) const;
};

#endif //UNTITLED_DATE_H
