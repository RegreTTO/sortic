#include "rules.h"

void rra(vector <int> & a)
{
    if (a.size() > 1)
    {
        int tmp = a[a.size() - 1];
        for (int i = a.size() - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = tmp;
    }
}

void rrb(vector <int> & b)
{
    if (b.size() > 1)
    {
        int tmp = b[b.size() - 1];
        for (int i = b.size() - 1; i > 0; i--)
        {
            b[i] = b[i - 1];
        }
        b[0] = tmp;
    }
}

void rrr(vector <int> & a, vector <int> & b)
{
    rra(a);
    rrb(b);
}
