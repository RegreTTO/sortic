#ifndef SORTIC_PARSE_H
#define SORTIC_PARSE_H

#include <vector>
#include <string>
#include "rules/rules.h"
using namespace std;

int parse_number(string str);
void parse_functions(string str, vector <int> & a, vector <int> & b);


#endif //SORTIC_PARSE_H
