#ifndef CHECK_SORTIC_H
#define CHECK_SORTIC_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// start functions
void start();
void from_file(vector <int> & a, vector <int> & b);
void from_console(vector <int> & a, vector <int> & b);
// sorting
vector <int> msort(vector <int> a);
// parsing
int parse_number(string str);
void parse_functions(string str, vector <int> & a, vector <int> & b);

#endif
