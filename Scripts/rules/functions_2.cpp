#include "rules.h"

void pa(vector <int> & a, vector <int> & b)
{
    if (b.size() > 0)
    {
        a.push_back(b[0]);
		rra(a);
        rb(b);
        b.pop_back();
    }
}

void pb(vector <int> & a, vector <int> & b)
{
    if (a.size() > 0)
    {
        b.push_back(a[0]);
		rrb(b);
        ra(a);
        a.pop_back();
    }
}
