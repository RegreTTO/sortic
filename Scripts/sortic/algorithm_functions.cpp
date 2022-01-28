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

void sort_first(vector <int> & a, vector <int> & b, string & str)
{
	while (a.size() > 3)
	{
		int min = min_ind(a);
		int path_left = min;
		int path_right = a.size() - min;
		if (path_left < path_right)
		{
			for (int j = 0; j < path_left; j++)
			{
				ra(a);
				str += "ra\n";
				print_vectors(a, b, "ra");
			}
		}
		else
		{
			for (int j = 0; j < path_right; j++)
			{
				rra(a);
				str += "rra\n";
				print_vectors(a, b, "rra");
			}
		}
		pb(a, b);
		str += "pb\n";
		print_vectors(a, b, "pb");
	}
}

void sort_last(vector <int> & a, vector <int> & b, string & str)
{
	int max = max_ind(a);
	int left_path = max + 1;
	int right_path = a.size() - 1 - max;
	if (right_path < left_path)
	{
		for (int i = 0; i < right_path; i++)
		{
			rra(a);
			str += "rra\n";
			print_vectors(a, b, "rra");
		}
	}
	else
	{
		for (int i = 0; i < left_path; i++)
		{
			ra(a);
			str += "ra\n";
			print_vectors(a, b, "ra");
		}
	}
	if (a[1] < a[0])
	{
		sa(a);
		str += "sa\n";
		print_vectors(a, b, "sa");
	}
}

void sort_algorithm(vector <int> & a, vector <int> & b, string & str)
{
	str = "";
	cout << "------------------------------------------------------------" << endl;
	sort_first(a, b, str);
	sort_last(a, b, str);
	while (b.size() > 0)
	{
		pa(a, b);
		str += "pa\n";
		print_vectors(a, b, "pa");
	}
	cout << "full answer is: " << endl <<
		"------------------------------------------------------------" << endl << str <<
		"------------------------------------------------------------" << endl << 
		"functions made: " << char_cnt(str, '\n') << endl;
}
