#include "rules.h"

void ra(vector <int> & a)
{
    if (a.size() > 1)
    {
        int tmp = a[0];
        for (int i = 0; i < a.size() - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[a.size() - 1] = tmp;
    }
}

void rb(vector <int> & b)
{
    if (b.size() > 1)
    {
        int tmp = b[0];
        for (int i = 0; i < b.size() - 1; i++)
        {
            b[i] = b[i + 1];
        }
        b[b.size() - 1] = tmp;
    }
}

void rr(vector <int> & a, vector <int> & b)
{
    ra(a);
    rb(b);
}
