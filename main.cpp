#include "zan.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

int load(vector<zan>& data, istream& ist)
{
    int size = 0;
    while(!ist.eof())
    {
        zan newClass;
        newClass.load_txt(ist);
        data.push_back(newClass);
        size++;
    }
    return size - 1;
}

void print_data(vector<zan>& data, int size)
{
    for (int i = 0; i < size; i++)
    {
        data[i].print_txt();
        cout << endl;
    }
}

int main()
{
    vector <zan> data;
    ifstream in("/Users/Andreys/CLionProjects/untitled/in.txt");
    int size = load(data, in);
    print_data(data, size);
    in.close();
    return 0;
}