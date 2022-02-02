#include "sortic.h"

int min_ind(vector <int> & a)
{
	int ind = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < a[ind])
			ind = i;
	}
	return ind;
}

int max_ind(vector <int> & a)
{
	int ind = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > a[ind])
			ind = i;
	}
	return ind;
}

int char_cnt(string str, char ch)
{
	int cnt = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
			cnt++;
	}
	return cnt;
}

bool correct_num(string str)
{
	for (int i = 0; i < str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return false;
	}
	return true;
}
