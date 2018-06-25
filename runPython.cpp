#include <iostream>
#include <cstdio>

using namespace std;
 // main() is where program execution begins.

 int main()
 {
    std::string filename = "script.py";
    std::string command = "python3 ";
    command += filename;
    
    FILE* in = popen(command.c_str(), "w");
    pclose(in);
    return 0;
 }