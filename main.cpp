#include "zan.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

int load(vector<Zan>& data, istream& ist)
{
    int size = 0;
    while(!ist.eof())
    {
        Zan newClass;
        newClass.load_txt(ist);
        data.push_back(newClass);
        size++;
    }
    return size - 1;
}

void print_data(vector<Zan>& data, int size)
{
    for (int i = 0; i < size; i++)
    {
        data[i].print_txt(cout);
        cout << endl;
    }
}

int main()
{
    vector <Zan> data;
    ifstream in("/Users/Andreys/CLionProjects/untitled/n.txt");
    in.close();
    try
    {
        int size = load(data, in);
        print_data(data, size);
    }
    catch (runtime_error& err)
    {
        cout << err.what() << endl;
    }
    return 0;
}