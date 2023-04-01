#include<iostream>
#include <array>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;


std::vector<std::string> towerBuilder(unsigned nFloors) {
    vector<string> torre{};
    string fila {};
    for (size_t i = 0; i < nFloors; i++)
    {
        for (size_t j = 1; j < nFloors*2; j++)
        {
            if (j<nFloors+i || j>nFloors+i)
            {
                fila+=" ";
            } else{
                fila+="*";
            }
        }
        torre.push_back(fila);
        fila="";
    }
    
    return torre;
}

int main(){

    vector<string> torre= towerBuilder(6);
    cout<<torre[0];
    for (int i = 0; i < torre.size(); i++)
    {
        for (int j = 0; j < torre[0].size(); j++)
        {
            cout<<torre[j];
        }
        cout<<"--------------";
    }
    
    return 0;
}