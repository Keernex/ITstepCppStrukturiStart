#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <regex>
#include <time.h>
#include <windows.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>
using namespace std;

struct Pramokutnik
{
    string name;
    int height;
    int width;
    Pramokutnik();
    Pramokutnik(string name, int height, int width);
    void input_pramokutnik();
    void print_pramokutnik();
    void paint_pramokutnik();
};