#include<iostream>
#include <array>
#include <cstring>

using namespace std;
array<string, 3> fixTheMeerkat(array<string, 3> arr) {
    return {arr[2],arr[1],arr[0]};
}
