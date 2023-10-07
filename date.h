//
// Created by Andreys on 22.09.2023.
//

#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H
#include <fstream>
#include <iostream>
#include <vector>
class date{
private:
    int day;
    int month;
    int year;
public:
    void set_Date(std::istream &ist);
    void print_Date() const;
    void read_file(std::istream &ist);
    void check_file(std::istream &ist);
    bool check_year(int year);
};

#endif //UNTITLED_DATE_H
