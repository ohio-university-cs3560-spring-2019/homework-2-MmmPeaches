#include <iostream>
#include <sstream>
#include <algorithm>

#include "func.h"

using namespace std; 
  
int main(int argc, char** argv) 
{ 
    string str1(argv[1]);
    string str2(argv[2]);

    string s;

    getline(cin, s);

    func(str1, str2, s);

    return 0; 
}