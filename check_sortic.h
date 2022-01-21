#ifndef CHECK_SORTIC_H
#define CHECK_SORTIC_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// start functions
void start();
void from_file(vector <int> & a, vector <int> & b);
void from_console(vector <int> & a, vector <int> & b);
// main functions
void sa(vector <int> & a);
void sb(vector <int> & b);
void ss(vector <int> & a, vector <int> & b);
void pa(vector <int> & a, vector <int> & b);
void pb(vector <int> & a, vector <int> & b);
void ra(vector <int> & a);
void rb(vector <int> & b);
void rr(vector <int> & a, vector <int> & b);
void rra(vector <int> & a);
void rrb(vector <int> & b);
void rrr(vector <int> & a, vector <int> & b);
// sorting
vector <int> msort(vector <int> a);
// parsing
int parse_number(string str);
void parse_functions(string str, vector <int> & a, vector <int> & b);

#endif
