#include "sortic.h"

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

void print_vectors(vector <int> & a, vector <int> & b, string function_name)
{
	cout << function_name << endl;
	cout << "------------------------------------------------------------" << endl;
	int size1 = a.size();
	int size2 = b.size();
	int i = 0;
	int j = 0;
	while (i < size1 || j < size2)
	{
		if (i < size1)
		{
			cout << a[i] << " ";
			i++;
		}
		else
		{
			cout << " " << " ";
		}
		if (j < size2)
		{
			cout << b[j] << endl;
			j++;
		}
		else
		{
			cout << " " << endl;
		}
	}
	cout << "------------------------------------------------------------" << endl;
}

void sort_algorithm(vector <int> & a, vector <int> & b, string & str)
{
	str = "";
	int move_cnt = 0;
	cout << "------------------------------------------------------------" << endl;
	while (a.size() > 1)
	{
		if (move_cnt == a.size() - 1)
		{
			pb(a, b);
			move_cnt = 0;
			str += "pb\n";
			print_vectors(a, b, "pb");
		}
		else
		{
			if (a[0] >= a[1])
			{
				ra(a);
				move_cnt++;
				str += "ra\n";
				print_vectors(a, b, "ra");
			}
			else
			{
				sa(a);
				str += "sa\n";
				print_vectors(a, b, "sa");
			}
		}
	}
	while (b.size() > 0)
	{
		pa(a, b);
		str += "pa\n";
		print_vectors(a, b, "pa");
	}
	cout << "full answer is: " << endl <<
		"------------------------------------------------------------" << endl << str;
}
