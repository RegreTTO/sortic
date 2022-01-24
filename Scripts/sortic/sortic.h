#ifndef SORTIC_H
#define SORTIC_H

#include "../rules/rules.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// start functions
void start();
void from_file(vector <int> & a, vector <int> & b);
void from_console(vector <int> & a, vector <int> & b);
// parsing
int parse_number(string str);
// algorithm
void print_vectors(vector <int> & a, vector <int> & b, string function_name);
void sort_algorithm(vector <int> & a, vector <int> & b, string & str);

#endif
