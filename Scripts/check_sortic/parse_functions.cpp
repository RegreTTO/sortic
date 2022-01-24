#include "check_sortic.h"

int parse_number(string str)
{
    int sign = 0; // 0 - false; 1 - true
    if (str.size() > 0 && str[0] == '-')
        sign = 1;
    int num = 0;
    int mult = 1;
    for (int i = str.size() - 1; i >= sign; i--)
    {
        num += (str[i] - '0') * mult;
        mult *= 10;
    }
	if (sign == 1)
		num *= -1;
    return num;
}

void parse_functions(string str, vector <int> & a, vector <int> & b)
{
    if (str == "sa")
        sa(a);
    else if (str == "sb")
        sb(b);
    else if (str == "ss")
        ss(a, b);
    else if (str == "pa")
        pa(a, b);
    else if (str == "pb")
        pb(a, b);
    else if (str == "ra")
        ra(a);
    else if (str == "rb")
        rb(b);
    else if (str == "rr")
        rr(a, b);
    else if (str == "rra")
        rra(a);
    else if (str == "rrb")
        rrb(b);
    else if (str == "rrr")
        rrr(a, b);
}
