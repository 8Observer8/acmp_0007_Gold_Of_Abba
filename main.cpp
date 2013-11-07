/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on November 7, 2013, 2:41 PM
 */

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/**
 * Check of number
 * 
 * @param input The input data
 * @return Is Number?
 */
bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

/**
 * The max value
 * 
 * @param first The first value
 * @param second The second value
 * @param third The third value
 * @return The max value
 */
string max(string first, string second, string third) {
    string result;
    
    if (is_number(first) && is_number(second) && is_number(third)) {
        string max = first;
        if (max < second) {
            max = second;
        }
        if (max < third) {
            max = third;
        }
        result = max;
    } else {
        result = "Error: incorrect input data.";
    }
    
    return result;
}

int main(int argc, char** argv) {
    ifstream in;
    string inFileName = "input.txt";
    in.open(inFileName.c_str());
    if (!in.is_open()) {
        cerr << "Error: could not open the file: " << inFileName.c_str() << endl;
        return 1;
    }

    ofstream out;
    string outFileName = "output.txt";
    out.open(outFileName.c_str());
    if (!out.is_open()) {
        cerr << "Error: could not open the file: " << outFileName.c_str() << endl;
        return 1;
    }

    string first;
    string second;
    string third;
    string result;
    
    if (in >> first >> second >> third) {
        result = max(first, second, third);
        out << result << endl;
    } else {
        cerr << "Error: incorrect data in the file: " << inFileName.c_str() << endl;
        return 1;
    }

    return 0;
}
