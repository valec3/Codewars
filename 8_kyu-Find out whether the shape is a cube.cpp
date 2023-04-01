#include<iostream>
#include <array>
#include <cstring>
using namespace std;

bool is_cube(int volume, int side)
{
    if(volume>0 && side>0 && side*side*side==volume){
        return true;
    }
    return false;
}
