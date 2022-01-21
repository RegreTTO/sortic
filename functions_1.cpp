#include "check_sortic.h"

void sa(vector <int> & a)
{
    if (a.size() > 1)
    {
        int tmp = a[0];
        a[0] = a[1];
        a[1] = tmp;
    }
}

void sb(vector <int> & b)
{
    if (b.size() > 1)
    {
        int tmp = b[0];
        b[0] = b[1];
        b[1] = tmp;
    }
}

void ss(vector <int> & a, vector <int> & b)
{
    sa(a);
    sb(b);
}
