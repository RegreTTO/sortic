#ifndef SORTIC_H
#define SORTIC_H

#include "../rules/rules.h"
#include "../parse.h"
#include "../colors/colors.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// start functions
void start_sortic();

// algorithm
void print_vectors(vector <int> & a, vector <int> & b, string function_name);
void sort_algorithm(vector <int> & a, vector <int> & b, string & str);
int min_ind(vector <int> & a);
int max_ind(vector <int> & a);
int char_cnt(string str, char ch);
bool correct_num(string str);

#endif
